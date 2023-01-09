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

void Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
}

void DeleteDuplicate(Node *p)
{
    Node *q = p->nxt;

    while(q != NULL)
    {
        if(q->data != p->data)
        {
            p=q;
            q = q->nxt;
        }

        else
        {
            p->nxt = q->nxt;
            delete q;
            q= p->nxt;
        }
    }


}


int main()
{
    int A[10] ={3, 5, 5, 5, 6, 7,10, 10, 15};

    Create(A, 8);

    DeleteDuplicate(First);

    Display(First);

    

    return 0;
}