#include<iostream>
#include<map>
using namespace std;
int  main(){
    int arr[]={2,3,24,54,3,65,654,564,64,654,-55,12221,3},temp=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int mini =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini])
            {
                swap(arr[mini],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}