#include <iostream>
using namespace std;

class NUMBER
{
    private:
    int value;

    public:
    // Parameterized Constructor
    NUMBER(int v) {value = v;}
    // Copy Constructor
    // NUMBER(const NUMBER &obj) {value = obj.value;}

    void display()
    {cout << "Value: " << value << endl;}
};

int main()
{
    NUMBER num1(23);
    // Init new object with same object data
    NUMBER num2 = num1;
    num1.display();
    num2.display();
    return 0;
}
