#include <iostream>
#include <vector>
using namespace std;
int SecondSmall(vector<int> a)
{
int largest=0;
int slar=0;
for(int i=0;i<a.size();i++){
    if (a[i]>largest){
        slar=largest;
        largest=a[i];
    }
}
return slar;

}
int main(){
    vector<int> arr;
    int n;
    for(int i=0;i<5;i++){
     cin>>n;
     arr.push_back(n);   
    }
    int c=SecondSmall(arr);
    cout<<c;
}
