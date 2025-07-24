// Bank project (Unofficial) C++ version 1.0.0 (Beta)

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void log(string entered_Sentence){
    cout << entered_Sentence;
}


bool LoggingIn()
{
    string username, password, user, pass;

    log("\nEnter username: ");
    cin >> username;

    log("\nEnter password");
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

    log("Select a choice!\n1: Register\n2: Login\n Your choice: ");
    cin >> choice;
    cin.ignore(1, '\n');

    if (choice == 1){
        string username, password;
        
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
            log("\nLogin successfull!");
            system("PAUSE");
            return 1;    
        }
    }
}
