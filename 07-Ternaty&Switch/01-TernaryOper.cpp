#include<iostream>
using namespace std;
int main(){
    // expression ? value_if_true : value_if_false
    
    int x;
    cin>>x;
    (x>18)?cout<<"Adult":cout<<"Not Adult";
    return 0;
}