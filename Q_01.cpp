#include<iostream>
using namespace std;
void sort(int *arr,int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main()
{
    int arr1[]={1,6,8,4},arr2[]={9,5,2,3};
    int n1,n2,n3;
    n1=sizeof(arr1)/sizeof(arr1[0]);
    n2=sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,n1);
    sort(arr2,n2);
    n3=n1+n2;
    int arr3[n3];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }else{
             arr3[k]=arr2[j];
            j++;
            k++;   
        }
    }
    while(i<n1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(k=0;k<n3;k++){
        cout<<arr3[k]<<"  ";
    }
    return 0;
}