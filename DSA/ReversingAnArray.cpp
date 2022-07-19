#include<iostream>
#include<stdio.h>
using namespace std;

struct Array
{
    public: 

    int A[10];
    int size;
    int length;
};

 
void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }

void Display(struct Array arr){
    cout << "The elements of the array are : ";
    for (int i=0; i < (arr.length); i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}



void Reverse(Array *arr){
    int *B = new int[arr->length*sizeof(int)];
    for (int i=arr->length-1, j=0;  i>= 0, j < arr->length; i--, j++){
        B[j] = arr->A[i];
    }

    for (int i=0; i < (arr->length); i++){
        arr->A[i] = B[i];
    }
    
}

void Reverse2(struct Array *arr)
{
 int i,j;
 for(i=0,j=arr->length-1;i<j;i++,j--)
 {
 swap(&arr->A[i],&arr->A[j]);
 }
}

int main(){
    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
    Reverse(&arr);
    Display(arr); 
    Reverse2(&arr);
    Display(arr);

    return 0;
}