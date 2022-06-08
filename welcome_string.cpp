#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char s[20];
    cout << "Enter your name : ";
    cin.getline(s, 20);
    cout << "Welcome mr/ms " << s << endl;
    cout << "Length :" << strlen(s) << endl;

    return 0;
}

//char s[20];  --->  into the stack memory 
//*char s;     --->  into the stack heap            -o  pointer o-