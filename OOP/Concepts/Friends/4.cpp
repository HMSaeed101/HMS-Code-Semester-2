#include <iostream>
using namespace std;

class SECOND;

class FIRST
{
private:
    int member1;
    int member2;

public:

    FIRST(int a, int b) : member1(a), member2(b) {}

    friend void fri_func(FIRST, SECOND);
};

class SECOND
{
private:
    int mem1;
    int mem2;

public:
    SECOND(int x, int y) : mem1(x), mem2(y) {}

    friend void fri_func(FIRST, SECOND);
};


// Friend function definition
void fri_func(FIRST o1, SECOND o2)
{
    cout << "FIRST Object Values: " << o1.member1 << ", " << o1.member2 << endl;
    cout << "SECOND Object Values: " << o2.mem1 << ", " << o2.mem2 << endl;

    cout << "Sum of all values: " << (o1.member1 + o1.member2 + o2.mem1 + o2.mem2) << endl;
}

int main()
{
    FIRST obj1(10, 20);
    SECOND obj2(30, 40);

    fri_func(obj1, obj2);

    return 0;
}
