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
    Node*temp=new Node(a);
    int x;
    cout<<"Enter the left node of "<<a<<": ";
    cin>>x;
    temp->left=Binary_Tree(x);
    cout<<"Enter the right Node of "<<a<<": ";
    cin>>x;
    temp->right=Binary_Tree(x);
    return temp;
}

void Lvl_Order(Node*root){
    queue<Node*>q;
    int x;
    Node*temp;
    q.push(root);
    while (!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp!=NULL){
            cout<<temp->data;
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    
}
int main(){
    int x;
    Node*root;
    cout<<"Enter the root : ";
    cin>>x;
    root=Binary_Tree(x);
    Lvl_Order(root);
}