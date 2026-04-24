#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int f=0,ans;
    vector<int>v={1,2,1,1,2,2,0,9,1,1,1,1,1,1,1};
    int n=v.size();
    for(int i=0;i<n;i++){
        if(f==0){
            ans=v[i];
        }
        if(ans==v[i])f++;
        else f--;
        }
        cout<<ans;

    }

