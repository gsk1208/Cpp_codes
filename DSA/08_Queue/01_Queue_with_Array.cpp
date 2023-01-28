#include<iostream>
using namespace std;

class queue                      // First In First Out  (FIFO)
{
    private:
    int size;
    int front;
    int rear;
    int *Q;        // Array

    public:

    queue(int size)
    {
        
        this->size = size;
        Q=new int[this->size];
        front = rear = -1;

    }

    ~queue()
    {
        delete []Q;
    }

    void enqueue(int x)
    {
        if(rear == size -1)
            cout << "Queue is full\n";
        else
        {
            rear++;
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
            front++;
            x=Q[front];
        }
        return x;
    }

    void Display(){
        for(int i=front+1; i<=rear; i++)
        {
            cout << Q[i] << " ";
        }
        cout << endl;
    }
};


int main()
{
    queue q(8);

    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(1);
    q.enqueue(4);
    q.enqueue(2);
    q.enqueue(7);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(5);

    q.Display();
    cout << q.dequeue() << endl;
    q.Display();


    return 0;

}


/*
there are multiple drawbacks of using Array for queue   
like spaces can be used only once   
queue can be empty and full at the same time etc     Use of Circular queue is better
*/