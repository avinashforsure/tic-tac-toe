#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int n=4;
    for(int i=0;i<n;i++){
        int a;
    cin>>a;
    arr.push_back(a);
}
    for(int  i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for (int num : arr)
    cout << " " << num;
}