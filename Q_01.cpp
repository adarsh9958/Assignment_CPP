#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,5,6,8,9,12};
    int i,even=0,odd=0,size;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"Even Numbers: "<<even<<endl;
    cout<<"Odd Numbers: "<<odd<<endl;
    return 0;
}