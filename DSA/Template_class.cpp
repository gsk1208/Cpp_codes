#include <iostream>
using namespace std;

template <class T>                 // bETTER TO WRITE THE TOTAL PROGRAM WITH SOME DATA-TYPE AND THEN CHANGE IT TO TEMPLATE CLASS
class arthmatic{
    private: T a; T b; 
    public: 
    arthmatic(T a, T b);
    T add();
    T sub();
    void changeA(T a);
    void changeB(T b);
    
};

template <class T>
arthmatic<T>::arthmatic(T a, T b){
    this->a = a;
    this->b = b;
}

template <class T>
T arthmatic<T>::add(){
    return a + b;
}

template <class T>
T arthmatic<T>::sub(){
    return a - b;
}

template <class T>
void arthmatic<T>::changeA(T a){
    this->a = a;
}

template <class T>
void arthmatic<T>::changeB(T b){
    this->b = b;
}

int main(){
    arthmatic ar(10,5);
    cout << "addition "<< ar.add() << endl;
    ar.changeA(20);
    ar.changeB(10);
    cout << "subraction " << ar.sub() << endl;

    return 0;

}