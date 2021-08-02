#include<bits/stdc++.h>
using namespace std;
void prime_factorisation(int n){
    int pf[n+1] = {0};
    for(int i=2;i<=n;i++){
        pf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(pf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(pf[j]==j){
                    pf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<pf[n]<<" ";
        n=n/pf[n];
    }
}

int main(){
    int n;
    cin>>n;
    prime_factorisation(n);
}