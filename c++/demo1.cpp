#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
int main(){
    string s="nomadland";
    unordered_map<char ,int > lu;
    
  for(auto i:s){
  lu[i]++;
  
  }
  cout<< lu.first;
}