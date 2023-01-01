#include <iostream>
using namespace std;

struct Element
{
    int i;
    int j;
    int x;
};

struct SparseMatrix
{
    int m;
    int n;
    int nz;
    struct Element *ele;

};

void create(struct SparseMatrix *s)
{
    cout << "enter number of rows and colums :";
    cin >> s->m >> s->n;

    cout << endl << "enter number of non-zero elements :";
    cin >> s->nz;

    s-> ele = new Element[s->nz];

    for (int i = 0; i < s->nz; i++)
    {
        cin >> s->ele[i].i >> s->ele[i].j >> s->ele[i].x;
    }
}

void display(struct SparseMatrix s)
{
    cout << endl << "The Sparse matrix is :" << endl ;
    int i=0,k=0,j=0;

    for (i = 0; i < s.m; i++)
    {
        for(j=0; j < s.n; j++)
        {
            if(s.ele[k].i == i && s.ele[k].j == j)
                cout << s.ele[k++].x << " " ;
            else    cout << "0 ";
        }
        cout << endl;
    }
}

SparseMatrix * add(SparseMatrix *s1, SparseMatrix *s2)
{
    if(s1->m == s2->m || s1->n == s2->n)
    {
        SparseMatrix *sum;
        sum = new SparseMatrix;
        sum->ele = new Element[s1->nz + s2->nz];

        int i,j,k;
        i=j=k=0;
        while(i< s1->nz && j< s2->nz)
        {
            if(s1->ele[i].i < s2->ele[j].i)
                sum->ele[k++] = s1->ele[i++];
            else if(s1->ele[i].i > s2->ele[j].i)
                sum->ele[k++] = s2->ele[j++];
            else
            {
                if(s1->ele[i].j < s2->ele[j].j)
                    sum->ele[k++] = s1->ele[i++];
                else if(s1->ele[i].j > s2->ele[j].j)
                    sum->ele[k++] = s2->ele[j++];
                else
                {
                    sum->ele[k]= s1-> ele[i];
                    sum->ele[k++].x = s1->ele[i++].x + s2->ele[j++].x;
                }
            }
        }
        for(;i<s1->nz;i++) sum->ele[k++]= s1->ele[i];
        for(;j<s2->nz;j++) sum->ele[k++]= s2->ele[j];

        sum-> m = s1->m;
        sum-> n = s1->n;
        sum -> nz = k;

    }

    else cout << "Invalid Addition\n\n"  ;
}
  
int main()
{
    struct SparseMatrix s1, s2, *s3;

    create(&s1);
    create(&s2);

    s3 = add(&s1, &s2);

    cout << "\n Matrix 1 \n";
    display(s1);

    cout << "\n Matrix 2 \n";
    display(s2);

    cout << "\n Sum - Matrix \n";

    display(*s3);

    return 0;
}