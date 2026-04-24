#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=1;i<=q;i++){
        int l,r,s=0;
        cin>>l>>r;
        for(int i=l-1;i<r-1;i++)
        s+=a[i];
        cout<<s;
        s=0;
    }
}