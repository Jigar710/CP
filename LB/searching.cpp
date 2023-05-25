#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int linerSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int n,int target){

    int start = 0;
    int end1 = n-1;
    int mid = start + (end1-start)/2;
    while(start<=end1){
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            start = mid+1;
        }else{
            end1 = mid-1;
        }
        mid = start + (end1-start)/2;
    }
    return -1;
}
int main(){

    int arr[] = {111,34,56,89,37,85};
    int target = 56;

    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n-1);
    printArr(arr,n);

    cout<<"target index by linear search : "<<linerSearch(arr,n,target)<<endl;
    cout<<"target index by binary search : "<<binarySearch(arr,n,target)<<endl;
}
