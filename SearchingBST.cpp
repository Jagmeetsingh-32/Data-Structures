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
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

bool search(Node*root,int a){
    if(!root){
        return 0;
    }
    if(root->data==a){
        return 1;
    }
    if(a<root->data){
        return search(root->left,a);
    }
    else{
        return search(root->right,a);
    }
}
int main(){
    Node*root=NULL;
    int arr[10]={10,8,12,9,15,6,19,2};
    for(int i=0;i<8;i++){
        root=insert(root,arr[i]);
    }
    cout<<"The InOrder of the array is: ";
    InOrder(root);
    bool result=search(root,9);
    if(result==1){
        cout<<"The result is found";
    }
    else cout<<"Not found ";
}