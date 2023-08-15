#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,pro;
    cin>>a>>b;
    int *ptr1=&a;
    int *ptr2=&b;
    int *ptr3=&pro;
    *ptr3=*ptr1 * *ptr2;
    cout<<pro<<"\n"<<*ptr3;
    return 0;
}