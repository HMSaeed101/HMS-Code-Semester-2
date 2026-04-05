// Hafiz Muhammad Saeed (25-CS-005)
//! Quadratic Equation

/*
    Construct the class objects by using a nullary constructor.
    Then design a friend function which will determine the proot and nroot of the equation.
    Create another friend function which will display the values of proot and nroot
*/

#include <iostream>
using namespace std;

class EQUATION
{
    friend int calc_root(EQUATION &obj);
    friend void display_root(EQUATION &obj);

    private:
    int a, b, c;
    float pos_root, neg_root;

    public:
    EQUATION
    {
        a = 0;
        b = 0;
        c = 0;
        pos_root = 0.0;
        neg_root = 0.0;
    }

    void set_values(int a, int b, int c);
};

void EQUATION :: set_values(int a, int b, int c)
{
    a = a;
    b = b;
    c = c;
}

int calc_root(EQUATION &obj)
{

}

void display_root(EQUATION &obj)
{

}


int main()
{
    EQUATION equation();
    equation.set_values(1,2,-3);

    calc_root(equation);
    display(equation);

}
