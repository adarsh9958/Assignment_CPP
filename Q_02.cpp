#include<iostream>
using namespace std;
void area_circ(float r){
    cout<<"Circumference : "<<2*3.14*r<<endl;
    cout<<"Area : "<<3.14*r*r<<endl;
}
int main()
{
    float radius;
    cin>>radius;
    area_circ(radius);
    return 0;
}