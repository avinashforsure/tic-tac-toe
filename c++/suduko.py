import random

def print_board(board):
    for i in range(9):
        if i % 3 == 0 and i != 0:
            print("- - - - - - - - - - - -")
        for j in range(9):
            if j % 3 == 0 and j != 0:
                print("|", end=" ")
            print(board[i][j], end=" ")
        print()

def is_valid(board, row, col, num):
    # Check if the number is not in the current row and column
    for x in range(9):
        if board[row][x] == num or board[x][col] == num:
            return False

    # Check the 3x3 box
    start_row, start_col = 3 * (row // 3), 3 * (col // 3)
    for i in range(3):
        for j in range(3):
            if board[i + start_row][j + start_col] == num:
                return False
    return True

def solve_sudoku(board):
    empty = find_empty_location(board)
    if not empty:
        return True  # Puzzle solved
    row, col = empty

    for num in range(1, 10):
        if is_valid(board, row, col, num):
            board[row][col] = num
            if solve_sudoku(board):
                return True
            board[row][col] = 0  # Backtrack
    return False

def find_empty_location(board):
    for i in range(9):
        for j in range(9):
            if board[i][j] == 0:
                return (i, j)
    return None

def generate_sudoku():
    board = [[0 for _ in range(9)] for _ in range(9)]
    for _ in range(17):  # Fill 17 cells to create a solvable puzzle
        row, col = random.randint(0, 8), random.randint(0, 8)
        num = random.randint(1, 9)
        while not is_valid(board, row, col, num) or board[row][col] != 0:
            row, col = random.randint(0, 8), random.randint(0, 8)
            num = random.randint(1, 9)
        board[row][col] = num
    return board

def main():
    board = generate_sudoku()
    print("Sudoku Puzzle:")
    print_board(board)

    while True:
        try:
            row = int(input("Enter row (0-8): "))
            col = int(input("Enter column (0-8): "))
            num = int(input("Enter number (1-9): "))
            if is_valid(board, row, col, num):
                board[row][col] = num
                print_board(board)
                if not find_empty_location(board):
                    print("Congratulations! You've solved the Sudoku!")
                    break
            else:
                print("Invalid move. Try again.")
        except ValueError:
            print("Please enter valid integers.")

if __name__ == "__main__":
    main()