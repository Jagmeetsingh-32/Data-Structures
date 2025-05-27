#include<iostream>
using namespace std;
class Stack{
    int arr[10];
    int top;
    public:
    Stack(){top=-1;}
    void push(int x){
        if(top>=9){
            cout<<"Stack Overflow";
            return;
        }
        arr[++top]=x;
        cout<<"no. is pushed.";
    }
    int pop(){
        if(top<0){
            cout<<"Stack Underflow";
            
        }
        cout<<arr[top]<<" is poped";
        return arr[top--];
    }
};

int main(){
    Stack s;
    for(int i=0;i<13;i++){
        s.push(i);
    }
    s.pop();
}