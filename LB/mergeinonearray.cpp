#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[] = {1,4,6,10,0,0};
    int arr2[] = {2,5};
    int m=6,n=2;
	int i=0,j = 0;
    while(i<m){
        if(arr2[j]<arr1[i]){
            swap(arr1[i],arr2[j]);
            sort(arr2,arr2+2);
            i++;
        }else{
            if(arr1[i]==0){
               arr1[i] = arr2[j];
               j++;
               i++;
            }else{
               i++;
            }

        }
    }
    for(int k=0;k<m;k++){
        cout<<arr1[k]<<" ";
    }
    cout<<endl;
}
