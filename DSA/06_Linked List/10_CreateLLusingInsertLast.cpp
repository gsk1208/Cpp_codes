#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* nxt;
}* First;

void InsertLast(int x)
{
    Node *t, *Last;
    t = new Node;
    t->data = x;
    t->nxt = NULL;

    if(First == NULL)
    {
        First = Last = t;
    }

    else
    {
        Last->nxt = t;
        Last = t;
    }
}

void Display(Node* ptr)
{
    while(ptr)
    {
        cout << " " << ptr->data << " ";
        ptr = ptr->nxt;
    }
}

int main()
{
    InsertLast(10);
    InsertLast(13);
    InsertLast(17);
    InsertLast(11);
    InsertLast(9);

    Display(First);

    return 0;

}




