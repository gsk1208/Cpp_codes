#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "Hello";
    str.insert(4,"aa");
    cout << str << endl;
    str.insert(3,"ooa",2);
    cout << str << endl;
    str.replace(3,6,"ll");
    cout << str << endl;
    str.replace(4,4,"o");
    cout << str << endl;
    

    string s = "How are you";
    cout << s.find("are") << endl;
    cout << s.find("y") << endl;
    cout << s.rfind("o") << endl;
    cout << s.find_first_of("o")<<endl;
    cout << s.find_last_of("o") << endl;

    string Str = "programming";
    cout << Str.substr(3)<<endl;
    cout << Str.substr(3,7) << endl;





    return 0;
}