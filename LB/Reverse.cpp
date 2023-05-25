#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,3,8,4};
    int s = 0;
    int n = (sizeof(arr)/sizeof(arr[0]));
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
