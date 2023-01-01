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

    poly &operator+(poly &p)
    {
        poly *sum;
        sum = new poly(num+p.num);
        sum->t =new terms[num + p.num];
        int i,j,k;
        i=j=k=0;

        while(i<num && j<p.num)
        {
            if(t[i].exp > p.t[j].exp)
                sum->t[k++]= t[i++];
            else if(t[i].exp < p.t[j].exp)
                sum->t[k++]= t[j++];
            else
            {
                sum->t[k]= t[i];
                sum->t[k++].coef= t[i++].coef + p.t[j++].coef;
            }
        }

        for(;i<num;i++) sum->t[k++] = t[i];
        for(;j<p.num;j++) sum->t[k++] = p.t[j];

        return *sum;
     
    }
    

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
    poly p1(5);
    poly p2(5);
    cin >> p1;
    cin >> p2;

    poly p3(5);
    p3 = p1 +p2;

    cout << "Polynomial 1 : "<< p1 << endl;
    cout << "Polynomial 2 : "<< p2 << endl;
    cout << "sum Polynomial : "<< p3 << endl;

    

    return 0;
}

