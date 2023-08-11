#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}