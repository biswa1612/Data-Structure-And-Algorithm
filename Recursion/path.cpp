#include<bits/stdc++.h>
using namespace std;
int path(int s, int e){
    cout<<s<<" "<<e<<endl;
    if(s == e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i=1;i<=min(6,e);i++){
        count += path(s+i,e);
    }
    return count;
}
int main(){
    cout<<path(0,3)<<endl;
    return 0;
}