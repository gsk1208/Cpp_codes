#include<iostream>   
using namespace std;

void Hon(int n, int A, int B, int C){
    if(n>0){
        Hon(n-1,A,C,B);
        cout << "(" << A << ", " << B << ")" <<endl;
        Hon(n-1,B,A,C);
        
    }
}

int main() {
    Hon(3,1,2,3);
    return 0;
}