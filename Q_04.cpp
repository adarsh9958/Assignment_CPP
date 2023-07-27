#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter a 5 dgit number : "<<endl;
    cin>>num;
    sum+=num/10000;
    sum+=num%10;
    cout<<sum<<endl;
    return 0;
}