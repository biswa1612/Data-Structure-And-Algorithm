#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> v;
    int count=0;
    for(int i=0;i<=n;i++){
        int value = i;
        while(value>0){
            value= (value & (value-1));
            count++;

        }
        v.push_back(count);
        count = 0;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}