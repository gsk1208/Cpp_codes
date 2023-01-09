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


int Find1(Node *p)
{
    int m=-1;
    if(Count(p)%2==0)
        m=Count(p)/2;
    else
        m=Count(p)/2 + 1;

    for(int i=0; i<m-1; i++) p=p->nxt;
    return p->data;
}

int Find2(Node *p)
{
    Node *q = p;

    while(p)
    {
        p=p->nxt;
        if(p) p=p->nxt;
        if(p) q=q->nxt;
    }
    return q->data;
}

int main()
{
    int A[] ={3, 5, 7, 8, 9, 10, 11, 12, 18};

    Create(A, 9);

    cout << "The middle element is : " << Find1(First) << endl;
    cout << "The middle element is : " << Find2(First) << endl;

    return 0;
}