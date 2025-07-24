//bank account manager C++
//version 0.0.5 (Pre-alpha)

#include <iostream>
#include "account.h"
using namespace std;

int main(){

    int want_to_sign_up_or_in;
    string account_Name;
    int account_Password;
    int option; // variable for choices like , "Withdraw(1)", or , "Deposit(2)"
    int account_withdraw_amount;
    int account_deposit_amount;

        cout << "\nSign up(1)/Sign in(2): "; 
        cin >> want_to_sign_up_or_in;
        cin.ignore(1, '\n');  // command for clearing input buffer

        if (want_to_sign_up_or_in == 1){ // if the user chooses to sign UP
            //(SIGN UP) Still in work
            std::cout << "\nEnter your name: ";
            getline(cin, account_Name);
            
            cout << "\nNow type your password(integer only): ";
            cin >> account_Password; 
            
            Account account{account_Name, account_Password}; /*makes ACCOUNT class object with two parameters*/
           
            cout << "\nSuccessfully logged in!";

            cout << "\n\nusername: " << account.getName();
            cout << "\nPassword: " << account.get_Password();
            
            account.set_Login_State(1); //changes the login state to 1(true).
           
            do { // loop for repeating
            cout << "\n\nWithdraw(1): "; // displays multiple option
            cout << "\nDeposit(2): ";
            cout << "\nShow Data(3)";

            cout << "\n\nSelect an option: ";
            cin >> option;

            if (option == 1){
                cout << "\nEnter an valid withdraw amount: ";
                cin >> account_withdraw_amount;
                account.Withdraw(account_withdraw_amount); /*calls the withdraw member function with the argument "account_withdraw_account"*/
            }
                
            else if(option == 2){
                cout << "\nEnter a valid deposit value: ";
                cin >> account_deposit_amount;
                account.Deposit(account_deposit_amount); /*calls the deposit function with the argument "account_deposit_amount"*/
                
            }

            else if(option == 3){
                account.account_Data(); // shows info about the account
            }

            
            }
            while(true); // infinite loop
            /*(STILL IN WORK)*/
        }
        
        else if (want_to_sign_up_or_in == 2){ // user wants to sigm IN
            //(SIGN IN)in development 
            //coming soon
        }
    }
     
