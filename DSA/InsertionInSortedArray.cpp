#include<iostream>
using namespace std;

struct Array
{
    public: 

    int A[10];
    int size;
    int length;
};

void Display(struct Array arr){
    cout << "The elements of the array are : ";
    for (int i=0; i < (arr.length); i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}


void insertSort(Array *arr,int x){
    if(arr->size > arr->length){
        int i = (arr->length) - 1;
        while(arr->A[i] > x){
            arr->A[i+1] = arr->A[i];
            i--;
        }
        arr->A[i+1] = x;
        arr->length++;
    }
    else return;
}

int main()
{
 struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};


 insertSort(&arr, 29);
 Display(arr);

 return 0;
 
}