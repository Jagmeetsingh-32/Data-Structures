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
    for(int i=0;i<6;i++){
        if(Head==NULL){
            Head=new Node(i);
            Tail=Head;
        }
        else{
            Tail->next=new Node(i);
            Tail=Tail->next;
        }
    }

    Node*temp=Head;
    while (temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
      
}