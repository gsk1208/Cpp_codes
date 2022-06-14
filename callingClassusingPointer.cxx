#include<iostream>
using namespace std;

class circle{
	public:
	float radius;
	float area(float r){
		radius = r;
		return (22/7)*r*r;
	}
	
	int perimeter(float r){
		radius = r;
		return (22/7)*2*r;
	}
};
		
	


int main()
{
	circle c1, *c2;
	c2 = &c1;
	cout << c1.area(12.5) << endl;
	cout << c2 -> perimeter(5) << endl;
	
	return 0;
	
}