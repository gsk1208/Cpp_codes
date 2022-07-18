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

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}


//1.Transposition            bringing the key forward by 1 step at every search

int Search(Array *arr, int key){
    cout << "Key found at index: ";
        for(int i=0; i< (arr->length); i++){
           if(arr->A[i]==key){
            swap(&arr->A[i], &arr->A[i-1]);
            return i-1;
            }
        }
    return -1;
}

//2. move to head          bringing the kry to index 0 at every search

int search(Array *arr, int key){
    cout << "Key found at index : ";
    for(int i=0; i< (arr->length); i++){
        if(arr->A[i]==key){
            swap(arr->A[i],arr->A[0]);
            return i;
        }
    }
    return -1;
}


int main(){
    struct Array arr = {{1,3,5,7,2,4}, 10, 6};

    cout << Search(&arr,7) << endl;
    Display(arr);
    cout << Search(&arr,7) << endl;
    Display(arr);
    cout << Search(&arr,7) << endl;
    Display(arr);


    cout << endl <<endl;
    //------------------------------------------------------------------------------

    cout << search(&arr,1) << endl;
    Display(arr);
    cout << search(&arr,5) << endl;
    Display(arr);
    cout << search(&arr,12) << endl;
    Display(arr);



 return 0;

}
