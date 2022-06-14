#include<iostream>
using namespace std;

class employee{
	int eid;
	string name;
	
	public:
	employee(int e, string n){
		eid = e;
		name = n;
	}
	int getEid(){return eid;}
	string getName(){return name;}
};

class fulltimeemployee : public employee{
	private:
	int salary;
	
	public:
	fulltimeemployee(int e,string n,int s) : employee(e, n){
		salary = s;
	}
	int getSalary(){return salary;}
};

class parttimeemployee : public employee{
	private:
	int wage;
	
	public:
	parttimeemployee(int e,string n,int w) : employee(e, n){
		wage = w;
	}
	int getWage(){return wage;}
};

int main()
{
	fulltimeemployee f1(12, "Vinay", 15000);
	parttimeemployee p1(4, "Pavi", 500);
	
	cout << "Salary of "<< f1.getName() << " is : "<< f1.getSalary();
}