#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int arr1[n1][n2],arr2[n2][n3],ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }

    //multiplication
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                //in first array we traverse row elements and in second array we traverse column elements and keep on multiplying and adding them
                ans[i][j] += arr1[i][k]*arr2[k][j];
            }
            
        }
    }
    cout<<"Multiplied Matrix"<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}