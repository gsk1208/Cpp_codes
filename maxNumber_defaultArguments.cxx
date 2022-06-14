#include<iostream>
using namespace std;

int max(int a=0, int b=0, int c=0){
	/*if(a>=b && a>=c)
	return a;
	else if(b>=a && b>=c)
	return b;
	else if (c >=a && c>=b)
	return c; */
	    
	      return a>=b && a>=c ? a: b>=c ? b: c;
	
}

int main()
{
	cout << max() << endl << max(12)<<endl<<max(12,16)<<endl<<max(1,5,8);
	
	return 0;
}