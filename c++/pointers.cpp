#include<iostream>
using namespace std;
int main(){
    int arr[]={12,23,2323,2};
    int l=0,h=3;
    for (int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        if(l<h){
            swap(arr[l],arr[h]);
l+=1;
h-=1;  

    }
    }
    for (int i:arr){
        cout<<i<<endl;
    }

}

