#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *nxt;
} *First = NULL;

void Create(int A[], int n)
{
    First = new Node;
    First->data = A[0];
    First->nxt = NULL;
    Node *prev, *New;
    prev = First;

    for(int i=1; i<n; i++)
    {
        New = new Node;
        New ->data = A[i];
        New ->nxt = NULL;
        prev->nxt = New;
        prev = New;
    }
    cout << "Linked List is Created\n";

}

void Display(Node *ptr)
{
    while(ptr != NULL)
    {
        cout << ptr->data << ' ';
        ptr = ptr->nxt;
    }
}

void RDisplay(Node *ptr)
{
                                                            // "Recursive Forward Display\n";
    while(!(ptr == 0))
    {
        cout << ptr->data << ' ';
        RDisplay(ptr->nxt);
    }
}

void RrDisplay(Node *ptr)
{
                                                            // "Recursive Revrese Display\n";
    while(ptr != NULL)
    {
        RrDisplay(ptr->nxt);
        cout << ptr->data << ' ';
    }
}

int main()
{
    int A[5] = {1, 3, 4, 5, 9};

    Create(A, 5);

    Display(First);
    cout << endl;

    //RDisplay(First);    
    cout << endl; 
    
    //RrDisplay(First); 
    cout << endl;
        

    return 0;

}

