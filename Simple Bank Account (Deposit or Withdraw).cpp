// Simple Bank Account (Deposit or Withdraw).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;



public:

    BankAccount()
    {
        balance = 0;
    }
    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }
    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficent Balance!" << endl;
        }
    }

    void display_balance()
    {
        cout << "Current Balance: " << balance << endl;
    }

};

int main()
{
    BankAccount account_1;

    account_1.deposit(500);
    account_1.display_balance();

    account_1.withdraw(200);
    account_1.display_balance();

    account_1.withdraw(100);
    account_1.display_balance();






    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
