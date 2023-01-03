#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *nxt;
}*First = NULL;          // Global pointer



void Create(int A[], int n)
{
    int i;
    Node *t, *Last;
    First = new Node;
    First->data = A[0];
    First->nxt = NULL;
    Last = First;

    for(i=1; i<n; i++)
    {
        t=new Node;
        t->data = A[i];
        t->nxt = NULL;
        Last->nxt=t;
        Last =t;
    }

    cout << "Linked list is created";

}

int Max(Node *ptr)
{
    int max = INT32_MIN;

    while(ptr)
    {
        if(ptr->data > max)
            max = ptr->data;
        ptr = ptr->nxt;
    }

    return max;
}

int rMax(Node *ptr)
{
    int x=0;

    if(ptr==0) return INT32_MIN;

    x = rMax(ptr->nxt);

    if(ptr->data < x)   return x;
    else return ptr->data;
}

int main()
{
    int A[5] ={3, 5, 17,10, 15};

    Create(A, 5);

    cout << endl << Max(First);
    cout << endl << rMax(First);

    return 0;
}