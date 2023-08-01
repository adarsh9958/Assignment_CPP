#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,6,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,k;
    int target=11;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                cout<<i<<","<<j<<","<<k<<endl;
            }
            }
        }
    }
    return 0;
}