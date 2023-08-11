#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Armstrong numbers between 100 and 500 are : "<<endl;
    for(i=100;i<=500;i++){
        int sum=0,t=i;
        while(t>0){
            sum+=((t%10)*(t%10)*(t%10));
            t/=10;
        }
        if(sum==i){
            cout<<sum<<endl;
        }
    }
    return 0;
}