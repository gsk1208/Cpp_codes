#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *nxt;
}*First = NULL;          // Global pointer



void Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
}

void SortedInsert(Node* p, int x)
{
    Node *t, *q=NULL;
    t = new Node;
    t->data = x;
    t->nxt = NULL;

    if(First==NULL) 
        First = t;

    else{
        while(p && p->data < x)
        {
            q=p;
            p=p->nxt;
        }

        if(p==First)
        {
            t->nxt = First;
            First = t;
        }
        else
        {
            t->nxt = q->nxt;
            q->nxt = t;
        }
    }
}

int main()
{
    //int A[5] ={3, 5, 7,10, 15};

    //Create(A, 5);

    SortedInsert(First,6);
    SortedInsert(First,1);
    SortedInsert(First,3);
    SortedInsert(First,2);
    SortedInsert(First,10);

    Display(First);

    return 0;
} 