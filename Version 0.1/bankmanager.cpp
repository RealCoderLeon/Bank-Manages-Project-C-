//bank account manager C++
//version 0.1 (Pre-Alpha)

#include <iostream>
#include "account.h"
using namespace std;

int main(){

    int want_to_sign_up_or_in; /* variable made to decide whether user wants to sign in or sign ip*/
    Account local_account; /*Object named "local_account by the class type "Account"*/

        cout << "Sign up(1)/Sign in(2): "; /*displays a message*/
        cin >> want_to_sign_up_or_in;   /*takes the input*/
        cin.ignore(1, '\n');

        if (want_to_sign_up_or_in == 1){
            //(SIGN IN) Still in work
            std::cout << "\nEnter your name: ";
            string theName; // creates a variable "theName"
            getline(cin, theName); // gets the input and stores in the the name
            local_account.setName(theName); /*passes the arguement theName
            int the fuction setName for the account object. The setName function then transfers the "theName" to the member function setName paremeter
            in account.h to set the name for the account*/

            cout << "\nNow type your password(string only): "; // asks for pw
            string account_password; // makes a variable called "account_password"
            getline(cin, account_password); /*gets the input and stores it in the password variable*/ 

            local_account.setPassword(account_password); /*Similar to line 21, the setpassword function takes the arguement "account_password" which then
            is transfered to the setPassword member function to set the password for the acc*/

            cout << "\nusername: " << local_account.getName(); /*displays the username by fetching the username value from the getName function in account.h*/
            cout << "\nPassword: " << local_account.get_Password(); /*displays the password by fetching the password value from calling the member function "get_Password" to get the password in return*/
            
            local_account.set_Login_State(1); /*sends the value 1 to the login state member function which then takes the arguement and sets the "logged in" data member's value to 1(which means user is logged in)in the header file account.h and login state(0) means that your are not logged in*/
            
            cout << "\n\nWithdraw(1): "; // displays multiple option
            cout << "\nDeposit(2): ";
            cout << "\n\nChoose a option: ";
            /*(STILL IN WORK)*/
        }
        
        else if (want_to_sign_up_or_in == 2){
            //(SIGN IN)in development 
            //coming soon
        }
    }
     

