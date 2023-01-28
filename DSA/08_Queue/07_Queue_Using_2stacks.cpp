#include <iostream>
#include <stack>

using namespace std;
 
class Queue
{
private:
    stack<int> s1;
    stack<int> s2;
public:
    Queue(){};
    ~Queue(){};
    void enqueue(int x);
    int dequeue();
};
 
void Queue::enqueue(int x) 
{
    s1.push(x);
}
 
int Queue::dequeue() 
{
    int x = -1;
    if (s2.empty())
    {
        if (s1.empty())
        {
            cout << "Queue Underflow" << endl;
            return x;
        } 
        else 
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
    x = s2.top();
    s2.pop();
    return x;
}
 
int main() 
{
 
    int A[] = {1, 3, 5, 7, 9};
 
    Queue q;
 
    cout << "Enqueue: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++)
    {
        q.enqueue(A[i]);
        cout << A[i] << flush;
        if (i < sizeof(A)/sizeof(A[0])-1)
        {
            cout << " <- " << flush;
        }
    }
    cout << endl;
 
    cout << "Dequeue: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++)
    {
        cout << q.dequeue() << flush;
        if (i < sizeof(A)/sizeof(A[0])-1)
        {
            cout << " <- " << flush;
        }
    }
 
    return 0;
}