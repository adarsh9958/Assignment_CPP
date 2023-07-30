#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter n : ";
    cin>>n;
    while(n>0){
        sum+=n;
        n--;
    }
    int i=1,bin=0,rem;
    while(sum>0){
        rem=sum%2;
        sum/=2;
        bin+=(rem*i);
        i*=10;
    }
    cout<<"Binary equivalent of sum is : "<<bin;
    return 0;
}