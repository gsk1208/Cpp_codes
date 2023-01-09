#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *nxt;
} *First = NULL;

void Create(int A[], int n)
{
    First = new Node;
    First->data = A[0];
    First->nxt = NULL;
    Node *prev, *New;
    prev = First;

    for(int i=1; i<n; i++)
    {
        New = new Node;
        New ->data = A[i];
        New ->nxt = NULL;
        prev->nxt = New;
        prev = New;
    }
    cout << "Linked List is Created\n";

}

void Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
    cout << endl;
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

void ReverseElements(Node *p)
{
    int Arr[Count(p)];
    Node* q;
    q=p;
    int i=0;

    while(q!=NULL)
    {
        Arr[i++] = q->data;
        q=q->nxt;
    }
    q=p;
    while(q!=NULL) 
    {
        q->data = Arr[--i];
        q=q->nxt;
    }
}

void ReverseLinks(Node* p)
{
    Node *q=NULL, *r=NULL;

    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->nxt;
        q->nxt=r;
    }
    First = q;
}

void RecursiveReverse(Node*q, Node *p)
{
    if(p)
    {
        RecursiveReverse(p,p->nxt);
        p->nxt=q;
    }

    else First = q;
}



int main()
{
    int A[5] ={3, 5, 7,10, 15};

    Create(A, 5); Display(First);
    cout << endl;

    ReverseElements(First);
    Display(First);
    
    ReverseLinks(First);
    Display(First);

    RecursiveReverse(NULL, First);
    Display(First);

    return 0;
}