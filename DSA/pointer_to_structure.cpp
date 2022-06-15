#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    struct rectangle r = {10, 5};     // in c++ compiler you can just write rectangle
    struct rectangle *p;
    p = &r;

    cout << (*p).length << endl;         // same
    cout << p-> length << endl;          // same

    rectangle *p1;
    p1 = new rectangle;         // only in c language "struct" is mandatory
    p1->length = 20;
    p1->breadth = 40;

    cout << (*p1).length<< endl;      

}