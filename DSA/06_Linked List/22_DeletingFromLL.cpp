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

int Delete(Node* p, int index) 
{
    Node* t;
    int i,x;
    if(index < 0 || index > Length(p)) return -1;

    if(index==1)
    {

        while(p->nxt != Head) p=p->nxt;
        x= Head->data;

        if(p==Head)
        {
            delete Head;
            Head = NULL;
        }
        else
        {
            p->nxt = Head->nxt;
            delete Head;
            Head = p-> nxt;
        }
    }
    else
    {
        Node* q;
        for(int i=0; i<index-2;i++) p= p->nxt;
        q= p->nxt;
        p->nxt = q->nxt;
        x= q->data;
        delete q;

    }
    return x;
}

int main() 
{
    int A[] = {1,2,3,4,5};
    Create(A,5);

    Delete(Head, 3);
    Display(Head);

    Delete(Head, 2);
    Display(Head);

    Delete(Head, 1);
    Display(Head);

    return 0;
}