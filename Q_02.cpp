#include<iostream>
using namespace std;
int main()
{
    int n,bin=0,rem,i=1,count=0;
    cin>>n;
    while(n>0){
        rem=n%2;
        n/=2;
        bin+=(rem*i);
        i*=10;
        count++;
    }
    cout<<"Binary equivalent is : "<<bin<<endl;
    int count0=0,count1=0;
    while(bin>0){
        if(bin%10==0){
            count0++;
        }
        if(bin%10==1){
            count1++;
        }
        bin/=10;
    }
    cout<<"No. of zeros are : "<<count0<<endl;
    return 0;
}