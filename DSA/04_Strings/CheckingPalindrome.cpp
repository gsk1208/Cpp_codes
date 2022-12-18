#include<iostream>
using namespace std;

int main(){
    char A[10] = "weraw";
    int i,j;
    for(i=0; A[i] !='\0'; i++){}
    i--;
    for(j=0; i>=j ;i--, j++){
        if(A[j]!=A[i]){
            cout << "It is not a polindrome"<< endl;
            return 0;
        }
    }
    cout << "It is a polindrome"<< endl;

    return 0;
}