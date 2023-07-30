#include<iostream>
using namespace std;
void prime(int x, int y){
    int i,j;
    for(i=x;i<=y;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
            cout<<i<<"  ";
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;
}