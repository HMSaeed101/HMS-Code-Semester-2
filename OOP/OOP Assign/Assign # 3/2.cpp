// Hafiz Muhammad Saeed 25-CS-005
// Walk-through Task

#include <iostream>
using namespace std;

class STUDENT
{
    private:
    string name;
    int age;

    public:
    STUDENT()
    {
        name = "Unknown";
        age = 0;
    }
    STUDENT(string n, int a)
    {
        name = n;
        age = a;
    }

    void display();
};

void STUDENT :: display()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}


int main()
{
    STUDENT std1;
    STUDENT std2("Ahmed", 23);
    STUDENT std3 = std2;
    STUDENT std4(std1);

    std1.display();
    std2.display();
    std3.display();
    std4.display();
}
