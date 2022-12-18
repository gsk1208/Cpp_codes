#include<iostream>
using namespace std;

int main(){
    char str[10]= "Python";

    char B[10];
    int i,j;

    for(i=0; str[i] !='\0'; i++){}
    i--;

    for(j=0; i>=0; i--, j++){
        B[j]=str[i];
    }
    B[j]= '\0';

    for(int i = 0; str[i] !='\0'; i++)
        cout << B[i] << " ";


    return 0;
}