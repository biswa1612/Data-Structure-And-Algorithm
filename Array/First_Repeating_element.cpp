#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int N = 1e5+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i] = -1;
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            ans = min(ans, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }
    if(ans == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<ans + 1<<endl;
    }
}