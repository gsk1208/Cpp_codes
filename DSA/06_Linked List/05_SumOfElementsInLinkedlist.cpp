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

int Sum(Node *ptr)
{
    int sum = 0;

    while(ptr)
    {
        sum += ptr->data;
        ptr = ptr->nxt;
    }
    return sum;
}

int rSum(Node *ptr)
{
    if(ptr == NULL) return 0;
    else return rSum(ptr->nxt) + ptr->data;
}

int main()
{
    int A[5] ={3, 5, 7,10, 15};

    Create(A, 5);

    cout << "Sum of Elements is : " << Sum(First) << " " << rSum(First);

    return 0;
}