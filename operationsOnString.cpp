#include<iostream>
#include<cstring>
using namespace std;

int main()
{

string str = "Holiday";
cout << str.at(4)<<endl;
cout << str[4] << endl;
cout << str.front()<<endl;
cout << str.back()<<endl; 

string str1 = " Sunday";
cout << str + str1 << endl;

str1 = str;
cout << str << endl << str1 << endl;

// str[0] = "J";
// cout << str;


return 0;
}
