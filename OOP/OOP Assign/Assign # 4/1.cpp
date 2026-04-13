// Practice from Home (4.1)

#include <iostream>
using namespace std;

class Example
{
private:
    int value;

    // Private constructor
    Example(int v)
    {
        value = v;
        cout << "Private Constructor Called\n";
    }

public:
    // Public static function to create object
    static Example createObject(int v)
    {
        return Example(v);
    }

    void display(){cout << "Value: " << value << endl;}
};

int main()
{
    // Example obj(10); ❌ Not allowed (constructor is private)

    Example obj = Example::createObject(10);
    obj.display();

    return 0;
}
