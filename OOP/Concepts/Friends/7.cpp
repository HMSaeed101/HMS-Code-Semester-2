// Complex Numbers Operations

#include <iostream>
using namespace std;

class COMPLEX
{
    private:
    int digit1;
    int digit2;

    public:
    COMPLEX(){};
    COMPLEX(int x, int y) : digit1(x), digit2(y) {}

    void display()
    {cout << digit1 << " + " << digit2 << " i " << endl;}

    friend COMPLEX sum_complex( COMPLEX obj1, COMPLEX obj2 );
};

COMPLEX sum_complex( COMPLEX obj1, COMPLEX obj2 )
{
    COMPLEX sum;
    sum.digit1 = obj1.digit1 + obj2.digit1;
    sum.digit2 = obj1.digit2 + obj2.digit2;
    return sum;
}

int main()
{
    int r1, i1, i2, r2;
    cout << "Enter First Complex Number : " << endl;
    cout << "Real Part = ";
    cin >> r1;
    cout << "Imaginary Part = ";
    cin >> i1;

    cout << "Enter Second Complex Number : " << endl;
    cout << "Real Part = ";
    cin >> r2;
    cout << "Imaginary Part = ";
    cin >> i2;

    COMPLEX num1(r1, i1);
    COMPLEX num2(r2, i2);
    COMPLEX sum;

    num1.display();
    num2.display();

    sum = sum_complex(num1, num2);
    sum.display();



    // COMPLEX result = (choice == 1) ? sum_complex(num1, num2) : subtract_complex(num1, num2);


}


