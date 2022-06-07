#include<iostream>
using namespace std;

int main(){
	int A[] = {2, 4, 6, 8, 10};
	
	for(int i=0; i<5; i++)
	{                                       //for loop
		cout << A[i]<< "  ";
	}
	
	cout << endl;
	
	for(int x:A)
	{                                      //for each loop
		cout << x << "  ";
	}
	
	cout << endl;
	
	for(int a:A)
	{
		cout << ++a << "  ";
	}
	
	return 0;
}