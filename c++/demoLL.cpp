#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data =d;
        next=nullptr;
    }
};
Node* convert(vector<int> &a){
    Node* head= new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<a.size();i++){
        Node* temp = new Node(a[i]);
        mover->next=temp;
        mover =temp;
    }
    return head;

}
int main(){
    vector<int> arr={1,123,234,4,3,4443,4334431,211};
    Node* head=convert(arr);
   /*  cout<<head->data<<endl;
    cout<<head->next; */
    int c=0;
    Node* temp=head;
    while(temp){
      //  cout<<temp->data<<endl;
      if(temp->data ==4443)
     cout<<"yes";
        temp=temp->next;
        c++;

    }
   // cout<<c; 
}