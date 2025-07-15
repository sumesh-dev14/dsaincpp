#include<iostream>
#include<cmath>
using namespace std;

int main(){
    const float pi = 3.14;
    int r , h;
    double vol;
    cout<<"Enter the radius: ";
    cin>>r;
    cout<<"Enter the height: ";
    cin>>h;
    vol = pi * pow(r , 2) * h;
    cout<<"The volume of the cylinder is: "<<vol<<endl;
    return 0;
}