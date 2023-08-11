#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    int prime1=0;
    int prime2=0;
    for(int i=2;i<(num/2)+1;i++){
        int flag1=0;  // to check first prime
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag1=1;
            }
        }
        if(flag1==0){
            prime1=i;
            int temp=num-prime1; //temp to check 2nd prime number
            int flag2=0; //checks 2nd prime number
            for(int k=2;k<temp;k++){
                if(temp%k==0){
                    flag2=1;
                }
            }
            if(flag2==0){
                prime2=temp;
                cout<<num<<" = "<<prime1<<" + "<<prime2<<endl;
            }
        }
    }
    if(prime2==0){
        cout<<"Cannot be expressed as sum of prime number. "<<endl;
    }
    return 0;
}