#include<iostream>
using namespace std;

class Rectangle{
	private :
	int length;
	int breadth;
	
	public:
	Rectangle(){          // non-parameterized constructor
		length = 0;
		breadth = 0;
	}
	Rectangle(int l, int b){   // parameterized constructor
		length =l;
		breadth = b;
	}
	Rectangle(Rectangle &r1){   // copy cinstructor
		length = r1.length;
		breadth = r1.breadth;
	}
	
	 //constructors is also a type of function
	 // different types of functions in a class.
	 
	void setLength(int l){   
		length = l;
	}
	void setBreadth(int b){     
		breadth = b;                // mutators
	}
	int getLength(){          
		return length;
	}
	int getBreadth(){        // Accessors
		return breadth;
	}
	
	int area(){
		return length*breadth;
	}
	int perimeter(){           // facilitators
		return 2*(length+breadth);
	}
	
	bool issquare();       // enquirey
	
	 // ~Rectangle();          // destructor
};

int main()
{
	Rectangle rect(20,10);
	
	cout<< rect.area();
	
	return 0;
}