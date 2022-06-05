#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Please enter your name" << endl;
    cin >> name;  //to read a single word name
    getline(cin, name); // to read names with more than one word
    cout << "Welcome Mr./ms "<< name << endl;
    return 0;
}