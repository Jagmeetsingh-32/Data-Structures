#include<iostream>
using namespace std;
int main(){
    int arr[20]={8,25,7,14,68,8,1,23};
    for(int i=0;i<8;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;       
    }

    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}