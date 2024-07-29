/*
Define the BankAccount class with private members accountHolderNAme and balance.
Provides a constructor to initialize these members.
Provides a constructor ot initialize these members.
Declares member functions for depositing, withdrawing, and displaying account information.

main.cpp:
Implements the constructor and member functions of the BankAccount class.

In the main function, creates an instance of BankAccount, performs deposit and withdrawal operations, and displays the account information before and after the transactions.

This project serves as a basic example to get started with OOPs in c++.
You can extend this project by adding more features such as account number, transcation history, and error handling.
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;


public:
        BankAccount(string name, double initialBalance) : accountHolderName(name), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount("Armaan", 1000);

    myAccount.displayAccountInfo();

    myAccount.deposit(500);
    cout << "After deposit:" << endl;
    myAccount.displayAccountInfo();

    myAccount.withdraw(200);
    cout << "After withdrawal:" << endl;
    myAccount.displayAccountInfo();

    return 0;
}