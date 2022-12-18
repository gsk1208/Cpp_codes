/*  pointers are mainly usefull to acessing the memory that's out of the programming
i.e (code section + stack)       it is an adress variable(not data-variable)
Acessing heap, acessing resources, and parameter passing    */
// when you want to allocate memory in heap in c language-- you have to mention a funtion malloc(size)
// but in c++ we use "new int[size]"

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int A[5]={1,5,8,13,16};
    int *p;  //Declaration
    p = A;  // in case of an array  name == adress of starting element
    int *p1 = &A[3] ;   // seperately for elements  we can use &-sign

    for(int i=0; i<5; i++){
        cout << A[i] << "  "<< p[i]<<endl;
        cout << p1 << " " << &A[i] << endl;
    }

    int *p2 = new int[5];        // dynamic allocation in heap  
    p2[0]=24,p2[1]=35, p2[2]=35,p2[3]=27,p2[4]=49;

    for(int i=0; i<5; i++){
        cout << p2[i]<<endl;
    }
    delete []p2;    // after the use we have to deallocate the heap memory
   /*   p2 = (int *)malloc(5*sizeof(int));        Allocation and
        free(p2);                                 Deallocation in C language
   */
  return 0;
}
