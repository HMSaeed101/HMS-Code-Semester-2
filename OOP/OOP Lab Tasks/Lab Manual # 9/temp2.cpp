#include <iostream>
using namespace std;
class Grandparent {
public:
 void familyName() {
 cout << "This is the Smith family." << endl;
 }
};
class Parent : public Grandparent {
public:
 void parentInfo() {
 cout << "Parent's details." << endl;
 }
};

class Child : public Parent {
public:
 void childInfo() {
 cout << "Child's details." << endl;
 }
};

int main() {
 Child c;
 c.familyName();
 c.parentInfo();
 c.childInfo();
 return 0;
}

