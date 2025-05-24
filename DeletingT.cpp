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
    Node*Head=NULL;
    Node*Tail=NULL;
    for(int i=1;i<6;i++){
        if(Head==NULL){
            Head=new Node(i);
            Tail=Head;
        }
        else{
            Tail->next=new Node(i);
            Tail=Tail->next;
        }
    }

    //Deleting the tail of the linklist....
    Node*curr=Head,*prev=NULL;
    while (curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    delete curr;
    prev->next=NULL;

    //Printing the list....
    Node*temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    
    
    
}