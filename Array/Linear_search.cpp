#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;  //if we get the key we will return the index and the program stops here
        }
    }
    return -1;  //if we don't get the key we will return -1.
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linear_search(arr,n,key)<<endl;
}