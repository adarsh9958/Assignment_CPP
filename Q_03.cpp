#include<iostream>
using namespace std;
int main()
{
    int cp,sp,amount;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;
    if(cp<sp){
        amount=sp-cp;
        cout<<"Profit = "<<amount;
    }else{
        amount=cp-sp;
        cout<<"Loss = "<<amount;
    }
    return 0;
}