#include<iostream>
using namespace std;

int main()
{
	int A[10] = {1, 56, 23, 45, 11,78, 49, 66, 55, 31};	
	int sum= 0;


	for(int x:A){
		sum = sum + x;
	}
	cout << "Sum of the elements : " << sum;
	return 0;
}
		