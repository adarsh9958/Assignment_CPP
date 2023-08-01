#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    int diff=7;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if((arr[i]-arr[j]==diff) ||(arr[j]-arr[i]==diff)){
                cout<<i<<","<<j<<endl;
            }
        }
    }
    return 0;
}