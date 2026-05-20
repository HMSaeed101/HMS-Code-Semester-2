#include <iostream>
using namespace std;

class BankAccount
{
    private:
    string accountHolderName;
    int balance;

    public:
    void init_data();
    void deposit();
    void withdraw();
    void displayBalance();
};

void BankAccount::init_data()
{
    cout << "Enter your account name\n";
    cin >> accountHolderName;
    cout << "Enter Your Balance.\n";
    cin >> balance;
}

void BankAccount :: deposit()
{
    int deposit_amount;   
    cout << "Enter the amount you want to deposit.\n";
    balance = balance + deposit_amount;
} 

void BankAccount :: withdraw()
{
    int withdraw_amount;
    cout << "Enter amount you want to withdraw.\n";
    cin >> withdraw_amount;

    if(withdraw_amount<balance)
    {
        cout << "Not Sufficient Balance to withdraw.\n";
    }
    else
    {
        balance = balance - withdraw_amount;
        cout << withdraw_amount << " amount is withdrawn.\n";
    }
}

void BankAccount :: displayBalance()
{
    cout << "**************************\n";
    cout << "Account Holder Name : " << accountHolderName << endl;
    cout << "Balance : " << balance << endl;
}


int main ()
{
    BankAccount acc1;
    acc1.init_data();
    acc1.displayBalance();
}