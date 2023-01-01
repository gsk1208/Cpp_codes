#include<iostream>
using namespace std;

class LowTri
{
    private :
    int *A;
    int n;  // for nxn LowTri


    public :
    LowTri()
    {
        this->n = 2;
        A=new int[2*(2+1)/2];
    }

    LowTri(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void set(int i, int j, int x)
    {
        if (i >= j)
            A[((i*(i-1)/2)+j-1)] = x;
    }

    int get(int i, int j)
    {
        if(i>=j)
            return A[((i*(i-1)/2)+j-1)];
        else    
            return 0;
    }

    void Display()
    {
        for(int i=1;i <= n; i++) 
        {
            for(int j=1;j <= n; j++)
            {
                if(i>=j) cout << A[((i*(i-1)/2)+j-1)] <<  " ";
                else cout <<"0 ";
            }
            cout << endl;
        }
    }

    ~LowTri(){ delete [] A; }
};





int main()
{
    int d;
    cout <<"Enter dimensions :"<< endl;
    cin>>d;

    LowTri lm(d);

    int x;
    cout << "Enter all elements :"<< endl;

    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<=d; j++)
        {
            cin >> x;
            lm.set(i,j,x);
        }
    }
    

    lm.Display();  

    cout << endl << endl<< lm.get(3,3);
    
    return 0;

}