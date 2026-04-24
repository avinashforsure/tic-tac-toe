#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(){
    int i=0,a[]={1,2,2,2,2,2,2,4,4,4,4,4,4,55,555,5555,5555,5555};
    int n=sizeof(a)/sizeof(a[0]);
    for(int j=1;j<n;j++)
    {
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
    }
    for(int j=0;j<i+1;j++){
        cout<<a[j]<<endl;
    }
    

    
}