#include<iostream>
using namespace std;
int main()
{
    int bin1,bin2,bin;
    cin>>bin1>>bin2;
    if(bin1>bin2){
        bin=bin1;
    }else{
        bin=bin2;
    }
    int i=1,dec=0,rem;
    while(bin>0){
        rem=bin%10;
        bin/=10;
        dec+=(rem*i);
        i*=2;
    }
    cout<<dec;
    return 0;
}