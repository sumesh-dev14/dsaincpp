#include<iostream>
using namespace std;
int main() {
    int cp , sp , total;
    cout<< "Enter the cost parice: ";
    cin>>cp;
    cout << "Entr the selling price: ";
    cin >> sp;
    if (sp > cp){
        total = sp - cp;
        cout<<" You made "<<total<< " rs as  Profit :)";
    }
    else if(sp == cp){
        cout<< "not profit no loss";
    }
    else {
        total = cp - sp;
        cout<<" You made "<<total<< " rs as  loss :)";
    };
    return 0;
};