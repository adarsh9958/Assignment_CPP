#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char op;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"Enter an operator (+, -, *, /):";
    cin>>op;
    switch(op){
        case '+':cout<<a+b<<endl;
        break;
        case '-':cout<<a-b<<endl;
        break;
        case '*':cout<<a*b<<endl;
        break;
        case '/':cout<<a/b<<endl;
        break;
        default: cout<<"Incorrect operator !";
        break;
    }
    return 0;
}