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

    Node*temp1=Head;
    Node*temp2=NULL;
    int x=3;
    x--;
    while (--x)
    {
        temp1=temp1->next;
    }
    temp2=new Node(12);
    temp2->next=temp1->next;
    temp1->next=temp2;
    

    Node*temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}