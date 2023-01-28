#include<iostream>
using namespace std;

class queue 
{
    int size;
    int front;
    int rear;
    char *Q;

    public:
    queue(int size) 
    {
        this->size = size;
        front = rear =0;
        Q = new char[this->size];
    }

    ~queue()
    {
        delete[] Q;
    }

    void enqueue(char x)
    {
        if((rear+1)%size == front) 
            cout << "Queue is full\n";
        else
        {
        rear = (rear+1)%size;
        Q[rear] = x;
        }
    }

    char dequeue()
    {
        char x;
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
    queue q1(10), q2(10), q3(10);

    q.enqueue('A');
    q.enqueue('B');
    q.enqueue('C');
    q.enqueue('D');
    q.enqueue('R');
    q.enqueue('F');
    

    q.Display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    q.Display();

    return 0;
}

// get an explanation 