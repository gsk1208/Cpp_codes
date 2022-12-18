#include<iostream>
using namespace std;

pow(int m, int n)
{
    if(n==0)
        return 1;
    else
        return pow(m, n-1)*m;

}

pow1(int m, int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return pow(m*m, n/2);
    else
        return pow(m*m, (n-1)/2)*m;

}

int main()
{
    int p = pow(2,5);
    int p1 = pow(2,5);

    cout << p << endl << p1 << endl;

    return 0;

}