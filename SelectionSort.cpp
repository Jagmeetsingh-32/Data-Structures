#include<iostream>
using namespace std;
int main(){
    int arr[20]={77,5,9,12,3,7,1};
    for(int i=0;i<7;i++){
        int min=i;
        for(int j=i+1;j<7;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}