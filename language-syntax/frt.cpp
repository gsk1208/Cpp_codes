#include <iostream>
#include<cstdarg>
using namespace std;

int sum(int n, ...)
{
    va_list list;
    va_start(list,n);
    int x;
    int s=0;
    for(int i=0; i<n; i++)
    s+=va_arg(list,int);
    va_end(list);
    return s;
}

int main()
{
    cout <<"sum of first set" << sum(3, 10,20,30)<<endl;
    cout << "sum of second set" << sum(5,1,2,3,4,5)<<endl;
}