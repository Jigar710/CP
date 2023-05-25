#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n, int i=0){
    if(i==n){
        return;
    }
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubbleSort(arr,n,i+1);
}
int main(){
    int arr[] = {2,6,1,3,9,5};
    int n = 6;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
