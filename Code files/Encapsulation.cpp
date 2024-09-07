#include <iostream>
using namespace std;

class BankAccount
{
private:
    string owner;   // Private attribute, cannot be accessed directly outside the class
    double balance; // Private attribute, encapsulated data

public:
    // Constructor to initialize the bank account
    BankAccount(string owner, double balance)
    {
        this->owner = owner;     // Public method setting private data
        this->balance = balance; // Initial balance
    }

    // Public method to access the balance (getter)
    double getBalance()
    {
        return balance;
    }

    // Public method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << ". New balance: " << balance << endl;
        }
        else
        {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Public method to show account information
    void showAccountDetails()
    {
        cout << "Owner: " << owner << ", Balance: " << balance << endl;
    }
};

int main()
{
    // Create a bank account object
    BankAccount account("Priyobroto", 1000.00);

    // Accessing balance through a public method (encapsulation)
    account.showAccountDetails();

    // Depositing money
    account.deposit(500);

    // Withdrawing money
    account.withdraw(300);

    // Trying to directly access private balance (this will cause an error)
    // cout << account.balance; // Not allowed due to encapsulation

    return 0;
}
