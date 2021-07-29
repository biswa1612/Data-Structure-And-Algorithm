#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=0,st=-1,en=-1,sum=0;
    while(j<n){
        sum+=arr[j];
        while(sum>s){   //if sum is greater than s then you need to subtract previous elements;
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            st = i+1;  // we are adding one because of +1 indexing
            en = j+1;
            break;
        }
        j++;   //we are incrementing j so that sum becomes equal or greater than s
        
    }
    cout<<st<<" "<<en<<endl;
}