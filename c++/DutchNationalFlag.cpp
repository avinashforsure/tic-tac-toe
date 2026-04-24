#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={0,1,2,2,2,1,1,0,0,1,0,0};
    int mid=0,low=0,high=v.size()-1;
    while(mid<=high){
        if (v[mid]==0)
        {
            swap(v[low],v[mid]);
            low++;mid++;    
        }
        else if(v[mid]==1)
        {
            mid++;  

        }
        else {
            swap(v[high],v[mid]);
            high--;
        }
    

    }
    for(auto it:v){
        cout<<it<<" ";
    }

}