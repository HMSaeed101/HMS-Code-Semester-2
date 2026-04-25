/*
Consider a base class named Employee and its derived classes HourlyEmployee and PermanentEmployee while
taking into account the following criteria.

• Employee class has two data fields i.e. a name (of type string) and specific empID (of type integer)
• Both classes (HourlyEmployee and PermanentEmployee) have an attribute named hourlyIncome
• Both classes (HourlyEmployee and PermanentEmployee) have three-argument constructor to initialize the hourlyIncome as well as data fields of the base class
• Class HourlyEmployee has a function named calculate_the_hourly_income to calculate the income of an employee for the actual number of hours he or she worked
• PermanentEmployee class has function named calculate_the_income to calculate the income of an employee that gets paid the salary for exact 240 hours, no matter how many actual hours he or she worked.

Again, one hour salary is Rs. 150.

Implement all class definitions with their respective constructors to initialize all data members and functions to compute the total income of an employee. In the main() function, create an instance of both classes (i.e. HourlyEmployee and PermanentEmployee) and test the working of functions that calculate total income of an employee.

*/

#include <iostream>
#include <string>
using namespace std;


class EMPLOYEE
{
    protected:
    string name;
    int empid;

    public:
    EMPLOYEE(string n, int id)
    {
        name = n;
        empid = id;
    }
};

class HOURLY_EMPLOYEE : public EMPLOYEE
{
    int hourly_income;

    public:
    HOURLY_EMPLOYEE(string n, int id, int rate) : EMPLOYEE(n, id), hourly_income(rate){}

    void calc_hourly_income(int hours_worked)
    {
        cout << "Hourly Employee Salary : " << hours_worked * hourly_income << endl;
    }
};

class PERMANENT_EMPLOYEE : public EMPLOYEE
{
    int hourly_income;

    public:
    PERMANENT_EMPLOYEE(string n, int id, int rate) : EMPLOYEE(n, id), hourly_income(rate) {}

    void calc_income(int hours_worked)
    {
        cout << "Permanent Employee Salary : " << 240 * hourly_income << endl;
    }
};


int main()
{
    HOURLY_EMPLOYEE emp1("Saeed", 101, 150);
    emp1.calc_hourly_income(10);

    PERMANENT_EMPLOYEE emp2("Saad", 202, 150);
    emp2.calc_income(10);
}
