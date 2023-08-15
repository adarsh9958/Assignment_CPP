#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int *ptr=&arr[n-1];
    int sum=0;
    // for(int i=n;i>0;i--){
    //     cout<<*ptr<<" ";
    //     ptr--;
    // }
    //m-2
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr--;
    }
    return 0;
}