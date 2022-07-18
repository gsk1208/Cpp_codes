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

//1
void Display(struct Array arr){
    cout << "The elements of the array are : ";
    for (int i=0; i < (arr.length); i++){
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

//2
void Append(Array *arr, int x){
    if(arr->length < arr->size)
    arr->A[arr->length] = x;
    arr->length++;
}

//3
void Insert(struct Array *arr, int index, int x){
    if(index >= 0 && index < arr->length){
    for(int i = arr->length; i>index; i--)
        arr -> A[i] = arr-> A[i-1];
        arr -> A[index] = x;
    arr->length++;
    
    }
}

//4
void Delete(Array *arr, int index){
    if(index >=0 && index < arr->length){
        for(int i=index; i < (arr->length - 1); i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    }

}

//5            Linear search
int Search(Array arr, int key){
    cout << "Key found at index: ";
    for(int i = 0; i < arr.length; i++){
        if(arr.A[i]==key)
            return i;
    }
    return -1;
    
}

//6             Binary search function

int Bsearch(Array arr,int low, int high, int key){
    cout <<endl << "Key found at index: ";
    while(high>=low){
    int mid = (high + low)/2;

    if(arr.A[mid]==key)
        return mid;
    else if(arr.A[mid]< key)
        high = mid - 1;
    else 
        low = mid + 1;
    }
    return -1;
}

//7. get and set 
int Get(struct Array arr,int index)
{
 if(index>=0 && index<arr.length)
 return arr.A[index];
 return -1;
}
void Set(struct Array *arr,int index,int x)
{
 if(index>=0 && index<arr->length)
 arr->A[index]=x;
}

//8. Max and min

int Max(struct Array arr){
    int max = arr.A[0];
    for(int i=1; i<arr.length; i++){
        if(arr.A[i] > max)
        max = arr.A[i];
    }
    return max;
}

int min(struct Array arr){
    int min = arr.A[0];
    for(int i=1; i<arr.length; i++){
        if(arr.A[i] < min)
        min = arr.A[i];
    }
    return min;
}

//9. sum and average 

int sum(struct Array arr){
    int sum =0;
    for(int i=0; i<arr.length; i++){
        sum += arr.A[i];
    }
    return sum;
}

float average(struct Array arr){
    return (float)sum(arr)/arr.length;
}



int main(){
    struct Array arr = {{1,3,5,7,2,4}, 10, 6};
    Display(arr);
    Append(&arr,10);     Display(arr);
    Insert(&arr,0,12);   Display(arr);
    Delete(&arr,1);      Display(arr);
    cout << Search(arr, 5);
    cout << Bsearch(arr,0,7,7);
    cout << endl;
    cout << Get(arr, 6) << endl;
    Set(&arr, 5, 9);   Display(arr);
    cout << Max(arr) << endl;
    cout << min(arr)<< endl;

    cout << sum(arr) << endl;
    cout << average(arr) << endl;

 return 0;

}
