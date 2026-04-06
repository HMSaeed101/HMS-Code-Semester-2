#include <iostream>
using namespace std;

int main()
{
    // Pointer created on stack memory
    int *ptr = NULL;

    // Allocates 4 bytes on heap, ptr now holds address
    ptr = new int;

    // Assign value in heap memory
    *ptr = 20;

    // Prints address on heap, so changes on every RUN
    cout << "Address : " << ptr << endl;
    cout << "Value : " << *ptr;

    // Releases the 4 bytes back to the OS
    delete ptr;



    int *ptr = nullptr;    // Modern C++ preferred
    ptr = new int;          // Allocate memory
    *ptr = 20;              // Assign value
    delete ptr;


    int *ptr = new int[1]; // allocate an array of size 1
    ptr[0] = 20;           // assign value
    delete[] ptr;          // free array memory


    int value = 20;
    int *ptr = &value; // pointer to stack variable

}
