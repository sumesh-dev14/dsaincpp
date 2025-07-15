#include<iostream>
using namespace std;
int main(){
    char oper;
    int num1 , num2 , sum , sub , multiply , divide;
    cout<<"Enter the operator(+ , - , * , / )";
    cin>>oper;
    cout<<"Enter the 1st number";
    cin>>num1;
    cout<<"Enter the 2nd number";
    cin>>num2;
    switch(oper){
        case '+':
        sum = num1 + num2;
        cout<<sum<<endl;
        break;
        case '-':
        sub = num1 - num2;
        cout<<sub<<endl;
        case '*':
        multiply = num1 * num2;
        cout<< multiply;
        break;
        case '/':
        if (num2%2 == 0)
        
            cout << "Quotient: " << (num1 / num2) << endl;
            else
                cout << "Error: Division by zero" << endl;
            
            break;
            default:
            cout << "Invalid operator!" << endl;
            break;

    }

}