// Arrays can only be called by adress    not by values

#include<iostream>
using namespace std;

void fun(int A[], int n){  // call by adress, call by value
    for(int i=0; i<n; i++){
        cout << A[i] << " ";;
    }
}

int main(){
    int A[5] = {2,4,6,7,3};
    fun(A, 5);
    return 0;
}