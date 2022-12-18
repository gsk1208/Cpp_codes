#include<iostream>
using namespace std;

int main(){
    int A[3][4] = {{1,4,7,3}, {4,6,9,1}, {5,8,4,2}};

    int *B[3];
    B[0] = new int[4*sizeof(int)];
    B[1] = new int[4*sizeof(int)];
    B[2] = new int[4*sizeof(int)];


   /*
   int **C;
    C = (int*) new int[3*sizeof(int)];
    C[0] = new int[4*sizeof(int)];
    C[1] = new int[4*sizeof(int)];              // double pointer concept  
    C[2] = new int[4*sizeof(int)];
    */


    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}