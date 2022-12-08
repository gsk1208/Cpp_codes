#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void missingNumber(Array arr)
{
    int i=0, j=0;
    int d = arr.A[0]-0;

    for(int i = 0; i <arr.length-1; i++)
    {
        if(arr.A[i]== arr.A[i+1])
        {
            j=i+1;
            while(arr.A[j]==arr.A[j+1]) j++;
            cout << arr.A[i] << " "<< j-i<< endl;
            i=j-1;
        }
    }
}

int main()
{
    Array arr = {{1,2,4,4,5,7,8,8,8,9},10,10};
    missingNumber(arr);
    return 0;
}