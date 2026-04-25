/*
Consider a class BankAccount that has
• Two attributes i.e. accountID and balance and
• A function named balanceInquiry() to get information about the current amount in the account

Derive two classes from the BankAccount class i.e. CurrentAccount and the SavingsAccount.
Both classes (CurrentAccount and SavingsAccount) inherit all attributes/behaviors from the BankAccount class.

In addition, followings are required to be the part of both classes
• Appropriate constructors to initialize data fields of base class
• A function named amountWithdrawn(amount) to withdraw certain amount while taken into account the following conditions
o While withdrawing from current account, the minimum balance should not decrease Rs. 5000
o While withdrawing from savings account, the minimum balance should not decrease Rs. 10,000
• amountDeposit(amount) to deposit amount in the account
In the main() function, create instances of derived classes (i.e. CurrentAccount and SavingsAccount) and invoke
their respective functions to test their working
*/

#include <iostream>
using namespace std;

class BANKACCOUNT
{
    protected:
    int accountid;
    int balance;

    public:
    BANKACCOUNT(int id, int bal) : accountid(id), balance(bal) {}

    void balanceinquiry();

};


class CURRENTACCOUNT : public BANKACCOUNT
{

    public:
    CURRENTACCOUNT(int id, int bal) : BANKACCOUNT(id, bal)
    {

    }
};


class SAVINGSACCOUNT : public BANKACCOUNT
{

    public:
    SAVINGSACCOUNT(int id, int bal) : BANKACCOUNT(id, bal)
    {

    }
};
