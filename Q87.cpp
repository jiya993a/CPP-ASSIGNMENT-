//
#include <iostream>
class Account {
    private:
        string accountNumber;
        double balance;
    
    public:
        void setAccount(string acc, double bal) {
            accountNumber = acc;
            balance = bal;
        }
    
        string getAccountNumber() {
            return accountNumber;
        }
    
        double getBalance() {
            return balance;
        }
    
        void deposit(double amount) {
            balance += amount;
        }
    
        void withdraw(double amount) {
            if (amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient funds\n";
        }
    };
    