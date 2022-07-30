#include<iostream>
using namespace std;

int main(){
    int A[10] = {6,1,6,4,2,4,3,4,5,7};


    /*
    for(int i = 0; i < 10-1; i++){
        int count = 1;
        if(A[i] != -1){
            for(int j = i+1; j < 10; j++){
                if(A[i] == A[j]){
                    count++;
                    A[j] = -1;
                }
                
            }
            if(count > 1)
                cout << "first" << endl << A[i] << " " << count << endl;
        }
    }


    cout << endl << endl;
    //using hash table for      array of size : highest element */

    int H[8] = {0,0,0,0,0,0,0,0};

    for(int i = 0; i < 10; i++){
        H[A[i]]++;
    }
        

    for(int i = 0; i < 8 ; i++){
        if(H[i] > 1){
            cout << "second" << endl << i << " "<< H[i] << endl;
        } 
    } 

    return 0;
}