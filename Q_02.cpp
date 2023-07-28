#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num<0){
        num=num*(-1);
    }
    cout<<"Absolute value is : "<<num;
    return 0;
}