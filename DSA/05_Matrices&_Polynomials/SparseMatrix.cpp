//                 matrix with majority of non-zero elements :

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
  
int main()
{
    struct SparseMatrix s;

    create(&s);
    display(s);

    return 0;
}