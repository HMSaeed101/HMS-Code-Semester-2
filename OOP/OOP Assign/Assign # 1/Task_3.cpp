/*
Hafiz Muhammad Saeed
25-CS-005
*/

#include <iostream>
#include <cmath>
using namespace std;

class NUMBER
{
    private:
    float num;
    int result;

    public:
    float set_num(float _)
    { num = _ ; }

    bool whole_num(float num)
    {return floor(num) == num ;}

    bool positive(float _)
    {
        if( _ < 0 ) return false;
        else return true;
    }

    int fact_num(float num);
    void display();
};


int NUMBER :: fact_num(float num)
{
    int result = 1;
    if( !whole_num(num) || !positive(num) )
    {return -1;}
    int n = (int)num;
    for(int i = 2; i <= n; i++)
    {result = result * i;}
    return result;
}

void NUMBER :: display()
{
    int fact_result = fact_num(num);
    if (fact_result == -1)
    {
        if(!whole_num(num))
        cout << "Not a whole number!" << endl;
        else
        cout << "Negative number! Factorial not possible." << endl;
    }
    else
    cout << "Number : " << num << endl;
    cout << "Factorial : " << fact_result << endl;
}

int main()
{
    NUMBER num1;
    float _ ;
    cout << "Enter a Number : ";
    cin >> _ ;
    num1.set_num( _ );
    num1.display();
}
