#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n=23,c=0;
    for(int i=1;i<=n;i++)
    {if (n%i==0)
    c++;}
    if (c==2)
    cout<<"prime";
    else 
    cout<<"not prime";


}