#include<iostream>
using namespace std;

class Rectangle{
	private:
	int length;
	int breadth;
	
	public:
	int setLength(int l){    //write only function
		length = l;
	}
	int setBreadth(int b){     // """ 
		breadth = b;
	}
	int getLength(){          //read only function
		return length;
	}
	int getBreadth(){        //  '"""'
		return breadth;
	}
	
	int area(){
		return length*breadth;
	}
	int perimeter(){
		return 2*(length+breadth);
	}
};

int main()
{
	Rectangle r1;
	r1.setLength(10);	
	r1.setBreadth(15);
	r1.getLength();
	r1.getBreadth();
	
	cout << r1.area()<< endl<< r1.perimeter();
	
	return 0;
}