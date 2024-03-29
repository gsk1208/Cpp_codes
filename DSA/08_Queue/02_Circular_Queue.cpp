#include<iostream>
using namespace std;

class queue 
{
    int size;
    int front;
    int rear;
    int *Q;

    public:
    queue(int size) 
    {
        this->size = size;
        front = rear =0;
        Q = new int[this->size];
    }

    ~queue()
    {
        delete[] Q;
    }

    void enqueue(int x)
    {
        if((rear+1)%size == front) 
            cout << "Queue is full\n";
        else
        {
        rear = (rear+1)%size;
        Q[rear] = x;
        }
    }

    int dequeue()
    {
        int x=-1;
        if(front == rear)
            cout << "Queue is empty\n";
        else
        {
            front = (front+1)%size;
            x= Q[front];
        }
        return x;
    }

    void Display()
    {
        int i=front+1;
        do
        {
            cout << Q[i] << " ";
            i = (i+1)%size;
        }while(i!=(rear+1)%size);
        cout << endl;
    }
};

int main()
{
    queue q(10);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(0);
    q.enqueue(1);

    q.Display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    q.Display();

    return 0;
}