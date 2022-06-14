#include<iostream>
using namespace std;

class Rational{
	private:
	int p;
	int q;
	
	public:
	int getP(){return p;}
	int getQ(){return q;}
	
	Rational(int p=1, int q=1){
		this -> p = p;
		this -> q = q;
	}
	
	Rational operator+(Rational r){
		Rational t;
		t.p = this->p*r.q + this->q*r.p;
		t.q = this->q*r.q;
		return t;
	}
	
	friend ostream & operator<<(ostream &os, Rational &r);
	
	/*void display(Rational r){
		cout << r.p <<"/"<<r.q;
	} */
};

ostream & operator<<(ostream &os, Rational &r){
	os << r.p << "/"<<r.q;
	return os;
}
	

int main()
{
	Rational r1(12, 5);
	Rational r2(13, 3);
	Rational r3 = r1 + r2;
	
	cout << "sum of "<< r1 <<" and " << r2<< " is "<< r3;
	
	//r3.display(r3);
	return 0;
	
}