// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     //Taking transpose
//     for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(i<j){
//             int temp=a[i][j];
//             a[i][j]=a[j][i];
//             a[j][i]=temp;
//             }
//         }
//     }
//     //Swapping 1st and 3rd column
//     for(int i=0;i<n;i++){
//         int temp=a[i][2];
//         a[i][2]=a[i][0];
//         a[i][0]=temp;
//     }
//     //Displaying output
//         for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

//Method-2
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[n-j-1][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}