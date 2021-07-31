#include<bits/stdc++.h>
using namespace std;
bool pairsum(int arr[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){   //low always less than high we are not allowing low = high because we need a pair i.e. 2 elements
        if(arr[low]+arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            //we need smaller sum
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}


int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<pairsum(arr,n,k)<<endl;
}