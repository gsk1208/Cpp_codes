#include<iostream>
using namespace std;

int main(){
    int *p, *q;
    p = new int[5*sizeof(int)];
    p[0] = 10; p[1] = 4; p[2] = 6; p[3] = 12; p[4] = 7;

    q = new int[10*sizeof(int)];

    for(int i = 0; i <5; i++)
        q[i] = p[i];

        q[5] = 5; q[6] = 17;

    free(p);
    p = q;
    q = nullptr;

    for(int i=0; i<7; i++)
        cout << p[i] << endl;

    

    return 0;
}

//  create p pointer and assign it    create q pointer of double size of p;
//  assign p values to q    free p;     assign p to q;     then make the pointrr p null pointer   and print p;


