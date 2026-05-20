// Hafiz Muhammad Saeed
// 25-CS-005

#include <iostream>
using namespace std;

class COMPLEX
{
    public:
    int real;
    int imag;

    COMPLEX(int r, int i) : real(r), imag(i) {}
    COMPLEX(){  real = 0;  imag = 0;}

    friend COMPLEX operator+(const COMPLEX &obj1,const COMPLEX& obj2);
    void display()
    {
        cout << "Number : ( " << real << " , " << imag << " )" << endl;
    }

};


COMPLEX operator+(const COMPLEX &obj1, const COMPLEX& obj2)
{
    COMPLEX sum;
    sum.real = obj1.real + obj2.real;
    sum.imag = obj1.imag + obj2.imag;
    return sum;
}


int main()
{
    COMPLEX num1(2, 4);
    num1.display();

    COMPLEX num2(3, 6);
    num2.display();

    COMPLEX num3 = num1 + num2;
    // operator+ (num1, num2)       When using the Friends Function
    // num1.operator+(num2)         When using member Function
    num3.display();
}
