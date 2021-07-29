#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx= INT_MIN;  //it takes the minimum possible value in the program ...take min when you need to find maximum number
    for(int i=0;i<n;i++){
        mx= max(mx,arr[i]);
        cout<<mx<<" ";
    }

}