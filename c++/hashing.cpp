#include<iostream>
#include<map>
using namespace std;
int  main(){
    int arr[]={1,332,2,4,5,5,6,6,6,6,434,45,345,434343,34};
    map<int,int> m;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
       m[arr[i]]+=1;
    }
    for(auto p:m)
    cout<<p.first<<":"<<p.second<<endl;

}