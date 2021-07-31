#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,target;
    cin>>n>>m>>target;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //select top right element of matrix if it is greater than target then c-- else r++ 
    int r=0,c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(arr[r][c] == target){
            found = true;
            break;
        }
        else if(arr[r][c] > target){    //then we need a smaller element so c--
            c--;
        }
        else{
            r++;
        }

    }
    if(found){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}