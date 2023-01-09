#include<iostream>
using namespace std;

class Node
{
    public:
    Node* prev;
    int data;
    Node* next;
}* First =NULL;

int Length(Node* p)
{
    int len = 0;

    while(p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Create(int A[], int n)
{
    Node* t, *Last;
    int i;

    First = new Node;
    First->data = A[0];
    First->prev = First->next = NULL;
    Last = First;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = Last->next;
        t->prev = Last;
        Last->next = t;
        Last = t;
    }

    cout << "Doubly Linked list is created\n";
}


void Insert(Node* p, int index, int x)
{
    Node* t;
    int i;

    if(index < 0 || index > Length(p)) return;

    t = new Node;
    t->data = x;

    if(index==0)
    {
        t->prev = NULL;
        t->next = First;
        First->prev = t;
        First = t;
    }
    else
    {
        for(i=0; i<index-1; i++) p=p->next;

        t->prev = p;
        t->next = p->next;
        if(p->next) p->next->prev = t;
        p->next = t;
    }


}

void Display(Node* p)
{
    while(p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}



int main() 
{
    int A[] = {0,1,2,3,4,5,6};
    Create(A,7);

    cout << "Length is : " << Length(First) << endl;

    Insert(First, 0, 13);
    Display(First);

    Insert(First, 3, 17);
    Display(First);

    Insert(First, 9, 19);
    Display(First);

    return 0;
}
