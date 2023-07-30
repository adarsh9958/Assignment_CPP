#include<iostream>
using namespace std;
void vote(int n){
    if(n>18){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main()
{
    int age;
    cin>>age;
    vote(age);
    return 0;
}