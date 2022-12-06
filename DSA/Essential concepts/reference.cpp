// a reference declared should be initialized at that time only function
// a reference is an alias given to an other variable  &r = a  (a alias r)

#include<iostream>
using namespace std;

int main(){
    int a=5;
    int &r = a;    //reference is not a pointer
    r++;             // now, r is a
    cout << a << endl;
    a++;
    cout << r << endl;
    int b = 8;
    r = b;
    cout << a << endl;


     
}