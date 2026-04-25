// Hafiz Muhammad Saeed
// 25-CS-005
#include <iostream>
using namespace std;

class BANKACCOUNT
{
    protected:
    int accountid;
    int balance;

    public:
    BANKACCOUNT(int id, int bal) : accountid(id), balance(bal) {}

    void balanceinquiry()
    {cout << "Balance : " << balance << endl;}

    void deposit(int amount)
    {
        balance = balance + amount;
        cout << "New balance after depositing " << amount << " Rs- is : " << balance << endl;
    }

};


class CURRENTACCOUNT : public BANKACCOUNT
{

    public:
    CURRENTACCOUNT(int id, int bal) : BANKACCOUNT(id, bal){}

    void withdraw(int amount)
    {
        if( balance - amount < 5000 ) {cout << "Can't withdraw!!!";}
        else {balance = balance - amount;}
    }
};


class SAVINGSACCOUNT : public BANKACCOUNT
{

    public:
    SAVINGSACCOUNT(int id, int bal) : BANKACCOUNT(id, bal) {}

    void withdraw(int amount)
    {
        if( balance - amount < 10000 ) {cout << "Can't withdraw!!!";}
        else {balance = balance - amount;}
    }
};


int main()
{
    CURRENTACCOUNT acc1(101, 30000);
    SAVINGSACCOUNT acc2(202, 50000);

    acc1.balanceinquiry();
    acc2.balanceinquiry();

    acc1.deposit(20000);
    acc2.deposit(30000);

    acc1.withdraw(10000);
    acc2.withdraw(10000);

    acc1.balanceinquiry();
    acc2.balanceinquiry();
}
