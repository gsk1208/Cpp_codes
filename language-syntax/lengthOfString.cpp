#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string str = "Jollydays";

                         //using iterator
    int count = 0;
    string::iterator it;
    for(it=str.begin(); it!=str.end(); it++)
    {
        count++;
    }

    cout << "Length of the string is " << count << endl;

                           // without reverse_iterator
                           
    int Count = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        Count++;
    }

    cout << Count << " is the length of the string";


    return 0;
}