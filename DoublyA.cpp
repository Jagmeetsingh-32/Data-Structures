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
    for(int i=1;i<6;i++){
        if(Head==NULL){
            Head=new Node(i);
            Tail=Head;
        }
        else{
            Tail=new Node(i);
            Tail->prev=Tail;
            Tail=Tail->next;
        }
    }

    Node*temp=Head,*temp2=NULL;
    int c=3;
    c--;
    while (c--)
    {
        temp=temp->next;
    }
    temp2=new Node(55);
    temp2->prev=temp;
    temp2->next=temp->next;
    temp->next=temp2;

    Node*temp3=Head;
    while (temp3!=NULL)
    {
        cout<<temp3->data;
        temp3=temp3->next;
    }
      
}