/* //brute
 #include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={1,4,567,8,5,68,4,97,47,3,69};
    int n=a.size(),c=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
            c=1;break;
        }
        

    }
    if(c==0)
        v.push_back(a[i]);c=0;
    }
    for(auto it:v)
    cout<<it<<" ";
} */

    #include <iostream>
    #include<vector>
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        vector<int>a={1,4,567,8,5,68,4,97,47,3,69};
        int n=a.size(),maxi=0;
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            if (a[i]>maxi){
                v.push_back(a[i]);
                maxi=a[i];

            }
        }
        for(auto it:v)
        cout<<it<<" ";cout<<"gwf";
        cout<<2;
    }