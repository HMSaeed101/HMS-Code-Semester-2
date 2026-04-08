//! Using Nullptr

#include <iostream>
using namespace std;

void safeDelete(int*& p)
{
    if (p != nullptr)
    {
        delete p;
        p = nullptr;   // Prevent dangling pointer
    }
}

int main()
{
    int* a = new int(10);

    int* b = new int(20);

    int* c = new int(30);

    // Safe deletion
    safeDelete(a);
    safeDelete(b);
    safeDelete(c);

    cout << "All pointers safely handled." << endl;
    return 0;
}
