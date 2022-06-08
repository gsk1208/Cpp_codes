#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the no. of elements : ";
    cin >> size;
    int *p = new int[size];
    delete[] p;
    p = nullptr;
    cout << "Enter new size : ";
    cin >> size;
    p = new int[size];

    return 0;

}