#include <iostream>
#include <string>
using namespace std;

// Base Class
class BANKACCOUNT
{
    protected:
    int accountnum;
    double balance;
    bool iswithdraw = false;

    public:
    BANKACCOUNT(int acc, double bal) : accountnum(acc), balance(bal) {}

    void deposit(int amount) {balance += amount;}

    void withdraw(int amount)
    {
        if(amount<balance)
        {
            balance -= amount;
            iswithdraw = true;
            cout << "Withdraw Successfull\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }

    void displaybalance() {cout << "Balance : " << balance << endl;}
};


class FIXEDDEPOSITACCOUNT : public BANKACCOUNT
{
    double intrate = 0;
    int maturityperiod; // In Months int
    double penaltyamount;

    public:
    FIXEDDEPOSITACCOUNT(int acc, double bal, double r, int per, int pam) : BANKACCOUNT(acc, bal), intrate(r), maturityperiod(per), penaltyamount(pam) {}

    void calculateMaturityAmount()
    {
        if(iswithdraw)
        {
            balance = balance - penaltyamount;
            cout << "Early withdraw detected! Penalty of " << penaltyamount << " Rs. applied.";
        }
        else
        {
            intrate = (balance * intrate / 100.0);
            balance += intrate;
            cout << "Maturity reached! Interest of " << intrate << " added." << endl;
        }
    }
};


int main()
{
    cout << "Testing Fixed Deposit (On Time):" << endl;
    FIXEDDEPOSITACCOUNT fd1(2005, 100000.0, 10.0, 12, 500.0); // 10% interest
    fd1.displaybalance();
    fd1.calculateMaturityAmount();

    cout << "\nTesting Fixed Deposit (Early Withdrawal):" << endl;
    FIXEDDEPOSITACCOUNT fd2(3009, 100000.0, 10.0, 12, 500.0);
    fd2.withdraw(5000); // Triggers the penalty flag
    fd2.calculateMaturityAmount();

}
