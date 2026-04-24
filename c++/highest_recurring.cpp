#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    int m=0;
    vector<int > v(256,0);
    for(char ch:s){
        v[ch]+=1;

    }
    for(int i:v){
        if(i>m)
        m=i;
    }
    cout<<m;
}