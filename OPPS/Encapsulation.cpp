#include <iostream>
using namespace std;

class BankAccount {
private:
    // Encapsulated data
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = (initialBalance >= 0) ? initialBalance : 0;

        cout << "\nAccount holder name : " << accountHolder << endl;
    }

    // Getter (read-only access)
    double getBalance() {
        return balance;
    }

    // Setter (controlled write access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient funds or invalid amount!" << endl;
        }
    }
};

int main() {
    BankAccount account("John", 1000);
    
    cout << "Initial Balance: " << account.getBalance() << endl;
    account.deposit(500);
    account.withdraw(300);
    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}


// Theory Part --->

/* 
📌 Encapsulation --->

Definition:
    Encapsulation is the process of wrapping data (variables) and methods (functions) into a single unit (class) and restricting direct access to the data.
    It is achieved by making fields private and providing getter and setter methods to access or modify them.

✅ Importance / Benefits of Encapsulation

1. Data Hiding:
    Protects the internal state of the object from unauthorized access.
    Prevents accidental modification of important data.

2. Controlled Access:
    You can control what values are set using validation inside setters.

3. Improved Security:
    Sensitive information stays safe from direct access.

4. Maintainability:
    Internal implementation can be changed without affecting external code.

5. Flexibility:
    You can make certain fields read-only or write-only.

6. Reusability:
    Well-encapsulated code is modular and easier to reuse.

*/