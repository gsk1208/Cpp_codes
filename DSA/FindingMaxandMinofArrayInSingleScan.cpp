#include<iostream>
using namespace std;

int main(){
    int A[]= {1,9,4,7,2,-1,8,3,5,6};
    int min=A[0], Max= A[0];

    for(int i=0; i<10; i++){
        if(A[i]<min) min = A[i];
        else if(A[i]>Max) Max = A[i];
        
    }

    cout << "min: " << min << endl;
    cout << "Max: " << Max << endl;
    



    return 0;
}