/*  //brute force
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s=0,max=0;
    vector<int>v={1,2,3,1,2,1,1,-60,9,8};
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++)
            {
              //  cout<<v[k];
               s=s+v[k];
            }
            if(s>max)
        max=s;
            s=0;
            //cout<<" ";
            
        }cout<<endl;
    }cout<<max;

} */


//optimal
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int s=0,max=0;
    vector<int>v={1,2,3,1,2,1,1,-60,2,8};
    int n=v.size();
    for(int i=0;i<n;i++){
        s+=v[i];
        if(s>max)
        max=s;
        if(s<0)
        s=0;
    }
    cout<<max;
}