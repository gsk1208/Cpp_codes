#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "holiday";
    string::iterator it;
    for(it = str.begin(); it != str.end(); it++)
    {
        *it -= 32;
        cout << *it;
    }


    return 0;
}