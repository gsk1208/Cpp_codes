#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *nxt;
}*First = NULL;          // Global pointer



void Create(int A[], int n)
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

void Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
    cout << endl;
}

Node* LSearch(Node* ptr, int key)
{
    while(ptr!=NULL)
    {
        if(ptr->data == key)
            return ptr;
        else ptr = ptr->nxt;
    }
    return NULL;
}

Node* RSearch(Node* ptr, int key)
{
    if(ptr == NULL) return NULL;

    if(ptr->data == key) return ptr;

    RSearch(ptr->nxt, key);
}


Node* ISearch(Node* ptr, int key)     // Improved Search
{
    Node* q;                  // Tail pointer

    while(ptr!=NULL)
    {
        if(key == ptr->data)
        {
            q->nxt=ptr->nxt;
            ptr->nxt = First;           //Move to head
            First = ptr;
            return ptr;

        }
        
            q = ptr;
            ptr = ptr->nxt;
    }
    return NULL;

}



int main()
{
    int A[5] ={3, 5, 7,10, 15};

    Create(A, 5);

    Node* pt = NULL;
    pt = ISearch(First, 10);
    Display(First);


    if(pt) cout << "Key is found " << endl;
    else cout << "Key is not found" << endl;

    pt = ISearch(First, 15);
    Display(First);


    if(pt) cout << "Key is found " << endl;
    else cout << "Key is not found" << endl;

    pt = LSearch(First, 8);
    Display(First);


    if(pt) cout << "Key is found " << endl;
    else cout << "Key is not found" << endl;

    return 0;
}