#include<iostream>
using namespace std;

class Node
{
    public:
    Node* prev;
    int data;
    Node* next;
}*  Head =NULL;

void Create(int A[], int n)
{
    Node* t, *Last;
    int i;

    Head = new Node;
    Head->data = A[0];
    Head->prev = Head->next = Head;
    Last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = Last->next;
        t->prev = Last;
        Last->next = t;
        Last = t;
    }
    Head->prev = t;

    cout << " cir Doubly Linked list is created\n";
}

void Display(Node* p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    }while(p!= Head);
    cout << endl;
}

int length(Node* p)
{
    int len = 0;

    do
    {
        len++;
        p = p->next;
    }while(p!= Head);
    return len;
}

void Insert(Node* p, int index, int x)
{
    if(index < 0 || index > length(p))
    {return ;   }    


    Node* t;
    int i;

    t= new Node;
    t->data = x;

    if(index==0)
    {
        if(Head==NULL)
        {
            Head= t;
            t->prev = t->next = t;
        }
        else
        {
            t->next = Head;
            t->prev = Head->prev;
            Head->prev = t;
            Head->prev->next=t;
        }
    }

    else
    {
        for(i=0; i<index-1; i++) p=p->next;

        t->prev = p;
        t->next = p->next;
        p->next->prev = t;
        p->next = t;
        
    }
}


int main() 
{
    int A[] = {1,2,3,4,5};
    Create(A,5);

    cout << "Length is : " << length(Head) << endl;
    Display(Head);

    Insert(Head,3,15);
    Display(Head);

    return 0;
}
