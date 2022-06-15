#include<iostream>
using namespace std;

class Rectangle{
	private:
	int length ;
	int breadth;
	
	public:
	Rectangle(int l, int b){
		this -> length = l;
		this -> breadth = b;
	}
	
	int area();                 // mentioning
	int perimeter(){
	     return 2*(length+breadth);
	}
};

	int Rectangle::area(){   
		return length*breadth;
	}         								// using scope operator to write the function outside the class

int main()
{
	Rectangle r(10, 15);
	cout << r.perimeter() << endl;
	cout << r.area();
}



// in data-type called Structure, the data members and member functions are public by default.   that is unlike the Class