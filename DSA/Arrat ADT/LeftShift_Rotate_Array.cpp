#include<iostream>
using namespace std;

struct Array 
{
    int A[10];
    int size;
    int length;
};

void LeftShift(Array *a)
{
    for(int i = 0; i < a->length; i++)
    {
        a->A[i] = a->A[i+1];
    }
}

void LeftRotate(Array *a)
{
    int temp = a->A[0];
    for(int i = 0; i < a->length-1; i++)
    {
        a->A[i] = a->A[i+1];
    }
    a->A[a->length-1] = temp;
}

void Display(Array a)
{
    for(int i = 0; i < a.length; i++)
    cout << a.A[i] << ' ';
}

int main()
{
    struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
    LeftRotate(&arr);
    Display(arr);

    return 0;
}