#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; while(t--){
	    int x1,y1,x2,y2;
	    cin >>x1>>y1>>x2>>y2;
	    
	    int X = x1>x2 ? (x1-x2) : (x2-x1);
	    int Y = y1>y2 ? (y1-y2) : (y2-y1);
	    
	    cout << max(X,Y);
	}
	return 0;
}