#include<bits/stdc++.h>
using namespace std;
bool mycompare(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        p.push_back(make_pair(arr[i],i));
    }
    sort(p.begin(),p.end(),mycompare);
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}