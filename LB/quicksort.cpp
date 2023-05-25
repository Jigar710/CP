#include<iostream>
using namespace std;
int partition1(int *arr,int s,int e){
    int pivot = arr[s];
    int count1 = 0;
    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i]){
            count1++;
        }
    }
    int pivotIndex = s + count1;
    swap(arr[pivotIndex],arr[s]);
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quicksort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int p = partition1(arr,s,e);

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}
int main(){
    int arr[7] = {3,4,2,1,6,7,5};
    int n = 7;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
