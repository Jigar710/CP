#include<bits/stdc++.h>
using namespace std;

int strLength(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
void reverseStr(char str[]){
    int s = 0;
    int e = sizeof(str)/sizeof(str[0]);
    cout<<e<<endl;
}
int main(){
    char arr[20];
    cout<<"Enter the name : ";
    cin>>arr;
    cout<<arr<<" : "<<strLength(arr)<<endl;
    reverseStr(arr);
}
