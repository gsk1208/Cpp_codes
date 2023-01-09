#include<iostream>
using namespace std;

class Node 
{
    public:
    int data;
    Node* nxt;
}* Head;

void Create(int A[], int n)
{
    int i;
    Node* t, *Last;
    Head = new Node;
    Head->data = A[0];
    Head->nxt = Head;
    Last = Head;

    for(int i=1; i<n; i++)
    {
        t= new Node;
        t->data = A[i];
        t-> nxt =Last->nxt;
        Last->nxt = t;
        Last = t;
    }

}

void Display(Node* p)
{
    do
    {
        cout << p->data << " ";
        p=p->nxt;
    } while (p!=Head);
    cout << endl;
    
}

int Length(Node* p)
{
    int Len=0;

    do
    {
        Len++;
        p=p->nxt;
    } while (p!=Head);

    return Len;
}

void Insert(Node* p, int index, int x)
{
    Node* t;
    int i;
    t = new Node;
    t->data = x;

    if (index <0 || index >= Length(p))
    return;

    if(index==0)
    {
        
        if(Head == NULL)
        {
            Head = t;
            Head ->nxt = Head;
        }
        else
        {
            while(p->nxt != Head)
            p=p->nxt;
            t-> nxt =Head;
            p->nxt = t;
            Head= t;
        }
    }
    else
    {
        for(i=0; i<index-1; i++) p=p->nxt;
        t->nxt= p->nxt;
        p->nxt = t;
        
    }
    
}



int main() 
{
    int A[] = {1,2,3,4,5};
    Create(A,5);

    Insert(Head, 0, 6);
    Display(Head);

    Insert(Head, 3, 2);
    Display(Head);

    Insert(Head, 5, 9);
    Display(Head);

    return 0;
}