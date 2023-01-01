#include<iostream>
using namespace std;

class symMatrix
{
    public:
    int *A;
    int n;  // for nxn

    
    symMatrix()
    {
        A=new int[2*(2+1)/2];
        n=2;
    }

    symMatrix(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void set(int i, int j, int x)
    {
        if(i>=j)
            A[(i*(i-1)/2)+j-1] = x;
    }

    int get(int i, int j)
    {
        for (int i=0; i<n; i++){
            if(i>=j)
                return A[(i*(i-1)/2)+j-1];
            else    
                return 0;
        }
    }

    void Display()
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i>=j)
                    cout << A[(i*(i-1)/2)+j-1]<< " ";
                else
                    cout << A[(j*(j-1)/2)+i-1]<< " ";
            }
            cout << endl;
        }
    }

    ~symMatrix(){ delete [] A; }
};

int main()
{
    symMatrix sm;
    int x;
    cout << "Enter dimensions : ";
    cin>> sm.n;

    cout << "Enter all the elements : ";

    for(int i=1; i<=sm.n;i++)
    {
        for(int j=1; j<=sm.n; j++)
        {
            cin >> x;
            sm.set(i,j,x);
        }
    }

    sm.Display();


    return 0;
} 