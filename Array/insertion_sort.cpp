#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j= i-1;   //start comparing from the elements before current element
        while(arr[j]>current && j>=0){  //if the previous elements before the current element(we have fixed it when loop starts) is greater then we increase their position by one 
            arr[j+1]=arr[j];
            j--; //so that we can check the previous element
        }
        arr[j+1]=current;  //when we are swapping we are doing j-- so when in the next loop if the condition fails then the j value is one less so to replace current value with it we do j+1 
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}