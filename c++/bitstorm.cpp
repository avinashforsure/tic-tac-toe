#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> num(n);
    for(int i=0;i<n;i++){
    cin>>num[i];}
int result =0;
    for(int bit=0;bit<32;bit++){
        int count =0;
        for(int i=0;i<n;i++){
            if(num[i]&(1<<bit)!=0)
            count++;
        }
        if (count>=k)
        result=result|(1<<bit);

    }
    cout<<result;
}