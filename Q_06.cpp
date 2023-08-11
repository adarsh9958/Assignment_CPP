#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //for upper loop
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"  ";
        }
        for(int j=0;j<2*i-1;j++){
            char ch=char('A'+j);
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    //for lower loop
    for(int i=n-2;i>0;i--){
        for(int j=n-i;j>0;j--){
            cout<<"  ";
        }
        for(int j=0;j<2*i-1;j++){
            char ch=char('A'+j);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}