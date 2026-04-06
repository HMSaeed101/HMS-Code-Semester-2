#include <iostream>
using namespace std;

class EXAMPLE
{
private:
    int *info;

public:
    DEMO(int val)
    {
        info = new int;
        *info = val;
    }

    // Shallow Copy Constructor
    DEMO(DEMO &obj)
    {
        info = obj.info;
    }

    void set_value(int val){*info = val;}
    void display(){cout << "Value: " << *info << " | Address: " << info << endl;}
};

int main()
{
    DEMO one(10);
    DEMO two = one;

    cout << "Before modification" << endl;
    one.display();
    two.display();

    one.set_value(50);

    cout << endl << "After modifying object 'one':" << endl;
    one.display();
    two.display();

    return 0;
}
