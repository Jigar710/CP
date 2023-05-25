#include<iostream>
using namespace std;
void mergeArr(int *arr,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    for(int i=0;i<len1;i++){
        arr1[i] = arr[s+i];
    }

    for(int i=0;i<len2;i++){
        arr2[i] = arr[mid+i+1];
    }
    int index1 = 0;
    int index2 = 0;
    int mi = s;
    while(index1 < len1 && index2 < len2){
        if(arr1[index1] < arr2[index2]){
            arr[mi++] = arr1[index1++];
        }else{
            arr[mi++] = arr2[index2++];
        }
    }
    while(index1 < len1){
        arr[mi++] = arr1[index1++];
    }
    while(index2 < len2){
        arr[mi++] = arr2[index2++];
    }
}
void mergesort(int *arr, int s, int e){
    //breaking condition
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    mergeArr(arr,s,e);
}
int main(){
    int arr[] = {6,3,9,2,1,8};
    int n = 6;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
