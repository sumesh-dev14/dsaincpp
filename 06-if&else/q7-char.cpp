#include<iostream>
using namespace std;
int main() {
    char letter;
    cin>>letter;
    int ascii = (int)letter;
    if(ascii>=97 && ascii <= 122 || ascii >= 65 && ascii <= 90){
        cout<<"It is an alphabet : "<<ascii;
    }
    else{
        cout<<"invaldi input";
    }
    return 0;
}