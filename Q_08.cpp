#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Enter number of lines : ";
    int row;
    cin>>row;
    int number=2;
    for(int i=1;i<=row;i++){
        for(int k=row;k>=i;k--){
            cout<<" ";
        }
        if(row==2){
            cout<<2<<endl;
        }else{
            for(int j=1;j<=i;){
            int flag=0; //checks prime if remains 0 then number is prime
            for(int m=2;m<number;m++){
                if(number%m==0){
                    flag++;
                }
            }
            if(flag==0){
                cout<<setw(3)<<number;
                j++; //value of for loop increase only if we found a prime number
            }
            number++;
        }
        cout<<endl;
        }
    }
    return 0;
}