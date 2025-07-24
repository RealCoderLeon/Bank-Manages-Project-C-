//account header for bank account manager C++
//contains all the classes and function for bankaccount.cpp
//still in development

#include <iostream>
using namespace std;

class Account {

    private:
        string name; 
        int password; 
        bool logged_In; /*the login state for the CLASS ACCOUNT object*/
        int balance{50};
        int withdraw_Amount = 0;
        public:

        Account(string entered_Name, int entered_Password) // Constructer for an CLASS ACCOUNT object
            : name{entered_Name}, password{entered_Password}  {
                
            }
            
        int Withdraw(int entered_withdraw_amount){ // Withdraws money from account's balance
            withdraw_Amount = entered_withdraw_amount;
            if (balance > entered_withdraw_amount){
                balance -= entered_withdraw_amount;
                cout << "\nYou withdrawed " << entered_withdraw_amount << "$. Current balance: " << balance << "$.";
            }
                else{
                    return balance = 50;
                }
            }

        int Deposit(int entered_deposit_amount){ // deposits money in account's balance
            if (entered_deposit_amount <= withdraw_Amount){
                balance += entered_deposit_amount;
                withdraw_Amount -= entered_deposit_amount; 
                cout << "Deposited " << entered_deposit_amount << "& into your balance. Current balance: " << balance << "$. Cash left " << withdraw_Amount << "$.";
             }
            else{
                cout << "Error invalid deposit amount";
                return 0;
            }
        }

        void account_Data(){
            cout << "\nUsername: " << name << endl;
            cout << "Password: " << password << endl;
            cout << "Balance: " << balance << endl;
            cout << "Cash: " << withdraw_Amount << endl; 
        }

        string getName () const {
            return name;
        }
        /*returns the name value on when called*/

        int get_Password () const { 
            return password;
        }
        /*returns the password value when called*/
        
        int get_Balance() const {
            return balance;
        }
        //returns the value of current balance

        void set_Login_State(bool login_state){
                logged_In = login_state;
        }
        /*sets the login_in state to the given argument, logged in(1), logged out(0)*/

        bool get_Login_State() const {
                return logged_In;
        }
        /*returns the login state, 1/0, when called*/

        
        //STILL IN WORK
};
