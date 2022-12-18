#include <iostream>
using namespace std;

int main(){
    char A[10] = "Painting";
    char B[10] = "Painter";
    int i,j;

    for(i=0,j=0; ;i++,j++){
        if(A[i] != B[j]) break;
        if((A[i]='\0') || (B[j]='\0')) break;
    }

    if(A[i] < B[j]) cout << "A < B" << endl;
    else if(A[i] > B[j]) cout << "A > B" << endl;
}