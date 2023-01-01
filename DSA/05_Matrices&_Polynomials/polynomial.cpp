#include<iostream>
using namespace std;

class terms
{
    public:
    int coef;
    int exp;
};

class poly{
    public:
    int num;     // number of terms
    terms *t;

    poly(int n)
    {
        num = n;
        t = new terms[n];
    }

    friend istream &operator>>(istream &is, poly &p);
    friend ostream &operator>>(ostream &os, poly &p);
    

};

    istream &operator>>(istream &is, poly &p)
    {
        cout << "Enter coefficient and exponents :\n";
        for(int i=0; i<p.num; i++)
        {
            cin >> p.t[i].coef >> p.t[i].exp;
        }

        return is;
    }

    ostream &operator<<(ostream &os, poly &p)
    {
        cout << "The polynomial is: \n";
        for (int i=0; i<p.num; i++)
        {
            cout << p.t[i].coef <<"X"<< p.t[i].exp << " + ";
        }
        cout << endl;

        return os;
    }


int main()
{
    poly p(5);
    cin >> p ;
    cout<< p;

    return 0;
}

