#include<iostream>
using namespace std;

class outer{
	class inner{
		public:
		void show(){
			cout << " inner - show\n";
		}
	};
	public :
	inner i;
	void fun(){
		i.show();
	}
};

int main()
{
	outer o;
	o.fun();
}