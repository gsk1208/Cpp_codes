#include<iostream>
using namespace std;

int ifib(int n){
	int t0= 0, t1 = 1;
	int s =0;
	
	if(n==0) return t0;
	else if(n==1) return t1;
		
	else {
			for(int i=1; i<n; i++){
		
			s = t1 + t0;
			t0=t1;
			t1 = s;
			}
			return s;
	}

}
		

int main()
{
	cout << ifib(6);
	return 0;
}