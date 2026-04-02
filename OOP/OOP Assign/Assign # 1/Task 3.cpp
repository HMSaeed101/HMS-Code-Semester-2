/*
Write a program that creates a class called number. Your class will have two data members namely num (float) and result (int). To find the factorial of the entered number you will need to design three functions as follows:
• Function to determine if a number is a whole number or not
• Function to determine if the number is positive or not
• Function to find the actual factorial
• Function to display the number and its factorial
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


    int fact_num(float num)
    {
        int result = 1;

        if( !whole_num(num) || !positive(num) )
        {return -1;}

        int n = (int)num;
        for(int i = 2; i <= n; i++)
        {result = result * i;}
        return result;
    }

    void display()
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

};

int main()
{
    NUMBER num1;
    float _ ;
    cout << "Enter a Number : ";
    cin >> _ ;
    num1.set_num( _ );
    num1.display();
}
