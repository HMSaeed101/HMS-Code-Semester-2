//! Performance – Stack vs Heap
/*
Why heap is slower (allocation overhead + cache).

Write two functions:
- `stackAlloc()`: allocate 1,000,000 ints on stack (use array).
- `heapAlloc()`: allocate same on heap with `new[]`.
Time both using `<chrono>` and print nanoseconds.

**Verification Questions:**
1. Which is faster and by how much?
2. Why do we still use heap despite being slower?
*/


#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void stackAlloc() {
    int arr[1000000]; // Stack allocation
    for (int i = 0; i < 1000000; i++) arr[i] = i;
}

void heapAlloc() {
    int* arr = new int[1000000]; // Heap allocation
    for (int i = 0; i < 1000000; i++) arr[i] = i;
    delete[] arr; // Free memory
}

int main() {
    auto start = high_resolution_clock::now();
    stackAlloc();
    auto end = high_resolution_clock::now();
    cout << "Stack allocation time: "
         << duration_cast<nanoseconds>(end - start).count() << " ns" << endl;

    start = high_resolution_clock::now();
    heapAlloc();
    end = high_resolution_clock::now();
    cout << "Heap allocation time: "
         << duration_cast<nanoseconds>(end - start).count() << " ns" << endl;

    return 0;
}
