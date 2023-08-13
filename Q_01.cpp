#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum[m];
    for(int i=0;i<m;i++){
        sum[i]=0;
        for(int j=0;j<n;j++){
            sum[i]+=arr[i][j];
        }
    }
    int maximum=0;
    int k;
    for(int i=0;i<m;i++){
    if(maximum<sum[i]){
        maximum=sum[i];
        k=i;
    }
    }
    cout<<k;
    return 0;
}