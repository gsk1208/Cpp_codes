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

int Delete(Node* p, int index)
{
    int x;
    Node* q=NULL;
    if(index<0 || index > Count(p))
    return -1;

    if(index==1)
    {
        q=First;
        x=First->data;
        First=First->nxt;
        delete q;
        return x;
    }

    else
    {
        for(int i=0; i<index-1; i++)
        {
            q=p;
            p=p->nxt;
        }
        q->nxt = p->nxt;
        x=p->data;
        delete p;
        return x;
    }
}

int main()
{
    int A[5] ={3, 5, 7,10, 15};

    Create(A, 5);
    Delete(First,3);
    Display(First);


    return 0;
}