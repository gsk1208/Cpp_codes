#include<iostream>
using namespace std;

int fun(int x){
		
		if(x>0){
		    cout << x << endl;
		    fun(x-1);
		}
		
		
		
}

int main()
{
	int a,b;
	cout << "Enter a: ";
	cin >> a;
	fun(a);
	
	return 0;
}
	