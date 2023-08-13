#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int sum[m-2][n-2];
    int max=0;
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){
            sum[i][j]=mat[i-1][j-1]+mat[i-1][j]+mat[i-1][j+1]+mat[i][j]+mat[i+1][j-1]+mat[i+1][j]+mat[i+1][j+1];
            if(max<sum[i][j]){
                max=sum[i][j];
            }
        }
    }
    cout<<max;
    return 0;
}