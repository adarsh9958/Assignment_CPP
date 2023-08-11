#include<iostream>
using namespace std;
int main()
{
    int a[]={12,67,3,19,2,34};
    int b[]={5,7,13,3,18,6};
    int min1=a[0],min2=b[0],i,j,size1,size2;
    size1=sizeof(a)/sizeof(a[0]);
    for(i=0;i<size1;i++){
        if(a[i]<min1){
            min1=a[i];
        }
    }
    size2=sizeof(b)/sizeof(b[0]);

    for(j=0;j<size2;j++){
        if(b[j]<min2){
            min2=b[j];
        }
    }
    int sum=min1+min2;
    cout<<sum;
    return 0;
}