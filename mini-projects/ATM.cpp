#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

// --------------------------------------------------------class --------------------------------

class atm
{
    private:                                             // Declaring variables
    long int account_no;
    string name;
    int pin;
    double balance;
    string mobile_No;

    public:                                              // setting data into private variables
    void setData(long int account_no_a, string name_a, int pin_a, double balance_a, string mobile_No_a)
    {
        long int account_no = account_no_a;
        string name= name_a;
        int pin = pin_a;
        double balance = balance_a;
        string mobile_No = mobile_No_a;
    }

                                                          // getdata functions ___________________
    long int getAccountNo(){
        return account_no;
    }

    string getName(){
        return name;
    }

    int getPin(){
        return pin;
    }

    double getBalance(){
        return balance;
    }

    string getMobileNo(){
        return mobile_No;
    }
                                                         // updating the mobile number________________-
    void setMobileNo(string mobile_prev, string mobile_new)
    {
        if(mobile_prev == mobile_No)
        {
            mobile_No = mobile_new;
            cout << endl << "Mobile no. successfully updated !";
            _getch();                                    // it holds the screen , untill user presses any key.
        }
        else 
        {
            cout << endl << "prev Mobile number invalid !";
            _getch(); 
        }

    }
                                                        // Cash withdraw function.
    void cashWithDraw(int amount_a)
    {
        if (amount_a <= balance && amount_a > 0)
        {
            balance -= amount_a;
            cout << endl << " please collect your cash";
            cout << endl << " Available Balance is : " << balance << endl;
            _getch();
        }
        else
        {
            cout << endl << "Invalid input or insufficient Balance !";
            _getch();
        }


    }

};