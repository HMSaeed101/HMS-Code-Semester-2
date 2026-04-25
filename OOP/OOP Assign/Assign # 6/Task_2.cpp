/*
The BankAccount class has the following attributes i.e.
• accountNumber, accountHolderName, and balance
• A parameterized constructor to initialize data fields with user-defined values
Create two derived classes i.e. CheckingAccount and SavingsAccount. Both these classes have
• A three argument constructor to initialize base class’s data fields
• Two functions i.e. deposit(amount) to deposit certain amount and witdraw(amount) to withdraw certain
amount
The withdraw function of CheckingAccount class has an overdraft limit but SavingsAccount cannot be over draft.
In the main() function, create an object of both SavingAccount and CheckingAccount class. Moreover, test the
functionality of their respective deposit(amount) and withdraw(amount) functions while passing different amounts
as parameter.
*/

#include <iostream>
using namespace std;


// Base Class
class BANK_ACCOUNT
{
    private:

    protected:
    int account_id;
    double balance;


    public:
    BANK_ACCOUNT(int id, double bal) : account_id(id), balance(bal) {}

    void balance_inquiry() const
    {
        cout << "Account ID : " << account_id << endl;
        cout << "Balance : Rs. " << balance << endl;
    }

};


class CURRENT_ACCOUNT : public BANK_ACCOUNT
{
    public:
    // child class constructor calls the base class constructor
    // arguments are passed to base class constructor
    CURRENT_ACCOUNT(int id, double bal) : BANK_ACCOUNT(id, bal) {}

    void amount_withdrawn(double amount)
    {
        if(balance - amount < 5000)
        {
            cout << "";
        }
        else
        {
            balance -= amount;
            cout << "";
        }
    }

    void amount_deposit(double amount)
    {
        balance += amount;
        cout << "";
    }



};


class SAVING_ACCOUNT : public BANK_ACCOUNT
{
    public:
    // child class constructor calls the base class constructor
    // arguments are passed to base class constructor
    SAVING_ACCOUNT(int id, double bal) : BANK_ACCOUNT(id, bal) {}

};


int main()
{
    CURRENT_ACCOUNT curr_acount ;
    curr_acount(101, 15000);

    curr_acount.balance_inquiry();
    curr_acount.amount_withdrawn();
    curr_acount
    curr_acount
}
