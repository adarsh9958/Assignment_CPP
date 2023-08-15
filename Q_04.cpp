#include<bits/stdc++.h>
using namespace std;
void swapp(int *x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swapp(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}