#include <iostream>
#include <vector>
using namespace std;
vector<int> removeDuplicates(vector<int> a,int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]==a[j] && i!=j )
			a.erase(a.begin()+j);
		}
	}
	return a;
}
int main(){
    vector<int> v={1,1,1,12,12,2,1212,33,1,12,2,9,1};
    vector<int> c= removeDuplicates(v,v.size());
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
}