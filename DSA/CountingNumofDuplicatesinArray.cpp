#include<iostream>
using namespace std;

int main(){ 
    int A[10] = {1,1,3,4,5,5,5,7,7,10};

    for(int i = 0; i < 10; i++){
        
        if(A[i] == A[i+1]){
            int j=i+1;
            while(A[j] == A[i]) j++;
            cout << A[i] << " " << j-i << endl;
            i = j-1;
        }
    }

    cout << endl << endl;

    // using hash table

    int H[7] = {0,0,0,0,0,0,0};

    for(int i = 0; i < 10; i++){
        H[A[i]]++;
    }

    for(int i = 0; i < 8; i++){
        if(H[i]> 1) cout << i << " "<<  H[i]<< endl;

    }

    return 0;
}