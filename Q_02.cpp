#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if((i!=j && i+j+1!=n && arr[i][j]==0)||((i==j || i+j+1==n) && arr[i][j]!=0)){
            count++;
        }else{
            cout<<"False";
            exit(0);
        }
        }
        cout<<endl;
    }
    if(count==n*n){
    cout<<"True";
    }
    return 0;
}