#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int>a={1,2,3,4,4323,23,3};
    vector<int>b={12,2,314,434,34,1,2,3};
    set<int>s;
        for(int i=0;i<a.size();i++){
    s.insert(a[i]);
        }
        for(int i=0;i<b.size();i++){
    s.insert(b[i]);
        }
    for(auto it:s)
    cout<<it<<endl;
}