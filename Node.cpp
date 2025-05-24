#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node*next;

     Node(int a){
        data=a;
        next=NULL;
     }
};
int main(){
    Node*head;
    head=new Node(15);
    cout<<head->data<<endl;
    cout<<head->next;
    
}