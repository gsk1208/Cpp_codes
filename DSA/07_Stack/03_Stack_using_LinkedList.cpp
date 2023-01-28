#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* nxt;
}; 

class Stack
{
    private:
    node* Top;

    public:

    Stack(){Top = NULL;}

    
void push(int x)
{
    node* t= new node;

    if(!t) cout << "Stack is full\n";
    else
    {
        t->data = x;
        t->nxt = Top;
        Top = t;
    }
    
}

int pop()
{
    int x=-1;

    if(Top==NULL)
    cout << "Stack is full\n";

    else
    {
    node* p = Top;
    Top = Top->nxt;
    x= p->data;
    delete p;
    }
    return x;
}

void Display()
{
    node*p = Top;
    while(p)
    {
        cout << p->data << endl;
        p=p->nxt;
    }
}

int Stacktop()
{
    if(Top==NULL)
    return -1;

    return Top->data;
}

int peek(int index)
{
    
    int i;
    node* p = Top;
    for(i=0; i<index-1; i++)
    {
        p=p->nxt;
    }

    if(p)
    return p->data;

    else return -1;
}

int isFull()
{
    node *t= new node;
    if(!t) return 1;
    else return 0;
}
};

int main()
{

    Stack stk;

     stk.push(4);
     stk.push(7);
     stk.push(9);
     stk.push(5);
     stk.push(13);
     stk.push(19);

     cout << "Display\n";
     stk.Display();
     
     cout << "peek : ";
     cout << stk.peek(3) << endl;

     cout << "Stacktop : ";
     cout << stk.Stacktop() << endl;

     cout << "pop : " << stk.pop() << endl;

     stk.pop();
     stk.pop();
     stk.pop();
     cout << stk.Stacktop();
     stk.pop();
     stk.pop();

    return 0;
}
