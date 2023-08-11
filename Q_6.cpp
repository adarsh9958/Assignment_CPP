#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int flag=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=1;j<n;j++){
        int left=j-1;
        int right=j+1;
        while(arr[left]<arr[j] && arr[right]>arr[j]){
            if(left==0 && right==n){
                cout<<arr[j]<<" ";
                j++;
                flag++;
            }
            if(left>0){
                left--;
            }
            if(right<n){
                right++;
            }
        }
    }
    if(flag<0){
        cout<<-1<<endl;
    }
    return 0;
}