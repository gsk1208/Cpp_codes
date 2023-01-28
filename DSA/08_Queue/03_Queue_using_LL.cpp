#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* nxt;
}*front=NULL, *rear =NULL;

void enqueue(int x)
{
    node *t;
    t=new node;

    if(t==NULL) cout << "Queue is full\n";
    else
    {
        t->data=x;
        t->nxt=NULL;

        if(front==NULL)
        {
            front = rear =t;
        }

        else
        {
            rear->nxt=t;
            rear = t;
        }
    }
}

int dequeue() 
{
    int x=-1;
    if(front == NULL)  cout << "Queue is empty\n";

    else
    {
        node* p= front;
        x=front->data;
        front = front->nxt;
        delete p;
    }
    return x;
}

void Display()
{
    node * p= front;

    while(p)
    {
        cout << p->data<< " ";
        p=p->nxt;
    }
    cout << endl;
}

int main() 
{
    enqueue(3);
    enqueue(4);
    enqueue(13);
    enqueue(33);
    enqueue(43);
    enqueue(5);
    enqueue(9);
    enqueue(89);
    
    Display(); //

    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue() << " ";
    

    return 0;
}