// Hafiz Muhammad Saeed
// 25-CS-005
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
