#include <iostream>
#include <vector>
#include<map>
using namespace std;
int main(){
    int k=64;
vector<int>a={60,2,3,3,333,32,1,5,4};
int n=a.size();
map<int ,int >m;
int c;
int i;
for( i=0;i<n;i++){
    int num = a[i];
    int more=k-num;
    if(m.find(more)!=m.end())
    {
        cout<<"yes"<<endl;
        c=1;
        break;
    }
    m[num]=i;

}
if ( c== 0)
cout<<"no"<<endl;
} 