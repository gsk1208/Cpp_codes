#include<iostream>
using namespace std;

int main()
{

    // and << or << x-or << not operator

    int x = 12;
    const int p = x;  //constant

    x = x << 1;     //left shift   
    cout << x;
    x = p << 2;     //x<<i = x*2(pow)i
    cout << endl << x;

    x = p >> 1;     //Right shift
    cout << endl << x;
    x = p >> 2;     //x>>i = x/2(pow)i
    cout << endl << x;
    return 0;
}