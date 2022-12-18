#include<iostream>
using namespace std;

int rsum(int n)
{
    if(n==0) 
        return 0;

    else 
        return rsum(n-1)+n;
}

int isum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }

    return sum;
}


int main()
{


    int r = rsum(5);
    int i = isum(5);

    cout <<"Recursive sum: "<< r << endl;
    cout <<"Iterative sum: "<< i << endl;

    return 0;
}