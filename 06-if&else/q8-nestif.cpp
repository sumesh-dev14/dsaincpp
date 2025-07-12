#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a Number: ";
    cin>>n;
    if (n%5==0){
        if(n%3==0){
        cout<<"The Number is divisible by 5 and 3";
        }
        else{
            cout<<"the number is only divisible by 5 not 3";
        }
    }
    else{
        cout<<"Number is not divisible by 5 not 3";
    }
    return 0;
}