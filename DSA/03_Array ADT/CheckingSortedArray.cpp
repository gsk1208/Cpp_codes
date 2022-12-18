#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(Array arr){
    for (int i = 0; i < arr.length -1; i++){
        cout << arr.A[i] << " ";

    }
    cout << endl;
}

int isSort(Array arr){
    for(int i = 0; i < arr.length - 1; i++){
        if(arr.A[i] > arr.A[i+1])
            return 0;
    }
    return 1;
    
}

int main(){
    Array arr{{2,5,7,9,12,16,25,30},10,8};

    cout << isSort(arr) << endl;
    Display(arr);

    return 0;
}