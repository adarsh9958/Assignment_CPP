#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num>0){
        cout<<"You entered a positive number : "<<num<<endl;
    }else{
        cout<<"Number is negative and skipped ";
    }
    return 0;
}