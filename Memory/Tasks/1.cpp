/*
Basic Single-Object Allocation

How `new` allocates heap memory + calls constructor, `delete` calls destructor + deallocates. Dynamic storage duration.

#include <iostream>
class Student {
public:
Student() { std::cout << "Student created\n"; }
~Student() { std::cout << "Student destroyed\n"; }
};

Instructions:
1. Dynamically allocate one `Student` object on heap.
2. Print its address.
3. Delete it.
4. Set pointer to `nullptr`.

Expected Output:
Student created
Student address: 0x...
Student destroyed

**Verification Questions:**
1. Why does the destructor run exactly when `delete` is called?
2. What happens if you forget `delete`?
*/
