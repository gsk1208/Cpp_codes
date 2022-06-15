#include<iostream>
using namespace std;

class student{
	int roll_no;
	string name;
	static int addNo;
	
	public :
	student(string n){
		name = n;
		addNo++;
		roll_no = addNo;
	}
	void display(){
		cout << "Name : " << name  << endl<<"roll no is : " << roll_no;
	}
};

int student :: addNo = 0;
// static number declared inside the class must be declared outside the class again


int main()
{
	student s1("selvan");
	student s5("Shiva");
	student s3("Vinay");
	
	s5.display();
	return 0;
}