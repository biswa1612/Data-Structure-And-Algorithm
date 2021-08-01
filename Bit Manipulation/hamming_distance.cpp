#include<bits/stdc++.h>
using namespace std;
int hamming(int x, int y){
    int count=0;
    for(int i=0;i<32;i++){
        int result1 = (x&1);
        int result2 = (y&1);
        if(result1 != result2){
            count++;
        }
        x>>=1;
        y>>=1;
    }
    return count;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<hamming(x,y)<<endl;
}