#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    int n=str.size();
    cout<<str[0]<<"  "<<str[n-1]<<endl;
    for(int i=0;i<n;i++){
        if(str[i]=='t'){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}