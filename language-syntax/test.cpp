#include <iostream>
    #include <algorithm>
    #include <vector>
    using namespace std;
    int main () 
    {
        int myints[] = { 10, 20, 30 ,40 };
        int * p;
        p = find (myints, myints + 4, 30);
        --p;
        cout << *p << '\n';
        return 0;
    }
