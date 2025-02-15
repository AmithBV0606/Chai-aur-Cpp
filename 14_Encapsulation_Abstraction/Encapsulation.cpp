#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initBal)
    {
        accountNumber = accNum;
        balance = initBal;
    }

    // Getters
    double getBalance() const
    {
        return balance;
    }

    // Method to deposit the money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited amount : " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!!" << endl;
        }
    }
    
    // Method to withdraw the money
    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdraw amount : " << amount << endl;
            }
            else
            {
                cout << "Insufficient balance!!" << endl;
            }
        }
        else
        {
            cout << "Invalid withdraw amount!!" << endl;
        }
    }
};

int main()
{
    BankAccount myAcc("12345", 500.0);

    // Check balance
    double myBalance = myAcc.getBalance();
    cout << "Your balance is " << myBalance << endl;

    // Deposit money
    myAcc.deposit(200);
    cout << "Your balance is " << myAcc.getBalance() << endl;

    // Withdraw the money
    myAcc.withdraw(300);
    cout << "Your balance is " << myAcc.getBalance() << endl;

    return 0;
}