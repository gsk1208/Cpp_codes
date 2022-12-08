#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;

};

Array * merge(Array *A, Array *B)
{
    int i=0, j=0, k=0;
    struct Array *arr =new struct Array;
    while(i<A->length && j<B->length)
    {
        if(A->A[i]<B->A[j])
            arr->A[k++]=A->A[i++];
        else
            arr->A[k++]=B->A[j++];
    }
    for(;i<A->length;i++)
        arr->A[k++]=A->A[i];
    for(;j<B->length;j++)
        arr->A[k++]=B->A[j];

    arr->length = A->length + B->length;
    arr->size = 10;

    return arr;
}

void Display(Array arr)
{
    for(int i=0;i<arr.length;i++)
        cout << arr.A[i] << " ";
}

int main()
{
    Array arr1 = {{1,9,13,24,25},8,5};
    Array arr2 = {{4,14,26,31,33},8,5};

    Array *arr3= merge(&arr1,&arr2);

    Display(*arr3);


    return 0;

}