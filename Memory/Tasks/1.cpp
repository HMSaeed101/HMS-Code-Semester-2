//! Basic Single-Object Allocation
/*
How `new` allocates heap memory + calls constructor, `delete` calls destructor + deallocates. Dynamic storage duration.

Instructions:
. Dynamically allocate one `Student` object on heap.
2. Print its address.
3. Delete it.
4. Set pointer to `nullptr`.
*/

#include <iostream>
#include <string>
using namespace std;

class STUDENT
{
    public:
    string name;
    int age;

    STUDENT()
    {
        cout << "Student created." << endl;
    }
    ~STUDENT()
    {
        cout << "Student destroyed." << endl;
    }
};

int main()
{
    STUDENT* ptr_std = new STUDENT;
    cout << "Address : " << ptr_std << endl;

    ptr_std->name = "Saeed";
    ptr_std->age = 20;

    cout << ptr_std->name << endl;
    cout << ptr_std->age << endl;

    delete ptr_std;
    ptr_std = nullptr;

}
