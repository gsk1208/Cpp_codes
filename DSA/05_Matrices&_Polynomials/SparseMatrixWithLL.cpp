#include<iostream>
using namespace std;

class Node
{
    public:
    int row;
    int col;
    int x;
    Node* nxt;
} *First = NULL, *Second = NULL, *Sum=NULL;

Node* Create1(int m, int n, int nz)
{
    First = new Node;
    Node *Last=NULL, *t=NULL;

    cout << "Enter Row, Colum and Element (1)\n";

    cin >> First->row >> First->col >> First->x;

    First->nxt =NULL;
    Last = First;

    for(int i=0; i<nz-1; i++)
    {
        t = new Node;
        Last ->nxt = t;
        cin >> t->row >> t->col >> t->x;
        t->nxt = NULL;
        Last = t;
    }
}

Node* Create2(int m, int n, int nz)
{
    Second = new Node;
    Node *Last=NULL, *t=NULL;

    cout << "Enter Row, Colum and Element (2)\n";

    cin >> Second->row >> Second->col >> Second->x;

    Second->nxt =NULL;
    Last = Second;

    for(int i=0; i<nz-1; i++)
    {
        t = new Node;
        Last ->nxt = t;
        cin >> t->row >> t->col >> t->x;
        t->nxt = NULL;
        Last = t;
    }
}

Node* Create3( int nz1, int nz2)
{
    Sum = new Node;
    Node *Last=NULL, *t=NULL;

    Sum->nxt =NULL;
    Last = Sum;

    for(int i=0; i<(nz1+nz2)-1; i++)
    {
        t = new Node;
        Last ->nxt = t;
        t->nxt = NULL;
        Last = t;
    }
}

void Display(Node* ptr, int m, int n)
{
    Node*p=ptr;
    for(int i = 0; i < m; i++)
     {
            for(int j = 0; j < n; j++)
            {
                if(p->row==i && p->col==j)
                { 
                 cout << p-> x << " ";
                 p=p->nxt;
                }
                else cout << "0 ";
            }

        cout << endl;
    }
}

void Add(Node* p1, Node* p2)
{
    
        while(p1 && p2)
        {
            if(p1->row < p2->row){
                Sum->row = p1->row;
                Sum->col = p1->col;
                Sum->x = p1->x; 
                p1=p1->nxt;  Sum=Sum->nxt;
            }
                
            else if(p1->row > p2->row){
                Sum->row = p2->row;
                Sum->col = p2->col;
                Sum->x = p2->x; 
                p2=p2->nxt;   Sum=Sum->nxt;
            }
                
            else
            {
                if(p1->col < p2->col){
                    Sum->row = p1->row;
                    Sum->col = p1->col;
                    Sum->x = p1->x; 
                    p1=p1->nxt;  Sum=Sum->nxt;
                }

                else if(p1->col > p2->col){
                    Sum->row = p2->row;
                    Sum->col = p2->col;
                    Sum->x = p2->x; 
                    p2=p2->nxt;  Sum=Sum->nxt;
                }

                else
                {
                    Sum->row = p2->row;
                    Sum->col = p2->col;
                    Sum->x= p1-> x + p2->x;
                    p1=p1->nxt;  p2=p2->nxt;  Sum=Sum->nxt;
                }
            }
        }
        if (p1)  Sum->nxt = p1;
        else if (p2)  Sum->nxt = p2;

}


int main()
{
    int m1,n1,nz1,m2,n2,nz2;

    cout << "Enter no. of Rows, Column and Elements: (1)\n";
    cin >> m1 >> n1 >> nz1;

    Create1(m1,n1,nz1);

    Display(First,m1,n1);

    cout << "Enter no. of Rows, Column and Elements: (2)\n";
    cin >> m2 >> n2 >> nz2;

    Create2(m2,n2,nz2);

    Display(Second,m1,n1);

    Create3(nz1, nz2);
    Add(First, Second);
    Display(Sum,m1,m2);

    return 0;
}