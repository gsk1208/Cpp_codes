#include <iostream>
using namespace std;

int main(){
    char str[20]= "HelloWORLD";
    int i,j;

    for(i=0; str[i] !='\0'; i++){}
    i--;

    for(j=0; i>j; i--,j++){
        char t = str[j];
        str[j] = str[i];
        str[i] = t;
    }

    for(i=0; str[i] !='\0'; i++)
        cout << str[i] << " ";

    return 0;
}