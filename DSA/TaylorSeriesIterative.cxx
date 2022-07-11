#include<iostream>
using namespace std;

double e(int x, int n){
	double num =1, den = 1;
	double r=1;
	
	for(int i =1; i<=n; i++){
		
		num *= x;
		den *= i;
		r += num/den;
		
		} 
		return r;
}
	

int main()
{
	cout << e(1,15);
	return 0;
}
	
    
		
		
		