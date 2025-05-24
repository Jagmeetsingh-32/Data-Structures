#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
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
//deleting the head node  of the link list...
    Node*temp1=Head;
    if(Head!=NULL){
        Head=Head->next;
        delete temp1;
    }
//output the remaining list....
    Node*temp3=Head;
    while (temp3!=NULL)
    {
        cout<<temp3->data<<" ";
        temp3=temp3->next;
    }
    

}