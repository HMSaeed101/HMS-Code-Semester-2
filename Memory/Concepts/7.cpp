//! Exception Safety – std::bad_alloc**
/*
What happens when heap is exhausted.

Write a loop that keeps allocating huge arrays (e.g., 1GB each) until `new` throws `std::bad_alloc`.
Catch the exception and print a clean message.

**Verification Questions:**
1. Does `new` return null or throw?
2. Why is catching `std::bad_alloc` important in servers?
*/

#include <iostream>
#include <new>   // For std::bad_alloc
using namespace std;

int main() {
    try {
        size_t counter = 0;
        while (true) {
            // Attempt to allocate 1GB (approx 250 million ints)
            int* bigArray = new int[250000000];
            counter++;
            cout << "Allocated " << counter << " GB so far." << endl;
        }
    }
    catch (const bad_alloc& e) {
        cout << "Heap exhausted! Exception caught: " << e.what() << endl;
    }

    cout << "Program continues safely after exception." << endl;
    return 0;
}
