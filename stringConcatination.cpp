#include<iostream>
using namespace std;
#include <cstring>

int main(){
    char s[10] = "Hello ";
    char p[10] = "World";
    strcat(s, p);                           //strcat(destination, source);
    cout << s << endl;
    strncat(p, s, 3);                        //strncat(destination, source, size of source);
    cout << p << endl;
    return 0;


}