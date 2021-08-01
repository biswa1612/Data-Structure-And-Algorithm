#include<bits/stdc++.h>
using namespace std;

void subsets(int arr[], int n){
    for(int i=0;i<(1<<n);i++){         //2 to the power n is equal to 1<<n....for 2 to the power 2 =4 ....1<<2 = 0100
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subsets(arr, n);
}