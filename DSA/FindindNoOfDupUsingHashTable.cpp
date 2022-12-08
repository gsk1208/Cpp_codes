#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void NoOfRepitition(Array arr)
{
    int B[arr.A[arr.length-1]] = { 0 };

    for (int i = 0; i < arr.length; i++)
    {
        
            B[arr.A[i]]++;
    
    }

    

    
    for(int i = 0; i < arr.A[arr.length-1]; i++)
    {
        if(B[i]>1)
        {
           cout << i << " " << B[i] << endl;
        }
    }
}

int main()
{
    Array arr = {{1,2,4,4,5,7,8,8,8,9},10,10};
    NoOfRepitition(arr);
    return 0;
}