//account header for bank account manager C++
//contains all the classes and function for bankaccount.cpp
//still in development

#include <iostream>
using namespace std;

class Account {
    
    private:
        string name; /*the name value for an  CLASS ACCOUNT object*/
        string password; /*the password value for an CLASS ACCOUNT object*/
        bool logged_In; /*the login state for the CLASS ACCOUNT object*/
    public:
        void setName(string entered_Name){ 
            name = entered_Name;            
        }
        /*member function to set the name value  to the given arg for the account*/

        void setPassword(string entered_Password){ 
            password = entered_Password;
        }
        /*sets the password  value to given argument for the  account object*/

        string getName(){
            return name;
        }
        /*returns the name value on when called*/

        string get_Password(){ 
            return password;
        }
        /*returns the password value when called*/

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

