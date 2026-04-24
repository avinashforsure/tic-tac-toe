 #include <iostream>
#include <vector>
using namespace std;
    int main()
    {
        vector<int>a={1,2,2,3,3,4,4,5,5,5,5,5,6};
        int n=a.size();
        int target=3,ans=0;
        int l=0,h=n-1;
        while(l<=h){

            int mid=(h+l)/2;
            if (a[mid]==target){
                ans = mid;
                h=mid-1;
            }
            else if (a[mid]>target) {
                h=mid-1;

            }
            else{
                l=mid+1;
            }

        }
        cout<<ans;
    }