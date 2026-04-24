#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="password";int n=2;
    int l=0,h=s.length()-1;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    while(l<h){
        swap(s[l],s[h]);
        l++;
        h--;
}
cout<<s;
}
