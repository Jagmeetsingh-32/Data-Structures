#include<iostream>
#include<queue>
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

Node*Binary_Tree(int a){
    if(a==-1){
        return NULL;
    }
    int x;
    Node*temp=new Node(a);
    cout<<"Enter the left node of "<<a<<" : ";
    cin>>x;
    temp->left=Binary_Tree(x);

    cout<<"Enter the right node of "<<a<<" : ";
    cin>>x;
    temp->right=Binary_Tree(x);
    return temp;

}
void PreOrder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    PreOrder(root->left);
    PreOrder(root->right);
}
int main(){
    int x;
    Node*root;
    cout<<"Enter the root node";
    cin>>x;
    root=Binary_Tree(x);
    PreOrder(root);
}