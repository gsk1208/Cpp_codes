#include<iostream>
using namespace std;
int main()
{
    int base, height;
    float Area;
    cout << "Enter base and height" << endl;
    cin >> base >> height;
    Area = (float)(base*height)/2;  // typecasting (without (float) result will be int - int*int)
    cout << "Area is " << Area << endl;
    return 0;
}