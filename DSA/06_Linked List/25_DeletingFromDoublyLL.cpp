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

void Display(Node* p)
{
    while(p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Delete(Node *p, int index)
{
    int x=-1;
    if(index <0 || index >Length(p)) return x;

    if(index==0)
    {
        p = First;
        First= First->next;
        x = p->data;
        p->next = NULL;
        if(First) First->prev = NULL;
        delete p;
        return x;
    }

    else
    {
        for(int i=0; i < index-1; i++) p=p->next;

        p->prev->next = p->next;
        if(p->next) p->next->prev = p->prev;
        p->prev = p->next = NULL;
        x = p->data;
        delete p;
        return x;
    }

}

int main() 
{
    int A[] = {0,1,2,3,4,5,6};
    Create(A,7);

    cout << "Length is : " << Length(First) << endl;

    Delete(First,0);
    Delete(First,0);
    Delete(First,0);


    
    Display(First);

    return 0;
}
