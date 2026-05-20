// Saeed (25-CS-005) Section-B
// 19, Feb, 2026

#include <iostream>
#include <cstdlib>
using namespace std;

class ACCOUNT
{
    public:

    string name;
    double balance;

    void init_balance()
    {balance = 0;}

    void set_balance( double amount )
    {balance = amount ;}
    
    void deposit( double amount )
    {
        balance += amount;
        cout << "\nYour amount Rs- " << amount << " is deposited.\n";
    }
    
    void withdraw( double withdrawal_amount )
    {
        if( balance >= withdrawal_amount )
        {
            balance -= withdrawal_amount;
            cout << "\n" << withdrawal_amount << " withdrawal.\n";
        }
        else
            {cout << "\nNot Enough balance for Withdrawal.\n";}
    }

    void current_balance()
        {cout << "\nBalance : " << balance << " Rs-\n";}
};


// int main()
// {
//     ACCOUNT account;
//     double withdraw_amount, deposit_amount, x;
//     char menu_entry;
    

//     cout << "Enter the name of your Account.\n";
//     cin >> account.name;

//     cout << "Your Amount in the Account.\n";
//     cin >> x;
//     account.set_balance(x);


// while(menu_entry != '4')
// {
//     cout << "\n\n**********************************\n";
//     cout << "\nWhich Account Operation to proceed with.\n";
//     cout << "1. Deposit\n";
//     cout << "2. Withdraw\n";
//     cout << "3. Show Current Balance\n";
//     cout << "4. Program Termination\n\n";

//     cin >> menu_entry;

//     switch(menu_entry)
//     {
//         case '1':
//         cout << "Amount you want to deposit = ";
//         cin >> deposit_amount;
//         account.deposit(deposit_amount);
//         break;
        
//         case '2':
//         cout << "Amount you want to Withdraw = ";
//         cin >> withdraw_amount;
//         account.withdraw(withdraw_amount);
//         break;

//         case '3':
//         cout << "Your Current Balance in the Account.";
//         account.current_balance();
//         break;

//         case '4':
//         cout << "!!! Program Terminated !!!";
//         return 0;

//         default:
//         cout << "Invalid Entry.";
//         break;
//     }
// }

// }



int main()
{
    ACCOUNT acc1, acc2;

    acc1.name = "Saeed";
    acc1.set_balance(10000);

    acc2.name = "Salman";
    acc2.set_balance(5000);

    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.current_balance();

    acc2.deposit(1500);
    acc2.withdraw(8000);
    acc2.current_balance();

    return 0;
}