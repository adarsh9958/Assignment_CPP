#include<iostream>
using namespace std;
int main()
{
    int size,row,col;
    cin>>size;
    for(row=1;row<=size;row++){
        for(col=1;col<=size;col++){
            if((row==col)||(row+col-1==size)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}