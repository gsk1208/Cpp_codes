#include <iostream>
using namespace std;

    int main(){
        int x = 10;
        int *p;       //Declaration

        // pointer is variable that stores the adress of other variables
      
        p = &x;       //initialisation

        cout << "x : " << x << endl;    
        cout << "&x : " << &x << endl;
        cout <<"p : " << p << endl;
        cout <<"*p : " << *p << endl;   // Dereferencing
        cout <<"&p : " << &p << endl;

        return 0; 

    }

    /* only 5 arthmetic opreations are allowed on pointerss
       p++; 
       p--;
       p = p+2;
       p = p-2;
       d = p-q;
    */

