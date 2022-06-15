#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

// --------------------------------------------------------class --------------------------------

class atm
{
    private:                                             // Declaring variables
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

    public:                                              // setting data into private variables
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
    {
        account_No = account_No_a;
        name= name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_No = mobile_No_a;
    }

                                                          // getdata functions ___________________
    long int getAccountNo(){
        return account_No;
    }

    string getName(){
        return name;
    }

    int getPIN(){
        return PIN;
    }

    double getBalance(){
        return balance;
    }

    string getMobileNo(){
        return mobile_No;
    }
                                                         // updating the mobile number________________-
    void setMobile(string mobile_prev, string mobile_new)
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
            cout << endl << " Available Balance is : " << balance;
            _getch();
        }
        else
        {
            cout << endl << "Invalid input or insufficient Balance !";
            _getch();
        }

    }
};

    //-------------------------------------------------------------------------------------------------------

    int main()
    {
        int choice = 0, enterPIN;
        long int enterAccountNo;                                 // For user authentication
        system("cls");            
        atm user1;                                               // creating a user(object)

          //--------------------------------------  setting user detail into object

        user1.setData(9603302, "Shiva", 1514, 12780, "8919190495");

          do
            {
              system("cls");
 
              cout << endl << "*** --- Welcome to the ATM  --- ***" << endl;     // user Interface - 1 
                                                                                 // User Authentication.
              cout << endl << "Enter your seven digit account number :";
              cin >> enterAccountNo;                                      
              cout << endl << "Enter your PIN :";
              cin >> enterPIN;

                                                                  // verifying the credentials.
                if((enterAccountNo == user1.getAccountNo()) && (enterPIN == user1.getPIN()))
                {
                    do
                    {
                        int amount = 0;
                        string oldMobileNo, newMobileNo;

                        system("cls");
                                                                           //User Interface - 2

                        cout << endl << "------ Welcome to ATM -------";
                        cout << endl << "Select your OPtions ";
                        cout << endl << "1. Check Balance";
                        cout << endl << "2. Cash Withdraw";
                        cout << endl << "3. Show User Details";
                        cout << endl << "4. Update mobile no.";
                        cout << endl << "5. Exit" << endl;
                        cin >> choice;

                        switch(choice)
                        {
                            case 1: 
                            cout << endl << "Your Account balance is :" << user1.getBalance() << endl; break;
                            _getch();
                            break;

                            case 2: 
                            cout << endl << "Enter the amount :";
                            cin >> amount;
                            user1.cashWithDraw(amount);
                            break;

                            case 3: 
                            cout << endl << "--- *** User details  *** ---";
                            cout << endl << "Account Number : " << user1.getAccountNo();
                            cout << endl << "Account holder name : " << user1.getName();
                            cout << endl << "Account Balance : " <<user1.getBalance();
                            cout << endl << "Mobile number : "<< user1.getMobileNo();
                            _getch();
                            break;

                            case 4: 
                            cout << endl << "Enter the previous Mobile no. ";
                            cin >> oldMobileNo;
                            cout << endl << "Enter New mobile number. ";
                            cin >> newMobileNo;

                            user1.setMobile(oldMobileNo, newMobileNo);
                            break;

                            case 5: 
                            cout << endl << "Ending the Transaction";
                            exit(0);

                            default :
                            cout << endl << "Enter Valid input !!";

                        }             

                    } while(1);                                                 // condition is always true and runns infinite times
                }

                else
                {
                    cout << endl << "User Details are invalid !!";
                    _getch();

                }
            } while(1);
        return 0;
        
    }