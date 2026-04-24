#include <iostream>
#include <vector>
#include<map>
using namespace std;
int main(){
    int q=6;
vector<int>a={60,2,3,3,333,32,1,5,4};
int n=a.size();int s=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
           /*  cout<<a[k]<<" "; */s=s+a[k];
        }
        if(s==q)
cout<<"yes";
        /* cout<<"    "; */
        s=0;
    }
    /* cout<<endl; */
    
} 
}
my name is avinash murmu i study in saint francis school deoghar 
