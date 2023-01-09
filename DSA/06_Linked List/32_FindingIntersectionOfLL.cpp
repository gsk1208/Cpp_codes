#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

class Node
{
    public:
    int data;
    Node *nxt;
}*First = NULL, *Second = NULL;          // Global pointer



void Create1(int A[], int n)
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

    cout << "Linked list 1 is created\n";

}

void Create2(int A[], int n,Node* pt)
{
    int i;
    Node *t, *Last;
    Second = new Node;
    Second->data = A[0];
    Second->nxt = NULL;
    Last = Second;

    for(i=1; i<n; i++)
    {
        t=new Node;
        t->data = A[i];
        t->nxt = NULL;
        Last->nxt=t;
        Last =t;
    }
    Last->nxt = pt;

    cout << "Linked list 2 is created\n";

}

int Intersection(Node *a, Node *b)
{

    stack<Node*> stk1;
    while(a)
    {
        stk1.push(a);
        a=a->nxt;
    }

    stack<Node*> stk2;
    while(b)
    {
        stk2.push(b);
        b=b->nxt;
    }

    Node* t;

    while(stk1.top() == stk2.top())
    {
        t= stk1.top();
        stk1.pop();
        stk2.pop();
    }
    return t->data;

}

int main()
{
    int A[] ={3, 5, 7,10, 15, 17, 21, 23};
    Create1(A, 8);

    int i=5;
    Node* temp = First;
    while(i--)
    {
        temp = temp->nxt;
    }

    int B[] = {1, 2,3 ,4 ,5};
    Create2(B,5, temp);

    cout << "Intersection element is : " << Intersection(First, Second) << endl;



    return 0;
}