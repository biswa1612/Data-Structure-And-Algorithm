#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum = sum+arr[j];
            cout<<"Sum of subarray "<<i<<" "<<j<<" is "<<sum<<endl;
        }
        sum=0;
    }
}