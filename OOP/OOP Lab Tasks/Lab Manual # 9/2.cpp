/*
Hafiz Muhammad Saeed 25-CS-05
*/

#include <iostream>
#include <string>
using namespace std;

class BANKACCOUNT
{
    protected:
    int accountnumber;
    int balance;

    public:
    BANKACCOUNT(int acc, int bal)
    {
        accountnumber = acc;
        balance = bal;
    }

    void deposit(int amount) {balance += amount;}

    bool iswithdraw = false;

    void withdraw(int amount)
    {
        if(amount<balance)
        {
            balance -= amount;
            iswithdraw = true;
        }
    }

    void displaybalance()
    {
        cout << "Balance : " << balance << endl;
    }
};

class FIXEDDEPOSITACCOUNT : public BANKACCOUNT
{
    int interestrate;
    int maturityperiod;
    int penalityearlywithdraw;

    public:
    FIXEDDEPOSITACCOUNT(int acc, int bal, int r, int p, int pen) : BANKACCOUNT(acc, bal)
    {
        interestrate = r;
        maturityperiod = p;
        penalityearlywithdraw = pen;
    }

    void calculateMaturityAmount()
    {
        if(iswithdraw)
        {
            balance = interestrate * balance;
        }
    }
};


int main()
{
    BANKACCOUNT acc1(1012, 50000);
    acc1.withdraw(1000);
    acc1.deposit(2000);
    acc1.displaybalance();

}
