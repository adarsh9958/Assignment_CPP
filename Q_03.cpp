#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,7,31,65,90,58,8,43};
    int n,i;
    n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n/2;i++){
        int temp= arr[n-i-1];
        arr[n-i-1]= arr[i];
        arr[i]= temp;
    }
    cout<<"Reverse array is : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}