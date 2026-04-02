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
}