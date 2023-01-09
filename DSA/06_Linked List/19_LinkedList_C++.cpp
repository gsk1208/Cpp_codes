#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *nxt;
};

class LinkedList
{

 public:
    Node *First;

    LinkedList() { First = NULL;}
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display(Node *ptr);
    int Delete(int index);
    void Insert(int index, int x);
    int Length(Node *pt);

};

LinkedList :: LinkedList(int A[], int n)
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

    cout << "Linked list is created\n";

}

LinkedList :: ~LinkedList()
{
    Node* p = First;
    while(First)
    {
        First=First->nxt;
        delete p;
        p=First;
    }
}

void LinkedList :: Insert(int index, int x)
{
    Node* p = First;
    if(index < 0 || index > Length(First))
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

int LinkedList:: Delete(int index)
{
    int x;
    Node* q=NULL;

    if(index<0 || index > Length(First))
    return -1;

    if(index==1)
    {
        q=First;
        x=First->data;
        First=First->nxt;
        delete q;
        return x;
    }

    else
    {
        Node* p = First;
        for(int i=0; i<index-1; i++)
        {
            q=p;
            p=p->nxt;
        }
        q->nxt = p->nxt;
        x=p->data;
        
        return x;
    }
}

int LinkedList:: Length(Node* pt)
{
    int count = 0;
    
    while(pt)
    {
        count++;
        pt = pt->nxt;
    }

    return count;
}

void LinkedList:: Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
    cout << endl;
}

int main()
{
    int A[] = {0,1,2,3,4,5,6};
    LinkedList L(A,7);

    L.Display(L.First);

    L.Delete(5);
    L.Display(L.First);

    L.Insert(4,4);
    L.Display(L.First);

    return 0;
}


