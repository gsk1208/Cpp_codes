#include<iostream>
#include <cstring>
using namespace std;

int validate(char str[15]){
    for(int i=0; i<strlen(str);i++){
        if(!(str[i] >'a' && str[i] <'z' && str[i] >'A' && str[i] <'Z' && str[i] > 47 && str[i] <58))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[15] = "Shi15va@14";

    if(validate(str)) cout << "The string is valid";
    else  cout << "The string is not valid";
    return 0;
}