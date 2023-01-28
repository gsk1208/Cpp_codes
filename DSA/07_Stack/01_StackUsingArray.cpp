#include<iostream>
using namespace std;

class Stack
{
    private:
    int size;
    int top;
    int *S;
    public:
    Stack(int size)
    {
        this->size = size;
        top=-1;
        S = new int[size];
    }

    ~Stack()
    {
        delete[] S;
    }

    void Display()
    {
        for(int i=top;i>=0;i--)
        {
            cout << S[i] << endl;
        }
    }
};

int main() 
{
     Stack stk(5);
     stk.Display();

    return 0;
}

