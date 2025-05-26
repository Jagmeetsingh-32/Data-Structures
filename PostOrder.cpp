#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int a){
    data=a;
    left=NULL;
    right=NULL;
}
};

Node* Binary_Tree(int a){
    if(a==-1){
        return NULL;
    }
    int x;
    Node*temp=new Node(a);
    cout<<"Enter the left node of "<<a<<": ";
    cin>>x;
    temp->left=Binary_Tree(x);
    cout<<"Enter the right node of "<<a<<": ";
    cin>>x;
    temp->right=Binary_Tree(x);
    return temp;
}

void PostOrder(Node*root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data;
}
int main(){
    int x;
    cout<<"Enter the root Node: ";
    cin>>x;
    Node*root;
    root=Binary_Tree(x);
    PostOrder(root);
}