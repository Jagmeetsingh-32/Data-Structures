#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next,*prev;
    Node(int a){
        data=a;
        next=NULL;
        prev=NULL;
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
            Tail->prev=Tail;
            Tail=Tail->next;
        }
    }
    //Adding Doubly list at the end....
    Node*temp1=new Node(12);
    if(Tail!=NULL){
        temp1->next=NULL;
        temp1->prev=Tail;
        Tail->next=temp1;
        Tail=Tail->next;
    }
    
    //printing the list....
    Node*temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
