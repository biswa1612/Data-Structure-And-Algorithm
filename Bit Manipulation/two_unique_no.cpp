#include<bits/stdc++.h>
using namespace std;
int check(int n, int pos){
    return (n & (1<<pos));
}
void unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum = xorsum ^ arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit!=1){
        setbit = (xorsum & 1);
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor = 0;
    for(int i=0;i<n;i++){
        if(check(arr[i],pos-1)){
            newxor = newxor ^ arr[i];
        }
    }
    cout<<newxor<<" "<<(tempxor^newxor)<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique(arr, n);
}