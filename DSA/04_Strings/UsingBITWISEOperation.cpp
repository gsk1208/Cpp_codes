#include<iostream>
using namespace std;

int main(){
    int a=10, b=6;
    int c = (10 & 4);      //Anding  [0 0 0 0 1 0 1 0]  & [0 0 0 0 0 1 0 0] = [0 0 0 0 0 0 0 0]
    int d = (a||b);        //Oring   [0 0 0 0 1 0 1 0] || [0 0 0 0 0 1 0 0] = [0 0 0 0 1 1 1 0]   ***
    cout << c << " " << d << " " <<endl;

    a = a<<1;               // left shifting
    cout << a << endl;             // results a*pow(2,1)

    b = b<<2;               
    cout << b<< endl;       // results b*pow(2,2)


//_______________Masking_____________  cchecking whether a particular bit is on or not (1 0r 0)

int x = 4;     //   [0 0 0 0 0 1 0 0]
int t =1;       //  [0 0 0 0 0 0 0 1]      to check the third bit in x
 
t = t<<2;       //  [0 0 0 0 0 1 0 0]     to check the third bit in x

if(x&t) cout << "bit-3 is on"<< endl;
else   cout << "bit-3 is off" << endl;

//_______________Merging_____________ to set a bit ON
int y=16;    // [0 0 0 1 0 0 0 0]
int T =1;       //  [0 0 0 0 0 0 0 1]
T=T<<2;      // to ON the third bit in y

y = (y||T);  //**

cout << y;

    return 0;
}