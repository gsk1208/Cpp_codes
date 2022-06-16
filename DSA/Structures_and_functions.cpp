#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initializer(struct rectangle *r, int l, int b){
    r-> length = l;
    r-> breadth = b;
}

int area(rectangle r){
    return r.length*r.breadth;
}

void changeLength(struct rectangle *r, int l){
    r->length=l;
}

int main(){
    rectangle r;
    initializer(&r, 10, 5);
    cout << area(r) << endl;
    changeLength(&r,15);
    cout << area(r)<< endl;
}