#include<iostream>
using namespace std;
int main() {
    /* BODMAS 
    () ,  , ÷ , *  divid and multiply has same hirarchy so go left to rinht solving ,
      + , - same as above  

        */

        int i = 2 , j = 3 , k,l;
        float a,b;
        k = i / j * j;
        l = j / i * i;
        a = i / j * j;
        b = j / i * i;
        // cout << k << " " << l << " " << a << " " << b <<endl;

        float n = 7/22;
        cout << n << endl;

        int c = 10;
        cout << ++c <<endl;
    return 0;
}