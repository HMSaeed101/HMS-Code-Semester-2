//! Mini Project – Safe Dynamic String Class**
/*
Applying everything together (Rule of Three preview, but only heap focus).

Create a class `MyString` with:
- Constructor from `const char*` (heap copy).
- Destructor (delete[]).
- Copy constructor & copy assignment (deep copy).
Test with multiple objects, passing by value, etc.

**Verification Questions:**
1. Without deep copy, what bug appears?
2. How does this class prevent memory leaks?
*/

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;
public:
    // Constructor
    MyString(const char* s) {
        str = new char[strlen(s) + 1]; // Allocate heap memory
        strcpy(str, s);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Copy Constructor (Deep Copy)
    MyString(const MyString& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    // Copy Assignment (Deep Copy)
    MyString& operator=(const MyString& other) {
        if (this != &other) { // Avoid self-assignment
            delete[] str; // Free old memory
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2 = s1;   // Copy constructor
    MyString s3("World");
    s3 = s1;            // Copy assignment

    s1.display(); // Hello
    s2.display(); // Hello
    s3.display(); // Hello

    return 0;
}
