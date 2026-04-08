//! Dangling Pointer

#include <iostream>
using namespace std;

int main()
{
    // Step 1: Allocate memory
    int* ptr = new int(25);

    // Step 2: Delete memory
    delete ptr;

    // Step 3: Use-after-free (dangling pointer)
    cout << "Value: " << *ptr << endl;   // ❌ Undefined behavior

    return 0;
}
