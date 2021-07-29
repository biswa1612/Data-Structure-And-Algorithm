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
    int check[N];
    for(int i=0;i<N;i++){
        check[i] = -1;
    }
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]] = i;
            mx=max(mx,arr[i]);   //storing max element of array 
        }
    }
    int ans=-1;
    for(int i=0;i<=mx;i++){    //I am running it till max element of the arr[] because if we don't have a missing element ...and we are running till N so we will encounter -1 amd give the ans
    //example ) 0 1 2 3 4 5 ....here we don't have any missing number but if we runn till N then at 6 we will get -1 because we have initialised entire check[] wit -1 and then it will give 6 as ans and will break from the loop
    //so to get ans -1 if there is no missing element ...i am running it till max element of the arr[]
        if(check[i] == -1){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}