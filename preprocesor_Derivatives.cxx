#include<iostream>
using namespace std;

#define pi 3.1425
#define msg(x)  #x
#define max(x,y) (x>y ? x : y)
#define C cout 
#define E endl
#ifndef pi
	#define pi 3
#endif

int main()
{
	cout << pi << endl;
	cout << msg(8)<<endl;
	cout << msg(hello) << E;
	C << max(3,6);
	
	return 0;
}