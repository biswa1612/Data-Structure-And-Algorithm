#include<bits/stdc++.h>
using namespace std;
long long int reverse(long long int n){
    long long int ans=0;
    for(int i=0;i<32;i++){
        ans<<=1;  //shifting ans left by 1 bit and storing the result in it
        ans = (ans | (n&1));
        
        n>>=1;    //shifting n right by 1 bit and storing the result in it
    }
 return ans;
}
int main(){
    long long int n;
    cin>>n;
    cout<<reverse(n)<<endl;
}