//! Array Allocation with new[] / delete[]

/* `new[]` vs `new`, `delete[]` requirement, array on heap.

Allocate an array of 5 `int`s on heap using `new[]`.
Initialize them with values 10, 20, 30, 40, 50.
Print the array and addresses of each element.
Deallocate with `delete[]` and set pointer to `nullptr`.

Expected Output:
Values: 10 20 30 40 50
Addresses: 0x... 0x... ...
*/

#include <iostream>
using namespace std;

int main()
{
    int* ptr = new int[5];
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    cout << "Array Values" << endl;
    for(int i=0; i<5; i++)
    {
        cout << ptr[i] << "  ";
        cout << *(ptr + i) << endl;
    }

    cout << "Addresses" << endl;
    for(int i=0; i<5; i++)
    {
        cout << &ptr[i] << endl;
    }

    delete[] ptr;

}
