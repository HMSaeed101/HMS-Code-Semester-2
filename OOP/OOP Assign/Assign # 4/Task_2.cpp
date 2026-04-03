/*
Your task is to create a class that contains an integer pointer data member. Create a single object named “one” in the main and assign values to the data member of the object. Then create another object named “two” that is a copy of the “one”. Create a shallow copy constructor and then demonstrate that both objects share a common memory i.e. modifying one object in fact modifies the other. Create a display function that will show the values of the object.
*/

#include <iostream>
using namespace std;

class NUMBER
{
    public:
    int *pointer;

    // Shallow Copy Constructor
    NUMBER(NUMBER obj)
    {
        // int *pointer = new int;
    }

    // Deep Copy Constructor
    NUMBER(NUMBER &obj)
    {
        int *pointer = new int;
    }

};

int main()
{

}
