#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,r;
	int m,sum=0;
	cout << "enter n ";
	cin >> n;
	m = n;
	while(n>0)
	{
		r=n%10;
		n=n/10;   // sum of cubes of digits equals the number.
		sum += pow(r,3);
	
	}
	if(sum == m)
	cout << m << " is a Amstrong number.";
	else
	cout << m << " is not a Amstrong number.";
	return 0;
}