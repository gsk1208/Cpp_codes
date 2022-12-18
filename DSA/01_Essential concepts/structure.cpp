#include<iostream>
#include<stdio.h>    // just to use c language syntax
using namespace std;

struct rectangle{              // by default members of structure are public
    int length;
    int breadth;
    
};       //}r1, r2, r3;       // declaring global variables

// struct rectangle r1, r2;     same as above      globalvariables

int main(){
    struct rectangle r;
    r = {10, 5};
    r.length =15;
    r.breadth = 10;

    cout << r.length << " " << r.breadth << endl;

    printf("%d\n",r.length*r.breadth);
    return 0;

}
