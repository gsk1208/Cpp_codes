#include<iostream>
#include<cstring>
using namespace std;



void UppToLowCase(char *str)
{
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 65 && str[i] <= 90)
        str[i] += 32;
    }
}

    

int main(){

    char str[10] = "DenDroPis";

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 97 && str[i] <= 122)
        str[i] -= 32;
    }
    for(int i = 0; str[i] != '\0'; i++){
        cout << str[i] << " ";
    }
    cout << endl;

    char Str[10] = "WeLcOmE";
    for(int i = 0; Str[i] != '\0'; i++){
        if(Str[i] >= 97 && Str[i] <= 122)
        Str[i] -= 32;
    }
    for(int i = 0; Str[i] != '\0'; i++){
        if(Str[i] >= 65 && Str[i] <= 90)
        Str[i] += 32;
    }
    for(int i = 0; Str[i] != '\0'; i++){
        cout << Str[i] << " ";
    }




  

    return 0;
}

