#include<iostream>
#include<map>
using namespace std;
int  main(){
    int a[]={1,2,3,4,6,7,8,9};
    int n=a[sizeof(a)/sizeof(a[0])-1];
    double s= (n*(n+1))/2;
    int d=0;
    for(auto it:a){
        d+=it;
        
    }
    cout<<s-d;
}