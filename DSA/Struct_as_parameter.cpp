#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void fun (struct rectangle R){    //call by value
    R.length = 20;                // call by value cannot change the actual variables
    cout << "Length  "<< R.length <<endl << "Breadth "<< R.breadth 
    << endl;
}

int main(){
    rectangle r={10, 5};
    fun(r);
    cout << "Length :"<< r.length <<endl << "Breadth :"<< r.breadth 
    << endl;

    return 0;
}