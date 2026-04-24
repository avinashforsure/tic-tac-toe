#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3,4},
        {4, 5, 6,43},
        {7, 8, 93,4},
        {3, 2, 93,0}
    };
    int n = matrix.size();
 //TRANSPOSE   
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++)
{
    swap(matrix[i][j],matrix[j][i]);
}
}
for(int i=0;i<n;i++){
    for(int j=0;j<n/2;j++){
        swap(matrix[i][j],matrix[i][n-j-1]);
    }
}
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
    {
    cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}