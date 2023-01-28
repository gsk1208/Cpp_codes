#include<iostream>
using namespace std;

class Stack
{
    private:
    int size;
    int top;
    int* S;

    public:
    Stack(int size);
    ~Stack();
    
    void push(int x);
    int pop();
    void Display();
    int Stacktop();
    int peek(int index);
    int isFull();

};

Stack::Stack(int size)
    {
        this->size = size;
        top=-1;
        S= new int[size];
    }

Stack::~Stack()
    {
        delete[] S;
    }

void Stack :: push(int x)
    {
        if(top==size-1) cout << "\nStack overflow\n";
        else
        {
            S[++top] = x;
        }
    }

int Stack :: pop()
    {
        int x=-1;
        if(top==-1) cout << "\nStack underflow\n";
        else
        {
            x= S[top--]; 
        }
        return x;
    }

void Stack :: Display()
    {
        for(int i=top; i>=0; i--) cout << S[i] << endl;
    }

int Stack :: Stacktop()
    {
        if(top==-1) return -1;
        else return S[top];
    }

int Stack :: peek(int index)
    {
        int x=-1;
        if(top+1-index < 0) cout << "Invalid Index\n";
        else
        {
            x=S[top-index+1];
        }
        return x;
    }

int Stack :: isFull()
    {
        if(top==size-1) return 1;
        return 0;
    }


int main()
{
     Stack stk(5);

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