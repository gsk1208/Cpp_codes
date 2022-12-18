#include<iostream>
using namespace std;

class Matrix
{
    private :
    int *A;
    int n;  // for nxn matrix

    public :
    Matrix(){
        this->n = 2;
        A=new int[2];
    }

    Matrix(int n){
        this->n = n;
        A = new int[n];
    }

    void set(int i, int j, int x){
        if (i == j)
            A[i-1] = x;
    }

    int get(int i, int j){
        if(i==j)
            return A[i-1];
        else    
            return 0;
    }

    void Display()
    {
        for(int i=0;i < n; i++) 
        {
            for(int j=0;j < n; j++)
            {
                if(i==j) cout << A[i] <<  " ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }

    ~Matrix(){ delete [] A; }
};





int main()
{
    Matrix d(4);
    
    d.set(1,1,3); 
    d.set(2,2,7); 
    d.set(3,3,5); 
    d.set(4,4,9); 

    d.Display();

    cout << endl << endl<< d.get(3,3);
    



    return 0;

}