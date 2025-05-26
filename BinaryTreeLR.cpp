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
    Node*temp=new Node(x);
    cout<<"Enter the left node of "<<a<<" : ";
    cin>>x;
    temp->left=Binary_Tree(x);

    cout<<"Enter the right node of "<<a<<" : ";
    cin>>x;
    temp->right=Binary_Tree(x);
    return temp;

}
int main(){
    int x;
    cout<<"Enter the root node";
    cin>>x;
    Binary_Tree(x);
}