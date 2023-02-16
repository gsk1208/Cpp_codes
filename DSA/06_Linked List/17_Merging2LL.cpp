#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* nxt;
}*First = NULL, *Second = NULL,*Third=NULL;

void Create1(int A[], int n)
{
    int i=0;
    Node *t, *Last;
    First = new Node;
    First->data = A[0];
    First->nxt = NULL;
    Last = First;

    for(i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->nxt =NULL;
        Last->nxt = t;
        Last = t;
    }
 
    cout << "Linked list 1 is created\n";

}

void Create2(int A[], int n)
{
    Node *t, *Last;
    Second = new Node;
    Second ->data = A[0];
    Second->nxt = NULL;
    Last = Second;
    int i ;

    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->nxt = NULL;
        Last ->nxt = t;
        Last = t;
    }
    cout << "Linked list 2 is created\n";

}

void Merge(Node* p, Node* q)
{
    Node* Last;
    if(p->data < q->data)
    {
        Last = Third = p;
        p = p->nxt;
        Third ->nxt = NULL;
    }
    else
    {
        Last = Third = q;
        q = q->nxt;
        Third ->nxt = NULL;
    }

    while(p && q)
    {
        if(p->data < q->data)
        {
            Last->nxt = p;
            Last = p;
            p=p->nxt;
            Last -> nxt = NULL;
        }
        else
        {
            Last->nxt =q;
            Last = q;
            q= q->nxt;
            Last->nxt=NULL;
        }
    }
    if(p) Last->nxt = p;
    else Last->nxt = q;
}

void Display(Node* p)
{
    while(p)
    {
        cout<<p->data << " ";
        p=p->nxt;
    }
}

int main()
{
    int A[5] = {1, 12, 17, 34, 45};
    int B[5] = {6, 17, 18, 29, 30};

    Create1( A, 5);
    Create2( B, 5);

    Merge(First, Second);

    Display(Third);

    return 0;

}