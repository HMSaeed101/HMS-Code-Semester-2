// Hafiz Muhammad Saeed
// 25-CS-005

#include <iostream>
using namespace std;

class X
{
    public:
    double val1;
    double val2;

    X(double one, double two)
    {val1 = one; val2 = two;}

    bool operator==(const X& obj)
    {
        return val1 == obj.val1 && val2 == obj.val2 ;
    }
};

int main()
{
    X ob1(2.0,5.0);
    X ob2(2.0,5.0);

    if(ob1 == ob2){cout << "Objects are same" << endl;}
    else {cout << "Objects are different" << endl;}
}
