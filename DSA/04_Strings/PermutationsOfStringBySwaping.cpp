#include<iostream>
using namespace std;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void perm(char A[], int l, int h)
{
    if(l!=h)
    {
        for(int i=l; i<h; i++)
        {
            swap(&A[i], &A[l]);
            perm(A,l+1,h);
            swap(&A[i], &A[l]);
        }

    }

    else
    {
            for(int i=0; A[i] != '\0'; i++) cout << A[i] << ' ';

            cout << endl;
    }

}

int main()
{
    char S[] = "ABC";

    perm(S,0,4);

    return 0;
}