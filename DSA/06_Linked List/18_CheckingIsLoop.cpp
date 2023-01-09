#include<iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node* nxt;
}*First = NULL, *Second = NULL;

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

int isLoop(Node* ptr)
{
    Node *p, *q;
    p = q = ptr;

    do
    {
        p =p->nxt;
        q= q->nxt;
        q = q ? q->nxt: NULL ;   // if(q) q= q->nxt;

    } while (p && q && p!=q);

    if(p==q) return 1;
    else return 0;
}

int main()
{
    int A[5] = {1, 12, 23, 34, 45};
    int B[5] = {6, 17, 18, 29, 30};

    Create1( A, 5);
    isLoop(First) ? cout << "Loop \n" : cout << "Linear\n";

    Create2( B, 5);

    Node *p1, *p2; 
    p1= Second->nxt->nxt;
    p2= p1->nxt->nxt;
    p2->nxt = p1;

    isLoop(Second) ? cout << "Loop \n" : cout << "Linear";

    return 0;

}