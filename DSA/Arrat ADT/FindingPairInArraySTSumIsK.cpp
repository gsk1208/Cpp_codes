#include<iostream>
using namespace std;

int main(){
    int A[10] = {2,7,4,5,9,1,10,0,6,3};
    int k = 12;

    for(int i = 0; i < 9; i++){
        for(int j = i+1; j <10; j++){
            if(A[j]+A[i] == k)
                cout << A[j] << " " << A[i] << endl;
        }

    }


    //////////////////////

cout << "----------------------------"<< endl;
    int B[11] = {0,0,0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < 11; i++){
        if(B[k - A[i]] != 0)   
            cout << A[i] << " " << B[k - A[i]] << endl;
        B[A[i]]++;
    }
}