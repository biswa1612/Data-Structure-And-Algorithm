#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){   //it takes 'n-1' iteration to sort an array
        for(int i=0;i<n-counter;i++){  //for 1st iteration it will run till n-1.....for second till n-2....similarly for others
            if(arr[i]>arr[i+1]){  //swap
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}