#include<bits/stdc++.h>
using namespace std;
void countsort(int arr[],int n){
    //find the max element
    int k=arr[0];
    for(int i=0;i<n;i++){
        k = max(k,arr[i]);
    }
    //make count arr of size k and initialise all with 0
    
    int count[10] = {0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    //now sum of count of element+count of previous element to get the position
    for(int i=1;i<=k;i++){
        count[i] += count[i-1];
    }
    //now make an output array which will be of same size that of arr
    int output[n];
    //now traverse arr from last...now the element which you will get will have their position in that index of count array...you need to first decrement the value and then place that in the that index of output array i.e output[--count[arr[i]]]
    for(int i = n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    countsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}