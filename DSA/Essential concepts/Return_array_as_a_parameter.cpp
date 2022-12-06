#include<iostream>
using namespace std;

int * fun(int n){
    int *p;
    p = new int[n];
    for(int i=0; i<n; i++)
    p[i]= i+1;

    return (p);
}

int main(){
    int *A;
    A = fun(5);

    for(int i=0; i< 5;i++)
    cout << A[i]<< " ";

    return 0;
}