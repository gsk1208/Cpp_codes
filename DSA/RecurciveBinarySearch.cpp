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

int RBinSearch(int a[],int l,int h,int key)
{
 
 int mid=0;
 if(l<=h)
 {
 mid=(l+h)/2;
 if(key==a[mid])
 return mid;
 else if(key<a[mid])
 return RBinSearch(a,l,mid-1,key);
 }

 else{
    return -1;
    }
 
}


int main()
{
 struct Array arr={{2,3,9,16,18,21,28,32,35},10,9};
 printf("%d",RBinSearch(arr.A, 0, arr.length, 32));

 return 0;

}