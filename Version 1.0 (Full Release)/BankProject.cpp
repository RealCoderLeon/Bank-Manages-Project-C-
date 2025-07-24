// Bank project (Unofficial) C++ version 1.0.0 (Full Release)

#include <iostream>
#include <fstream>
#include <string>
#include "AccountLibrary.h"
using namespace std;


Account account;
string username, password;
int account_Withdraw_Amount;
int account_Deposit_Amount;

void log(string entered_Sentence){
    cout << entered_Sentence;
}


bool LoggingIn()
{
    string username1, password1, user, pass;

    log("\nEnter username: ");
    cin >> username;

    log("\nEnter password: ");
    cin >> password;

    ifstream read(username + ".txt");
    getline(read, user);
    getline(read, pass);

    if (user == username && pass == password){
        return true;
    }
    else{
        return false;
    }
}

int main()
{

    int choice;

    log("Select a choice!\n1: Register\n2: Login\nYour choice: ");
    cin >> choice;
    cin.ignore(1, '\n');

    if (choice == 1){
        
        log("\nSelect an username: ");
        getline(cin, username);

        log("\nSelect a password: ");
        cin >> password;


        ofstream file;
        file.open(username + ".txt");
        file << username << endl << password;
        file.close();


        main();
    }
    else if (choice == 2){
        bool status = LoggingIn();
        if (!status){
            log("\nIncorrect information, try again!");
            system("PAUSE");
            return 0;
        }
        else
        {
            log("\nLogin Successfull!");
            do {
            log("\n\n--Dashboard--");
            
            int Dashboard_Options;

            log("\n\nWithdraw(1): ");
            log("\nDeposit(2): ");
            log("\nShow Data(3): ");
            log("\nLog out -->(4): ");
            
            log("\n\nChoose an option: ");
            cin >> Dashboard_Options;
            
            if (Dashboard_Options == 1){
                cout << "\nEnter an valid withdraw amount: ";
                cin >> account_Withdraw_Amount;
                account.Withdraw(account_Withdraw_Amount); /*calls the withdraw member function with the argument "account_withdraw_account"*/
            }
                
            else if(Dashboard_Options == 2){
                cout << "\nEnter a valid deposit value: ";
                cin >> account_Deposit_Amount;
                account.Deposit(account_Deposit_Amount); /*calls the deposit function with the argument "account_deposit_amount"*/
                
            }

            else if(Dashboard_Options == 3){
                cout << username << endl;
                cout << password << endl;
                account.account_Data(); // shows info about the account
            }

            else if (Dashboard_Options == 4){
                main();
            }
        }
        while (true);
        }
    }
}
