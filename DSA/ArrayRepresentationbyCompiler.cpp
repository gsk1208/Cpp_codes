#include <iostream>
using namespace std;

int main (){
    int A[5] = {3, 2, 5, 7, 1};   // assume startimh adress is 200

    // add(A[3]) = 200 + 3*2 = 206
    // add(A[i]) = L^ + i*(sizeof(int))    L^ = base adress,  i = index of required element

    // 2D ARRAYS 

    // A. Row Major Mapping Formula  =  here all elements are mapped linearly row by row.

       int A[3][4] ={{3,5,6,9}, {2,7,1,5}, {9,3,5,1}};

       // add(A[1])[2] = 200 +[1*4 + 2]*2 = 212
       // add(A[i])[j] = l^ + [i*n + j]*sizeof(int)          L^ = base adress, i = index of reqiured element, n = number of elements in row


    // B. Column Major Mapping = here the wlwments are mapped linearly column by column.
        // A = [3,2,9 , 5,7,3 , 6,1,5 , 9,5,1]     and assuming the base adress is 200 and

      /*  add(A[1])[2] = 200 + [2*3 + 1]*2 = 214
         add(A[1])[3] = 200 + [3*3 + 1]*2 = 220
          similarly
        add(A[i])[j]) = L^ + [j*m + i]*sizeof(int)          m = number of elements in column
       */

    // both mappings are equally efficient  but C++ uses ROW MAJOR MAPPING


   /* Arrays in compilers    for any no. of dimentions (from 2D to nD)
                                                                     A[d1][d2][d3][d4]
                                                      
      Row major formula for 4D Array =                              
                                add(A[d1])[d2][d3][d4] = L^ + [i1 * d2*d3*d4 + i2 * d3*d4 + i3 * d4 + i4]*sizeof(int)
                                                       = L^ + [i4 + d4*[i3 + d3*[i2 + d2* i1]]]*sizeof(int)             Hornors rule

      Column major formula for 4D Array =                              
                                add(A[d1])[d2][d3][d4] = L^ + [i4 * d1*d2*d3 + i3 * d1*d2 + i2 * d1 + i1]*sizeof(int)
                                                       = L^ + [i1 + d1*[i2 + d2*[i3 + d3* i4]]]*sizeof(int)             Hornors rule
    */


}