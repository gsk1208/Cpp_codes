#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 4;
    int z = x*(++y);   // pre-increment
    cout << x << " " << y << " " << z << endl;

    int a = 5;
    int b = 4;
    int c = a*(b++);   // post-increment
    cout << a << " " << b << " " << c << endl;
    

    char p = 127;
    p++;                                    // char data type -128 to 127
    cout << p << " " << (int)p << endl ;   // overflow (exceeding Max or min value of the data type)

    int i = 5;
    int j = 4;
    int k = i*(--j);   // pre-decrement
    cout << i << " " << j << " " << k << endl;

    int d = 5;
    int e = 4;
    int f = d*(e--);   // post-decrement
    cout << d << " " << e << " " << f << endl;
    return 0;

}