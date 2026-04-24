#include<bits/stdc++.h>
using namespace std;
    class Node{
        public:
        int data ;
        Node* next;
       /*  public:
        Node(int data1,Node* next1){
            data =data1;
            next =next1;


        } */
        
        Node(int data1){
            data =data1;
            next =nullptr;
        }
    };
    Node* convertToLL(vector<int> &a){
        Node* head =new Node(a[0]);
        Node* mover =head;
        for(int i=1;i<a.size();i++){
            Node* temp = new Node(a[i]);
            mover->next=temp;
            mover =temp;
        }
        return head;

    }
    int main(){
        vector<int> arr={2,33,43,2,234,2};
        Node* y = convertToLL(arr);
       // cout<<"address is :" <<y->next<<endl;
        Node* temp=y;
       for(int i=0;i<arr.size();i++){
        cout<<temp->data<<endl;
        temp=temp->next;
       }
    }
