#include<iostream>
using namespace std;

int swap(int a, int b)  //passing parameters by value
{
int k = a;
a = b;
b = k;
}

int swap(int *a, int *b ) // passing parameters by adress
{
	int k= *a;
	*a = *b;
	*b = k;
} 

int swap(int &a, int &b)   //passing parameters by reference;
{
	int k = a;
	a = b;
	b = k;
}

int main(){
	int a=10, b= 12;
	swap(a, b);
	cout << a << " "<<b<<endl;
	
	int c =1, d = 3;
	swap(&c, &d);
	cout <<c<<" "<<d<<endl;
	
	int p=5, q=9;
	swap(p,q);
	cout << p << " "<<q;
	
	return 0;
}

