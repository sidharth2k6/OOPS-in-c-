/*
    Constructor: Spacial method invoked automatically at
    time of object creation, Used for intialization.
    
    > same name as class
    > constructor does't have a return type
    > Only called once (automatically), at object creation
    > Memory allocation happens when constructor is called
*/
#include<iostream>
#include<string>
using namespace std;

class Account{
private:    // This is called data hiding
    double balance;
    string password;

public:
    string accountId;
    string username;

    //non parameaterized constructor
    Account(){
        username = "user";
        accountId = "12345";
        cout << "This is user defined constructor" << endl;
    }
    //paremeterized constructor
    Account(string name, string accountId, string password, double balance){
        this->username = name;
        this->accountId = accountId;
        this->password = password;
        this->balance = balance;
    }
    //copy constructor
    Account(Account &orgAc){
        cout << "This is user defined copy constructor" << endl;
        this->username = orgAc.username;
        this->accountId = orgAc.accountId;
        this->balance = orgAc.balance;
        this->password = orgAc.password;
    }
    void getinfo(){
        cout << username << endl;
        cout << accountId << endl;
        // cout << password << endl;
        // cout << balance << endl;
    }

};

int main(){
    Account a1;
    Account a2("sidharth", "67890", "sid", 1500);
    a1.getinfo();
    a2.getinfo();
    //default copy constructor later we made
    Account a3(a2);     //it copy all the detail from a2 
    a3.getinfo();
    return 0;
}