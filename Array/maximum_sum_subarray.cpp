#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int st=0,en=0,sum=0,start,end;
    int mx= INT_MIN;
    while(st<n){
        for(int i=st;i<=en;i++){
            sum += arr[i];
        }
        if(sum>mx){
            start=st;
            end=en;
        }
        mx = max(mx,sum);
        sum=0;
        if(en<n-1){
            en++;
        }
        else{
            st++;
            en=st;
        }
    }
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Maximum sum "<<mx;
}