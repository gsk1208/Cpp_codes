#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str = "HOLIDAY";
    string::reverse_iterator it;

    for(it=str.rbegin(); it!=str.rend(); it++){
        cout << *it;
    }


    return 0;	
}