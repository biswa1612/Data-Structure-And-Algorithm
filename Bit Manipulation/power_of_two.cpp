#include<bits/stdc++.h>
using namespace std;
int isPowerof2(int n){
    return (n && (n & (n-1)));
}
int main(){
    int n;
    cin>>n;
    if(isPowerof2(n)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}