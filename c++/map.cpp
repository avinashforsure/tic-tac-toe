#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,int> mpp;
    mpp[0]=2323;
    mpp[1]=233;
    mpp[3]=2314;
    mpp[6]=23142;
    mpp[12]=123;
    for(auto it:mpp)
    cout<<it.first<<"  "<<it.second<<endl;
    auto it =mpp.find(2) ;
    cout<<(*it).first<<"  "<<(*it).second;
    
    //for(int i=0;i<5;i++){
//cout<<mpp.first<<" "<<mpp.second;
    }
