#include<bits/stdc++.h>
using namespace std;
bool pos(int arr[],int n,int m,int mid){
    int student_count = 1;
    int pagesum = 0;
    for(int i = 0;i<n;i++){
        if(student_count > m || arr[i] > mid){
            return false;
        }
        if(pagesum+arr[i] <= mid){
            pagesum = pagesum + arr[i];
        }else{
            student_count++;
            pagesum = arr[i];
        }
    }
    return true;
}
int find(int arr[],int n,int m){
    int start = 0;
    int ans= 0;
    int sum = 0;
    for(int i =0;i<n;i++){
        sum = sum + arr[i];
    }
    int end = sum;
    cout<<"end"<<sum<<endl;
    int mid = start + (end -start)/2;
    while(start<=end){
        if(!pos(arr,n,m,mid)){
            cout<<"!pos"<<mid<<" "<<pos(arr,n,m,mid)<<endl;
            start = mid+1;
        }else{
            cout<<"pos"<<mid<<" "<<pos(arr,n,m,mid)<<endl;
            ans = mid;
            end = mid-1;
        }
        mid = start + (end -start)/2;
    }
    return ans;
}
int main(){
    int arr[] = {12,34,67,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    int m = 4;
    cout<<find(arr,size,m)<<endl;
}
