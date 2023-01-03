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

void Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
}

void Insert(Node* p, int index, int x)
{
    if(index < 0 || index > Count(p))
        return ;
        
    Node* t;
    t = new Node;
    t->data = x;

    if(index ==0)
    {
        t->nxt = First;
        First = t;
    }

    else
    {
        int a = index-1;
        while(a--) p=p->nxt;

        t->nxt = p->nxt;
        p->nxt = t;
        
    }
}

int main()
{
    int A[5] ={3, 5, 7,10, 15};

    Create(A, 5);

    Insert(First, 3, 8);
    Display(First);

    return 0;
}