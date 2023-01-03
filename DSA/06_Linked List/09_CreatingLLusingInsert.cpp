#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *nxt;
}*First = NULL;          // Global pointer

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

void Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
}


int main()
{
    Insert(First,0,5);
    Insert(First,1,7);
    Insert(First,2,3);
    Insert(First,1,9);

    Display(First);


    return 0;
}