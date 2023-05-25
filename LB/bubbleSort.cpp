#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,6,1,3,9,5};
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
