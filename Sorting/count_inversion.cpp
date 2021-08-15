#include<bits/stdc++.h>
using namespace std;
long long merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            //a[i] is less than b[j] so a[i] will come in array
            arr[k]=a[i];
            i++;k++;
        }
        else{
            //a[i] is greater than b[j] so b[j] will come in array
            arr[k]=b[j];
            inv += n1-i;
            j++;k++;
        }

    }
    return inv;

}
long long mergesort(int arr[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid = (l+r)/2;
        //inv count of left part after merging
        inv += mergesort(arr,l,mid);
        //inv count of right part after merging
        inv += mergesort(arr,mid+1,r);
        //inv count will come here when merging is done and that will be stored in inv variable of mergesort function
        //which will be returned to the mergesort function which has called it 
        inv += merge(arr,l,mid,r);
    }
    //after the right or left part is done merging merge function will return a inv count ...then this function will
    //return the inv count to mergesort function which has called it
    return inv;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergesort(arr,0,n-1)<<endl;
}