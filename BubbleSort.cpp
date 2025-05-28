#include<iostream>
using namespace std;
int main(){
    int arr[20]={77,5,9,12,3,7,1};
    for(int i=0;i<7;i++){
        for(int j=0;j<7-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}