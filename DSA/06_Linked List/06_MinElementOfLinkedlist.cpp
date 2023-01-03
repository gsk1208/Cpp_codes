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

int Min(Node *ptr)
{
    int min = INT32_MAX;

    while(ptr)
    {
        if(ptr->data<min)   
            min = ptr->data;

        ptr = ptr->nxt;
    }

    return min;
}

int rMin(Node *ptr)
{
    int x; 
    if(ptr == NULL) return INT32_MAX;

        x = rMin(ptr->nxt);

    if(x< ptr->data) return x;
    else return ptr->data;
    
}

int main()
{
    int A[5] ={3, 5, 1,10, 15};

    Create(A, 5);

    cout << "The Minimum Element is : " << Min(First) << " " << rMin(First);

    return 0;
}