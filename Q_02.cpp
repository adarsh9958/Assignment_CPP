#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,67,3,19,2,34};
    int min=arr[0],max=arr[0],i,size;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int sum=min+max;
    cout<<"Sum of minimum and maximum number is : "<<sum<<endl;
    return 0;
}