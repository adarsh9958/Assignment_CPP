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
    int sum_diagonal=0;
    for(int i=0;i<n;i++){
        sum_diagonal+=*(*(arr+i)+i);
    }
    cout<<sum_diagonal<<endl;
    return 0;
}