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
int main(){
    int x,first,second;
    cout<<"Enter the root node of Binary tree: ";
    cin>>x;
    queue<Node*>q;
    Node*root=new Node(x);
    q.push(root);
    while (!q.empty())
    {
        Node*temp=q.front();
        q.pop();
        
        cout<<"Enter the left Node of "<<temp->data;
        cin>>first;
        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }

        cout<<"Enter the right Node of "<<temp->data;
        cin>>second;
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }  
}