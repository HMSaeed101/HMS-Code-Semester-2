//! Manual Dynamic Array (Resize Simulation)
/*
Real use of heap – dynamic resizing (like `std::vector` does internally).
Implement a simple dynamic int array:
- Start with capacity 2.
- Add 10 numbers (double capacity when full using new[] + copy + delete[]).
- Print size, capacity, and elements after each resize.
*/

#include <iostream>
using namespace std;

int main()
{
    int capacity = 2;
    int size = 0;
    int* arr = new int[capacity];

    for (int i = 1; i <= 10; i++)
    {
        // Check if array is full
        if (size == capacity)
        {
            int newCapacity = capacity * 2;
            int* newArr = new int[newCapacity];

            // Copy elements
            for (int j = 0; j < size; j++)
            {
                newArr[j] = arr[j];
            }

            // Delete old array
            delete[] arr;
            arr = newArr;
            capacity = newCapacity;

            cout << "Resized: new capacity = " << capacity << endl;
        }

        arr[size] = i;
        size++;

        // Print current array
        cout << "Size: " << size << ", Elements: ";
        for (int j = 0; j < size; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    delete[] arr;
    return 0;
}
