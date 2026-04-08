//! C-Style malloc vs new
// Difference between `new` (C++) and `malloc` (C). No constructors with `malloc`.

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class STUDENT
{
private:
    string name;
    int age;

public:
    STUDENT() { cout << "Student Object created." << endl; }
    ~STUDENT() { cout << "Student Object destroyed." << endl; }

    void setData(string n, int a){name=n, age=a;}
    void display() { cout << "Name: " << name << ", Age: " << age << endl; }
};

int main()
{
    cout << "--- Using new ---" << endl;
    STUDENT* s1 = new STUDENT;
    STUDENT* s2 = new STUDENT;
    STUDENT* s3 = new STUDENT;

    s1->setData("Saeed", 20);
    s2->setData("Ali", 21);
    s3->setData("Zara", 19);

    s1->display();
    s2->display();
    s3->display();

    delete s1;
    delete s2;
    delete s3;

    cout << endl << "--- Using malloc ---" << endl;
    STUDENT* ptr = (STUDENT*) malloc(3 * sizeof(STUDENT));  // raw memory, no constructors

    // Placement new
    new(&ptr[0]) STUDENT;
    new(&ptr[1]) STUDENT;
    new(&ptr[2]) STUDENT;

    ptr[0].setData("Hamza", 22);
    ptr[1].setData("Sara", 20);
    ptr[2].setData("Farhan", 23);

    ptr[0].display();
    ptr[1].display();
    ptr[2].display();

    ptr[0].~STUDENT();
    ptr[1].~STUDENT();
    ptr[2].~STUDENT();

    free(ptr);
}
