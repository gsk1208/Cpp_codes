#include<iostream>
using namespace std;

int main()
{
	int n,r;
	cout << "Enter n ";
	cin>> n;
	while(n>0){
		r=n%10;
		n=n/10;
		cout << r;	
	}
	return 0;
}
