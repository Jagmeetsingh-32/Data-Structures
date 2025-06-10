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
    Node*Head=NULL,*Tail=NULL;
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

    Node*curr=Head,*prev=NULL;
    int a=3;
    a--;
    while (a--)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;

    //printing the list....
    Node*temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

}
