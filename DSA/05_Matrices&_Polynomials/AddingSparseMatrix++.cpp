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

    SparseMatrix operator+(SparseMatrix &s);

    friend istream & operator >> (istream &is, SparseMatrix &s);

    friend ostream & operator<<(ostream &os, SparseMatrix &s);
    
    
};

    SparseMatrix SparseMatrix:: operator+(SparseMatrix &s)
    {
        if(m != s.m || n != s.n) cout << "Invalid addition\n";

        else{
        int i,j,k;
        i=j=k=0;

        SparseMatrix *sum = new SparseMatrix(m,n,num+s.num);

        while(i<num && j<s.num)
        {
            if(ele[i].i < s.ele[j].i)
                sum->ele[k++] = ele[i++];
            else if(ele[i].i > s.ele[j].i)
                sum->ele[k++] = s.ele[j++];
            else
            {
                if(ele[i].j < s.ele[j].j)
                    sum->ele[k++] = ele[i++];
                else if(ele[i].j > s.ele[j].j)
                    sum->ele[k++] = s.ele[j++];
                else
                {
                    sum->ele[k] = ele[i];
                    sum->ele[k++].x = ele[i++].x + s.ele[j++].x;
                }

            }
        }
        for(;i<num;i++) sum->ele[k++]=ele[i];
        for(;j<s.num;j++) sum->ele[k++]= s.ele[j];
        sum->num = k;

        return * sum;
        }
    }

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
    SparseMatrix S2(5,5,5);
    cin >> S2;
    SparseMatrix S3 = S1 + S2;

    cout << S1 << endl;
    cout << S2 << endl;
    cout << S3 << endl;

    return 0;
}