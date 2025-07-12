#include<iostream>
using namespace std;
int main() {
    int a , b , c;
    cout<<"enter the value of a: ";
    cin>>a;
    
    cout<<"enter the value of b: ";
    cin>>b;
    
    cout<<"enter the value of c: ";
    cin>>c;
    if(a+b>c){
        cout<<"Side c is grater";
    }
    else if(b+c>a){
        cout<<"Side a is grater";
    }
    else if(a+c>b){
        cout<<"Side b is grater";
    }
    else{
        cout<<"Invalid input";
    }
    
    return 0;
}