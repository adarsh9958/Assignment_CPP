#include<bits/stdc++.h>
using namespace std;
void prefixSum(vector<vector<int>> &mat){
    //Prefix sum row-wise
    for(int i=0;i<mat.size();i++){
        for(int j=1;j<mat[0].size();j++){
            mat[i][j]+=mat[i][j-1];
        }
    }
    //Prefix sum column-wise
    for(int i=1;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            mat[i][j]+=mat[i-1][j];
        }
    }
    //Printing prefix sum
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat (m,vector<int> (n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    prefixSum(mat);
    return 0;
}