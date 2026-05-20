//! Relational Operator Overloading

#include <iostream>
using namespace std;

class Box
{
private:
    double volume;

public:
    Box(double v) : volume(v) {}

    // Overloading the '==' relational operator
    bool operator==(const Box& b) const
    {
        return this->volume == b.volume;
    }
};

int main()
{
    Box box1(150.5);
    Box box2(150.5);
    Box box3(300.0);

    if (box1 == box3){cout << "box1 and box2 are equal in volume." << endl;}
    else{cout << "box1 and box2 are different." << endl;}

    return 0;
}
