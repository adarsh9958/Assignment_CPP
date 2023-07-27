#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cin>>a>>b;
    cout<<"Before swapping"<<endl;    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping"<<endl;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    return 0;
}