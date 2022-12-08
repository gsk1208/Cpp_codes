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

int Rsum(Array arr, int n){
    int sum = 0;
    if(n < 0) return 0;
    else if(n >= 0)
        return Rsum(arr, n-1) + arr.A[n];
}

int main()
{
 struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
 
 cout << "sum is :" << Rsum(arr, (arr.length)-1) << endl;

 return 0;

}