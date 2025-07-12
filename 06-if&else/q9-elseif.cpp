#include<iostream>
using namespace std;
int main() {
    int mark;
    cout<<"Enter the mark";
    cin>>mark;
    if(mark >= 91 && mark <= 100){
        cout<<"Excellent";
    }
    else if(mark >= 81 && mark <= 90){
        cout<<"Very Good";
    }
    else if(mark >= 71 && mark <= 80){
        cout<<"Good";
    }
    else if(mark >= 61 && mark <= 70){
        cout<<"Can be better";
    }
    else if(mark >= 51 && mark <= 60){
        cout<<"Below avarage";
    }
    else if(mark >= 40 && mark <= 50){
        cout<<"fail";
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}