#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n){
    int currSum =0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum < 0){
            currSum=0;
        }
        maxsum = max(maxsum,currSum);
    }
    return maxsum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum; //in this our maximum subarray will be circular array
    int nonwrapsum = kadane(arr,n);   //in this subarray will be linear so no wrapping is needed we can find this one using kadane algo
    int totalSum =0;
    for(int i=0;i<n;i++){
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalSum + kadane(arr,n); //we are sending array where we have changed the sign now it will send us the sum of non contributing elements 
    //we have changed the sign so that we can use the previous approach to find contributing elements now since non contributing elements are negative but kadane will give us positive no because we have changed the sign so we need totalsum - (-kadane) becomes totalsum +kadane .... -kadane because the are originally negative nos
    
    cout<<max(wrapsum,nonwrapsum)<<endl; //we are displaying the maximum sum in between both
    return 0;
}