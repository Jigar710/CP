#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m){
    vector<int> v;
    cout<<n<<" "<<m<<endl;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            v.push_back(arr1[i]);
            i++;
        }else{
            v.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        v.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        v.push_back(arr2[j]);
        j++;
    }
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[] = {2,4,5,9,13,45};
    int b[] = {1,2,3,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    merge(a,b,n,m);
}
