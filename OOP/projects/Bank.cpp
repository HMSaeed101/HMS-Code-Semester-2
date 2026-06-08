//! Bank Account

#include <iostream>
using namespace std;

class BANK_ACCOUNT
{
    private:
    string owner;
    double balance;

    public:

    // Constructor
    BANK_ACCOUNT(string name, double amount)
    {   owner = name;
        balance = amount;
        cout << "Account opened for " << owner << endl;
    }

    // Copy Constructor
    BANK_ACCOUNT(const BANK_ACCOUNT& obj)
    {   owner = obj.owner;
        balance = obj.balance;
        cout << "Account duplicated for " << owner << endl;
    }

    // Destructor
    ~BANK_ACCOUNT()
    {   cout << "Destructor calling ... " << endl;
        cout << "Account closed for " << owner << endl ;
    }

    void deposit(double amount) {balance += amount;}

    void display()
    {   cout << "Account Balance : " << balance << endl;
        cout << "Account Owner : " << owner << endl;
    }
};

int main()
{
    string name;
    double deposit, amount;

    cout << "Enter name of bank account owner" << endl;
    cin >> name;
    cout << "Current Balance : ";
    cin >> amount;
    cout << "Amount you want to deposit.";
    cin >> deposit;

    BANK_ACCOUNT main(name, amount);
    main.deposit(deposit);
    main.display();

    cout << "------" << endl << endl;
    BANK_ACCOUNT saving = main;
    saving.display();
}
