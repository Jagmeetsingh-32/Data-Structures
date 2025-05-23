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
    Node*Head;
    Head=NULL;
    for(int i=1;i<6;i++){
        if(Head==NULL){
            Head=new Node(i);

        }
        else{
            Node*temp;
            temp=new Node(i);
            temp->next=Head;
            Head=temp;
        }
    }

    Node*temp;
    temp=Head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}