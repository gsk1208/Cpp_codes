#include<iostream>
using namespace std;

class Rectangle{
	private :
	int length;
	int breadth;
	
	public:
	
	Rectangle(int l=0, int b=0){   
		length =l;
		breadth = b;
	}

	 
	 int setLength(int l){   
		length = l;
	}
	int setBreadth(int b){     
		breadth = b;                // mutators
	}
	
	int getLength(){          
		return length;
	}
	int getBreadth(){        // Accessors
		return breadth;
	}
	
	void area(){
		cout << length*breadth;
	}
	void perimeter(){
		cout << 2*(length+breadth);
	}
};

class Cuboid:public Rectangle{
	private:
	int height;
	public:
	Cuboid(int l, int b, int h){
		setLength(l);
		setBreadth(b);
		height = h;
	}
	int setHeight(int h){
		height = h;
	}
	int getHeight(){
		return height;
	}
	
	void perimeter(){
		cout << 2*(getLength() * getBreadth() + getBreadth()*height + height*getLength());
	}
	void volume(){
		cout << getLength()*getBreadth()*height;
	} 
};
	

int main(int argc, char *argv[])
{
	Cuboid c(5,10,20);
	 c.volume();
	
}