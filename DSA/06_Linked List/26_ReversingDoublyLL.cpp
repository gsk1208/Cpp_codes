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

void Reverse(Node* p)
{
    while(p)
    {
        Node* temp = p->prev;
        p->prev = p->next;
        p->next = temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        First= p;
    }
}

int main() 
{
    int A[] = {0,1,2,3,4,5,6};
    Create(A,7);

    cout << "Length is : " << Length(First) << endl;


    Reverse(First);

    
    Display(First);

    return 0;
}
