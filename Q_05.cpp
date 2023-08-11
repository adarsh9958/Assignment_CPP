#include<iostream>
using namespace std;
int val(int a[],int n){
    int sum=0,range_sum,missing,i;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    range_sum=(n)*(n+1)/2;
    missing=range_sum-sum;
    return missing;
}
int main()
{
    int arr[]={10,0,8,5,7,2,3,9,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<val(arr,n);
    return 0;
}