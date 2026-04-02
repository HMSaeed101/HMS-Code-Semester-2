#include <iostream>
#include <string>
using namespace std;

class EMPLOYEE
{   private:
    string name;
    double salary, bonus;

    public:
    setSalary(double s)
    {   
        if(s<0) { cout << "Enter a positive number!!!";}
        else { salary=s; }
    }
    
    setBonus(double b)
    {   
        if(b>20) { cout << "Bonus must not be greater than 20% !!!";}
        else {bonus=b;}
    }
    
    double getSalarywithBonus()
    {   double bonus_amount = salary * (bonus/100);
        return (salary + bonus_amount);}
};

int main()
{
    double s,b, total_salary;
    EMPLOYEE emp1;
    cout << "Enter the Salary.\n";
    cin >> s;
    emp1.setSalary(s);
    
    cout << "Enter the Bonus amount in percentage.\n";
    cin >> b;
    emp1.setBonus(b);

    total_salary = emp1.getSalarywithBonus();
    cout << "Total Salary : " << total_salary << " Rs-";
}