#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    char A[10] = "aeroplane";

    int R[26] = {0};

    for(int i = 0; A[i] !='\0'; i++){
        R[A[i]-97]++;
    }

    for(int i = 0; i<26;i++){
        if(R[i]>1){
            printf("%c",i+97);
            cout  << " " << R[i] <<endl;
        }
    }

    return 0;
}