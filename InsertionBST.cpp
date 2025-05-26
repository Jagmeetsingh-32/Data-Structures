#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int a){
        data=a;
        left=NULL;
        right=NULL;
    }
};

Node*insert(Node*root,int a){
    if(root==NULL){
        Node*temp=new Node(a);
        return temp;
    }
    if(a<root->data){
        root->left=insert(root->left,a);
    }
    else{
        root->right=insert(root->right,a);
    }
    return root;
}

void InOrder(Node*root){
    if(root==NULL){
        return ;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
    
}
int main(){
    int a[]={10,8,12,6,9,14,13};
    Node*root=NULL;
    for(int i=0;i<7;i++){
        root=insert(root,a[i]);
    }
    cout<<"The Inorder is: ";
    InOrder(root);
}
