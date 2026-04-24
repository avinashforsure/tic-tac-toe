#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={1,0,0,0,2,3,0,0,0,4,5,6,7,8,9};
    for (int j = 0; j < a.size(); j++){
    for (int i = 0; i < a.size(); i++){
        if (a[i]==0){
            a.erase(a.begin()+i);
            a.push_back(0);
        }

    }}
    

    cout<<"{";
    for(auto it:a){
        cout<<it<<",";
    }
     cout<<"}";
}