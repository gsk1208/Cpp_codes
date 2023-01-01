#include<iostream>
using namespace std;

class Element 
{
public:
    int i;
    int j;
    int x;
};

class SparseMatrix
{    
private:
    int m;
    int n;
    int num;
    Element *ele;

public:
    SparseMatrix(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        this->ele = new Element[this->num];
    }

    ~SparseMatrix()
    {
        delete[] ele;
    }

    friend istream & operator >> (istream &is, SparseMatrix &s);

    friend ostream & operator<<(ostream &os, SparseMatrix &s);
    
    
};

    istream & operator >> (istream &is, SparseMatrix &s)
    {
        for(int i=0;i<s.num;i++)
            cin>> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;

        return is;
    }

    ostream & operator << (ostream &os, SparseMatrix &s)
    {
        int k=0;
        for(int i=0;i<s.n; i++)
        {
            for(int j=0;j<s.n; j++)
            {
                if (s.ele[k].i == i && s.ele[k].j == j)
                {
                    cout << s.ele[k++].x << " ";
                }
                else cout << "0 ";
                
            }
            cout << endl;
        }
        return os;
    }



int main()
{
    SparseMatrix S1(5,5,5);
    cin >> S1;
    cout << S1;

    return 0;
}