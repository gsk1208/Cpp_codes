#include<iostream>
using namespace std;

class UpperTri
{
    private :
    int *A;
    int n;  // for nxn UpperTri


    public :
    UpperTri(){
        this->n = 2;
        A=new int[2*(2+1)/2];
    }

    UpperTri(int n){
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void set(int i, int j, int x){
        if (i <= j)
            A[((j*(j-1)/2)+i-1)] = x;       // column major method       easy Formula
    }                                       // row major formula = ( (i-1)*n - (i-2)*(i-1)/2 + j-1 )

    int get(int i, int j){
        if(i<=j)
            return A[((j*(j-1)/2)+i-1)];
        else    
            return 0;
    }

    void Display()
    {
        for(int i=1;i <= n; i++) 
        {
            for(int j=1;j <= n; j++)
            {
                if(i<=j) cout << A[((j*(j-1)/2)+i-1)] <<  " ";
                else cout << "0 ";
            }
            cout << endl;
        }
    }

    ~UpperTri(){ delete [] A; }
};





int main()
{
    int d;
    cout <<"Enter dimensions :"<< endl;
    cin>>d;

    UpperTri lm(d);

    int x;
    cout << "Enter all elements :"<< endl;

    for(int i=1; i<=d; i++)
    {
        for(int j=1; j<=d; j++)
        {
            cin >> x;
            lm.set(i,j,x);
        }
    }
    

    lm.Display();  

    cout << endl << endl<< lm.get(3,3);
    
    return 0;

}                                      