#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>a={1,0,1,0,2};
    int x=0;
    for(int i=0;i<a.size();i++){
        x=a[i]^x;
}
cout<<x;
}