//! Binary Operator Overloading

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading the binary '+' operator
    // It takes one explicit argument because the calling object acts as the implicit first argument
    Complex operator+(const Complex& obj) const
    {
        Complex res;
        // 'real' implicitly belongs to c1, the one calling the operator
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }

    void display() const {cout << real << " + " << imag << "i" << endl;}
};

int main()
{
    Complex c1(3.5, 2.5);
    c1.display();

    Complex c2(1.2, 4.3);
    c2.display();

    Complex c3 = c1 + c2;
    /*
        Complex c3 = c1.operator+(c2);          c1 called the operator to run on the c2
        Complex c3 = Operator+ (num1, num2)     When using the Friends Function
    */

    cout << "Sum: ";
    c3.display();

    return 0;
}
