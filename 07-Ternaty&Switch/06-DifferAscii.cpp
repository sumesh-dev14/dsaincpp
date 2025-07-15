#include<iostream>
using namespace std;

int main(){
    char x , y;
    int sub;
    cout<<"Enter the 1st character: ";
    cin>>x;
    cout<<"Enter the 2nt character: ";
    cin>>y;
    sub = (int)x - (int)y;
    cout<< "The difference between two character are: "<<sub<<endl;
    return 0;
}