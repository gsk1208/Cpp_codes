#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "Hello world";
    const string S = str;
   
    cout << S.length() << endl;
    cout << S.size() << endl;
    cout << S.capacity() << endl;
    cout << S.max_size() << endl;

    /*
    
    s.clear();
    
    str.insert("bye");
    
    s.replace();
    s.erase();
    s.push_back();
    s.pop_back();
    s.swap()
    */
    
    str.append(" Bye");
    cout << str << endl;
    cout << str.length() << endl;
    str.resize(30);
    cout << str.length() << endl;
   
    cout <<  str.empty()  << endl;
    cout << str.length() << endl;
    cout << str;
    

    
    return 0;
}