#include<iostream>
using namespace std;
int main() {
    char ch,asci;
    cout<<"Enter a character : ";
    cin>>ch;
    asci = (int)ch;
    if((asci >= 97 && asci <= 122) || (asci >= 65 && asci <= 90)){
        if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch=='u') || ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch=='U'))){
            cout<<"The character is an vowel";
        }
        else{
            cout<<"It is a consonent";
        }
    }
    else{
        cout<<"invalid input";
    }
    return 0;
}