#include<iostream>
using namespace std;

struct Array{
    int size;
    int *A;
    int length = 0;

};

void Display(struct Array arr){
    cout << "Array is " << endl;
    for(int i = 0; i < arr.size; i++)
    cout << arr.A[i] << " ";
}

int main(){
    struct Array arr;
    cout << "Enter the size of the array "<< endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    int n;

    cout << "Enter the length of the array "<< endl;
    cin >> n;
    cout << endl << "Enter the elements" << endl;
    for(int i = 0; i < n; i++){
        cout << "A" << i << ":";
        cin >> arr.A[i];
    }

    arr.size = n;

    Display(arr);


}