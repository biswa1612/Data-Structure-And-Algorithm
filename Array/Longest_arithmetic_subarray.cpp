#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pd= arr[1]-arr[0];
    int ans = 2;
    int curr_length=2;
    int j=2;
    while(j<n){
        if(pd == arr[j]-arr[j-1]){
            curr_length++;
        }
        else{  //if the previous diff is not equal then the streak is broken so update the previous diff as well as current length
            pd=arr[j]-arr[j-1];
            curr_length=2;
        }
        ans=max(ans,curr_length); //if the current length crosses maximum length then it will be stored in ans
        j++;
    }
    cout<<ans<<endl;
}