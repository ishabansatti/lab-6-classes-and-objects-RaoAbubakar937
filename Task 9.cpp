#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    int pin;

public:
    BankAccount(string accNo, double bal, int p) {
        accountNumber = accNo;
        balance = bal;
        pin = p;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    void withdraw(double amount, int enteredPin) {
        if (enteredPin != pin) {
            cout << "Incorrect PIN!\n";
            return;
        }

        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};