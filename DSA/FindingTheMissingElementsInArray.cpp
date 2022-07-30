#include<iostream>
using namespace std;

//single missing element in an sorted Array

int main(){
    int A[10] = {8,4,7,1,10,6,4,3,9,2};

    int H[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 10; i++){
        H[A[i]]++;
    }

    for(int i = 0; i < 10; i++){
        if(H[i] == 0)
            cout << "The missing element is "<< i << endl;
    }


    return 0;
}