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
