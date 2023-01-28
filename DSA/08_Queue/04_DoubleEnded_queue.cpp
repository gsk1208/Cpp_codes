#include<iostream>
using namespace std;

class DEQueue 
{
    int size;
    int front;
    int rear;
    int *Q;

    public:
    DEQueue(int size);
    void f_enqueue(int x);
    void r_enqueue(int x);
    int f_dequeue();
    int r_dequeue();
    void Display();
    ~DEQueue();
};

DEQueue :: DEQueue(int size) 
{
    this->size = size;
    front = -1; 
     rear = -1;
    Q = new int[size];
}

DEQueue :: ~DEQueue()
{
    delete[] Q;
}

void DEQueue :: f_enqueue(int x)
{
    if(front==-1) 
        cout << "Queue is full from this side\n";
    else
    {
        Q[front] = x;
        front--;
    }
}

void DEQueue :: r_enqueue(int x)
{
    if(rear = size-1)
        cout << "Queue is full from this side\n";
    else
    {
        rear++;
        Q[rear] = x;
    }
}

int DEQueue :: f_dequeue()
{
    int x =-1;
    if(front == rear)
        cout << "Queue is empty\n";
    else
    {
        x= Q[front];
        front++;
    }
    return x;
}

int DEQueue :: r_dequeue()
{
    int x =-1;
    if(rear == -1)
        cout << "Queue is empty\n";
    else
    {
        x= Q[rear];
        rear--;
    }
    return x;
}

void DEQueue :: Display() 
{
    for(int i=front+1; i<= rear; i++)
    {
        cout << Q[i] << flush;
        if(i<rear)  
            cout << " <- "<<flush;
    }
    cout << endl;
}

int main()
{
    int A[] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8};
 
    DEQueue deq(sizeof(A)/sizeof(A[0]));
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        deq.r_enqueue(A[i]);
    }
    deq.Display();
    deq.r_enqueue(11);
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        deq.f_dequeue();
    }
    deq.f_dequeue();
 
    cout << endl;
 
    for (int i=0; i<sizeof(B)/sizeof(B[0]); i++){
        deq.f_enqueue(B[i]);
    }
    deq.Display();
    deq.f_enqueue(10);
    deq.f_enqueue(12);
 
    for (int i=0; i<sizeof(B)/sizeof(B[0]); i++){
        deq.r_dequeue();
    }
    deq.Display();
    deq.r_dequeue();
    deq.r_dequeue();
 
    return 0;
    
}

