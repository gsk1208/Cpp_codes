#include<iostream>
using namespace std;

class base{
	private:
	int a;
	protected:
	int b;
	public:
	int c;
	
	void funbase(){
		a = 10;    // ✓
		b = 20;   //  ✓          Accessible
		c = 30;   //  ✓
	}
};

class derived : public base{
	public:
	void funderived(){
		a = 10;    // ×          private inAccesible   €
		b = 20;   //  ✓          Accessible
		c = 30;   //  ✓         Accessible
	}
};

int main()
{
	base x;
	x.a = 10;    // ×      private inAccesible      ¥
	x.b = 20;   //  ×      protected to base,       $ inAccessible
	x.c = 30;   //  ✓     Accessible	
	
	return 0;
		
}

// 3 errors -  €, ¥, $;