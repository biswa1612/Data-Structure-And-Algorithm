#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count =0;
    if(n==1){
        cout<<"YES"<<endl;;
    }
    else if(n && !(n&(n-1))){  ///for 0 special case
        while(n>1){
            n>>=1;
            count++;
        }
        if(count%2==0){
            cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl;;
        }
    }
    else{
        cout<<"NO"<<endl;;
    }
}