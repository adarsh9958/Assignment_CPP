#include<bits/stdc++.h>
using namespace std;
int largest(int *x,int *y,int *z){
//for maximum
    if(*x>*y){
        if(*x>*z){
            return *x;
        }else{
            return *z;
        }
    }else{
        if(*y>*z){
            return *y;
        }else{
            return *z;
        }
    }
}
int smallest(int *x,int *y,int *z){
// for minimum
    if(*x<*y){
        if(*x<*z){
            return *x;
        }else{
            return *z;
        }
    }else{
        if(*y<*z){
            return *y;
        }else{
            return *z;
        }
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<largest(&a,&b,&c)<<endl;
    cout<<smallest(&a,&b,&c)<<endl;
    return 0;
}