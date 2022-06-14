#include<iostream>
using namespace std;

class rectangle{
	int length;
	int breadth;
	public:
	rectangle(int l, int b){
		length  = l;
		breadth = b;
	}
		
	void area(){
		cout << length*breadth;
	}
};

int main()
{
	unique_ptr<rectangle> p1(new rectangle(10,5));
	
    p1 -> area();
    
    // smart pointers unreference and delete the objects in the heap automatically as they terminate.
	
}