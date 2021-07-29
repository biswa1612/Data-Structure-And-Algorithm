#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    arr[n] = -1; // we are checking a[i]>a[i+1] so for the last element we have taken arr[n] = -1 because our visitors are non negative and if A[n-1] element satisfies the condition then it will be counted because we have taken -1 to compare with it
    int mx = -1;
    int R_day =0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){  //if A[i] is greater than maximum number stored before it then it will be greater than all the elements before it...then that A[i] will be stored in max
            R_day++;
        }
         mx = max(mx,arr[i]);  // we are storing the max result before A[i]
    }
    cout<<R_day<<endl;
}