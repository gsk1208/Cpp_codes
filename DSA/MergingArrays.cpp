#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Display(Array arr){
    for (int i = 0; i < arr.length; i++){
        cout << arr.A[i] << " ";

    }
    cout << endl;
}

void Merge(struct Array *a, struct Array *b){
    int i=0,j=0,k=0;
    Array *c = new Array;


    while(i < a->length && j < b->length){
    if(a->A[i] < b->A[j])
        c->A[k++] = a->A[i++];
    else 
        c ->A[k++] = b->A[j++];
    }

    for(; i < a->length; i++)
        c ->A[k++] = a->A[i++];
    for(; j < b->length; j++)
        c ->A[k++] = b->A[j];

    c->length = a->length + b->length;
    c->size = a->size + b->size;

    Display(*c);
    
}

int main(){
    Array arr1{{1,4,12},10,3};
    Array arr2{{2,3,6,13,16,21,25,30,31},10,9};

    Merge(&arr1, &arr2);

    return 0;
}