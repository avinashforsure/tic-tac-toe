#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,33,45,344,2345};
    int n=nums.size();
int a=n,target=35;


        int low=0,high=n-1;
        
        while(low<=high){
            int mid =(low+high)/2;
            if(nums[mid]>=target){
                a=nums[mid];
                high=mid-1;
            }
            else 
            {low=mid+1;
            }
            
            
        }
        cout<<a;
    }