#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if (n>=100 && n<999){
        cout<<"Three Digit Number";
    }
    else{
        cout<<"Not a Three Digit Number";
    }

    return 0;
}