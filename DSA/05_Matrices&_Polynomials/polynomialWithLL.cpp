#include<iostream>
using namespace std;

class term
{
    public:
    int coef;
    int exp;
    term* nxt;
}* First=NULL, *Second=NULL;

void Create1(int n)
{
    First = new term;
    term *Last=NULL, *t=NULL;

    cout << "Enter Coefficient and Exponent of " << n << " terms\n";

    cin >> First->coef >> First->exp;

    First->nxt =NULL;
    Last = First;

    for(int i=0; i<n-1; i++)
    {
        t = new term;
        Last ->nxt = t;
        cin >> t->coef >> t->exp;
        t->nxt = NULL;
        Last = t;
    }
}

void Create2(int n)
{
    Second = new term;
    term *Last=NULL, *t=NULL;

    cout << "Enter Coefficient and Exponent of " << n << " terms\n";

    cin >> Second->coef >> Second->exp;

    Second->nxt =NULL;
    Last = Second;

    for(int i=0; i<n-1; i++)
    {
        t = new term;
        Last ->nxt = t;
        cin >> t->coef >> t->exp;
        t->nxt = NULL;
        Last = t;
    }
}

void Display(term *t)
{
    while(t)
    {
        cout << t->coef <<"x"<<t->exp<<" + ";
        t=t->nxt;
    }
}

term* Add(term *t1, term *t2)
{
    term* result = new term, *Last=NULL;
    if(t1->exp == t2->exp)
    {
        result->coef = t1->coef + t2->coef;
        result->exp = t1->exp;
        t1=t1->nxt;
        t2=t2->nxt;
    }
        
    else if(t1->exp > t2->exp)
    {
        result-> coef = t1->coef;
        result->exp = t1->exp;
        t1=t1->nxt;
    }

    else 
    {
        result-> coef = t2->coef;
        result->exp = t2->exp;
        t2=t2->nxt;
    }

    result->nxt = NULL;
    Last = result;
    term *t;


    while(t1 && t2)
    {
        t= new term;
        if(t1->exp == t2->exp)
        {
            t->coef = t1->coef + t2->coef;
            t->exp = t1->exp;
            t1=t1->nxt;
            t2=t2->nxt;
        }
        
        else if(t1->exp > t2->exp)
        {
            t-> coef = t1->coef;
            t->exp = t1->exp;
            t1=t1->nxt;
        }

        else 
        {
            t-> coef = t2->coef;
            t->exp = t2->exp;
            t2=t2->nxt;
        }

        Last->nxt = t;
        t->nxt = NULL;
        Last = t;
    }

    while(t1) 
    {
        Last->nxt = t1;
        t1->nxt = NULL;
        Last = t1;
    }

    while(t2) 
    {
        Last->nxt = t2;
        t2->nxt = NULL;
        Last = t2;
    }

    return result;

}

int main() 
{
    Create1(4);
    Create2(5);

    cout << endl;

    Display(First);
    cout << endl;
    Display(Second);
    term *t3;

    cout << endl;
    t3 = Add(First, Second);
    cout << endl;
    Display(t3);

    return 0;
}
