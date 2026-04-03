#include <iostream>
using namespace std;

class APPLE;

class ORANGE
{
    private:
    int data;

    public:
    ORANGE() : data(3){}

    friend int fri_func(ORANGE, APPLE);
};

class APPLE
{
    private:
    int data;

    public:
    APPLE() : data(7) {}

    friend int fri_func(ORANGE, APPLE);
};

int fri_func(ORANGE a, APPLE b)
{
    return ( a.data + b.data );
}

int main()
{
    ORANGE orange;
    APPLE apple;

    cout << fri_func(orange, apple) << endl;
}
