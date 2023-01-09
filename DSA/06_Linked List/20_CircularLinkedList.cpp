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

void rDisplay(Node* h)
{
    static int flag=0;
    if(h!=Head || flag == 0)
    {
        flag = 1;
        cout << h->data << " ";
        rDisplay(h->nxt);
    }
    flag =0;
}

int main() 
{
    int A[] = {1,2,3,4,5};
    Create(A,5);

    Display(Head);

    rDisplay(Head);

    return 0;
}