#include<iostream>
using namespace std;

class Toe
{
    int n;
    int *A;

    public:

    Toe(int n)
    {
        this->n = n;
        A = new int[2*n-1];
    }

    void set(int i, int j, int x)
    {
      
                if(i<=j) A[j-i] = x;
                else  A[n+i-j-1] = x;
            
    }

    int get(int i, int j)
    {
        if(i<=j) return A[j-i];
        else return A[n+i-j-1];
    }

    void display()
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i<=j) cout << A[j-i] << " ";
                else cout << A[n+i-j-1] << " ";
            }
            cout << endl;
        }
    }

    ~Toe(){ delete [] A; }
};

int main()
{
    int n,x=0;
    cout << "Enter dimensions :";
    cin >> n;
    Toe t(n);
    cout << endl << "Enter all elements :" ;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            t.set(i, j, x);
        }
    }

    t.display();

    return 0;


}