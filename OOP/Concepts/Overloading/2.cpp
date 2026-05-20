//! Unary Operator Overloading

#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    // Overloading unary '-' operator (takes no arguments)
    void operator-()
    {
        x = -x;
        y = -y;
    }

    void operator*()
    {
        x = --x;
        y = --y;
    }

    void display() const {cout << "Point(" << x << ", " << y << ")" << endl;}
};

int main()
{
    Point p1(10, -5);

    cout << "Original ";
    p1.display();

    *p1;

    cout << "Decremented ";
    p1.display();

    -p1;

    cout << "Negated ";
    p1.display();

    return 0;
}
