#include<iostream>
using namespace std;

int main(){
    int A[10][10], B[10][10], mul[10][10];
    int i,j,k;
    int r1,c1,r2,c2;

    cout << "Enter R and C of Matrix A: ";
    cin >> r1 >> c1;                          // r1 is no. of rows and c1 is no.of columns.
    cout << "Enter R and C of Matrix B: ";
    cin >> r2 >> c2;

    if(c1 != r2){
        cout << "Multiplication cant be performed." << endl;
        return 0;
    }

    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            cout << "Enter the element A"<< i+1 << j+1 << " ";
            cin >> A[i][j];
        }
    }

    cout << endl << endl;

     for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            cout << "Enter the element B"<< i+1 << j+1 << " ";
            cin >> B[i][j];
        }
    }

    for (i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            mul[i][j] = 0;
            for(int k=0; k < c1; k++){
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "The output matrix is : "<< endl;

    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            cout << mul[i][j] << " ";
            if(j == c2-1)
            cout << endl;
        }
        
    }
    return 0;
}