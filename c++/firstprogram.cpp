#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={12,13213,431,43,4} ;
   v.push_back(77);
   v.push_back(0);
   v.pop_back();
   cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<*(v.begin());
}