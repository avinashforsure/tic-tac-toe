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
 //SPIRAL 
 int left=0,right=n-1,top=0,bottom=n-1;
 while(top<=bottom && left<=right){
for(int i=left;i<=right;i++){
cout<<matrix[top][i]<<" ";
}
top+=1;
for(int i=top;i<=bottom;i++){
cout<<matrix[i][right]<<" ";
}
right-=1;
for(int i=right;i>=left;i--){
cout<<matrix[bottom][i]<<" ";
}
bottom-=1;
for(int i=bottom;i>=top;i--){
cout<<matrix[i][left]<<" ";
}
left+=1;


}
}