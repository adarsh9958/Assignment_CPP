#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,1,4,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i]*arr[i];
    }
    cout<<"New array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<"  ";
    }
    return 0;
}