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

Node*deletion(Node*root,int x){
    if(!root){
        return NULL;
    }
    if(x<root->data){
        root->left=deletion(root->left,x);
        return root;
    }
    else if(x>root->data){
        root->right=deletion(root->right,x);
        return root;
    }
    else{
        // deleting the leaf node....
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        // deleting the  node if any one left or right exist..
        else if(!root->left){
            Node*temp= root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            Node*temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node*child=root->left;
            Node*parent=root;
            while (child->right)
            {
                parent=child;
                child=child->right;
            }
            if(root!=parent){
                parent->right=child->left;
                child->left=root->left;
                child->right=root->right;
                delete root;
                return child;
            }
            else{
                child->right=root->right;
                delete root;
                return child;
            }
            
        }

    }
}
void InOrder(Node*root){
    if(root==NULL) return;
    InOrder(root->left);
    cout<<root->data;
    InOrder(root->right);
}

int main(){
    Node*root=NULL;
    int arr[10]={10,8,15,6,9,13,16,20};
    for(int i=0;i<8;i++){
        root=insert(root,arr[i]);
    }
    root=deletion(root,20);
    InOrder(root);
}