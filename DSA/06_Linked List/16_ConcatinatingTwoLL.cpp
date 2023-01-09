#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* nxt;
}*First = NULL, *Second = NULL, *Third = NULL;

void Create1(int A[], int n)
{
    int i=0;
    Node *t, *last;
    First = new Node;
    First->data = A[0];
    First->nxt = NULL;
    last = First;

    for(i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->nxt =NULL;
        last->nxt = t;
        last = t;
    }
    cout << "Linked list 1 is created\n";

}

void Create2(int A[], int n)
{
    Node *t, *last;
    Second = new Node;
    Second ->data = A[0];
    Second->nxt = NULL;
    last = Second;
    int i ;

    for(int i=1; i<n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->nxt = NULL;
        last ->nxt = t;
        last = t;
    }
    cout << "Linked list 2 is created\n";

}

void Concat(Node* p, Node* q)
{
    Third = p;
    while(p->nxt)
        p=p->nxt;

    p->nxt = q;
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
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {6, 7, 8, 9, 0};

    Create1( A, 5);
    Create2( B, 5);

    Concat(First, Second);

    Display(Third);

    return 0;

}