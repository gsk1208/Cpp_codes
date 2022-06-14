#include<iostream>
using namespace std;

class car{
	public:
	virtual void start(){
		cout << "car started\n";
	}
	virtual void stop(){
	cout << "car is stopped\n";
	}
};

class innova: public car{
	public:
	void start(){
		cout << "innova started\n";
	}
	void stop(){
	cout << "innova is stopped\n";
	}
};

class swift : public car {
	public:
	void start(){
		cout << "swift started\n";
	}
	void stop(){
	cout << "swift is stopped\n";
	}
};
	

int main()
{
	car *p = new swift();
	p -> start();
	p-> stop();
	
	p = new innova();
	p-> start();
	
	p = new car();
	p-> start();
	
}