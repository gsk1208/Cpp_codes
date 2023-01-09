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

    cout << "Linked list is created\n";

}

int Count(Node *pt)
{
    int count = 0;
    while(pt)
    {
        count++;
        pt = pt->nxt;
    }

    return count;
}

int isSorted(Node* p)
{
    int x = INT32_MIN;
    

    while(p!=NULL)
    {
        if(p->data < x)
            return 0;
        
        x=p->data;
        p=p->nxt;
    }

    return 1;
}

int main()
{
    int A[5] ={3, 5, 7,10, 15};

    Create(A, 5);

    if(isSorted(First)) cout<< "Linkelist is Sorted\n";
    else cout<< "Linkelist is not Sorted\n";

    return 0;
}