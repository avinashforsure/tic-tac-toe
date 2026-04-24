#include <iostream>
#include <vector>
using namespace std;
int d,r;
int f(int n){
    d=n%10;
    r=r*10+d;
    n/=10;
    if (n!=0)
    f(n);
    else return r;
}
int main(){
    int n1;
    cin>>n1;
    int c=f(n1);
    cout<<c<<endl;
}