#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[10] = {'1','2', '3', '4', '5', '8'};
	char s2[10] = {'2', '4', '.', '6', '7'};
	long int x;
	float y;
	x = strtol(s1, Nlull, 10);      //str to long int;
	y = strtof(s2, Null);            //str to float;
	cout << x << endl;
	cout << y << endl;
	return 0;
	
}