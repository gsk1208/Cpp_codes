#include<iostream>
using namespace std;

int main(){
    int A[10] = {1,2,2,3,4,4,4,5,6,7};

    int lastDuplicate = 0;

    cout << "The duplicate elements are " << endl;

    for(int i = 0; i < 10; i++) {
        if(A[i]==A[i+1] && A[i] != lastDuplicate){
            cout << A[i] << endl;
            lastDuplicate = A[i];
        }
    }

    return 0;
}