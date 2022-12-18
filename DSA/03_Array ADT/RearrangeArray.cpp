#include <iostream>
#include<stdio.h>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    for (int i = 0; i < arr.length; i++){
        cout << arr.A[i] << " ";

    }
    cout << endl;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Rearrange(struct Array *arr){
    int i, j;
    i = 0;
    j = (arr->length-1);

    while (i < j){
        do{
            i++;
        } while (arr->A[i] < 0);
        do{
            j--;
        }while (arr->A[i] >= 0);
       

        if(i < j) swap(&arr->A[i], &arr->A[j]);
    }
}

int main (){
    Array arr{{1,-2,6,3,-5,7,-3},10,7};
    Display(arr);
    Rearrange(&arr);
    

    return 0;
}