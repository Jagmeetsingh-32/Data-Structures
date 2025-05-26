#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next,*prev;
    Node(int a){
        data=a;
        next=NULL;
        prev=NULL;
    }
};
int main(){
    Node*Head=NULL;
    Node*Tail=NULL;
    for(int i=1;i<6;i++)
    {
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

    
    Node*temp2=NULL;
    if(Head->next!=NULL){
        temp2= new Node(10);
        temp2->next=Head;
        temp2->prev=NULL;
        Head=temp2;
    }

    Node*temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    
}