#include<iostream>
#include<cstring>
using namespace std;

class node
{
    public:
    char data;
    node* nxt;
}; 

class Stack
{
    private:
    node* Top;

    public:

    Stack(){Top = NULL;}

    
void push(char x)
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

char pop()
{
    char x= '0';

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

char Stacktop()
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

int isEmpty()
{
    if(Top==NULL) return 1;
    else return 0;
}
};

int isBalanced(char exp[])
{
    Stack stk;

    for(int i=0; i< strlen(exp); i++)
    {
        if(exp[i]=='{' || exp[i]=='(' || exp[i]== '[')
        {
            stk.push(exp[i]);
        }
        else if(exp[i]=='}')
        {
            if(stk.isEmpty() || stk.pop() !=  '{') return 0;
        }
        else if(exp[i]==')')
        {
            if(stk.isEmpty() || stk.pop() !=  '(') return 0;
        }
        else if(exp[i]==']')
        {
            if(stk.isEmpty() || stk.pop() !=  '[') return 0;
        }

    }
    if(stk.isEmpty()) return 1;
    else return 0;
}

int main()
{
    
    char A[] = "{(a+b)+[]*[ [{a+b}]}";
    cout << isBalanced(A)<< endl;

    return 0;
}
