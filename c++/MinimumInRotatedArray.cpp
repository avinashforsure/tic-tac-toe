#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    vector<int> nums={4,5,1,2,3};
    int n=nums.size();
    int low=0,high=n-1,i;
    int ans=INT_MAX;
    while(low<=high){
        int mid =(low +high)/2;
        if(nums[low]<=nums[high]){
            ans =min(ans,nums[low]);break;
        }
      if(nums[mid]>=nums[low])  //left sorted
      {
        if(nums[low]<ans){
            ans=nums[low];
            i=low;

        }
        low=mid+1;

      }
      else //right sorted
      {
        if(nums[mid]<ans){
            ans=nums[mid];
            i=mid;
        }
        high=mid-1;
      }
    }
    cout<<ans;
    



      
}