#include <iostream>
using namespace std;

// MENU_ITEM is a "Base Class" or what we could also call a "Parent Class", it contains a few simple member variables and a member function for printing them out.
class MENU_ITEM
{
public:
  string name;
  double calories;

  void print()
  {
    cout << name << " (" << calories << " cal)" << endl;
  }
};

// We want our DRINK class to "have and do" everything that a MENU_ITEM class can do... we could copy and paste the code from MENU_ITEM into the DRINK class, but then we would have duplicate code (a "code clone" we can call it).  The problem with duplicate code is that it becomes harder to maintain, if we need to make a change we would need to make it in two places!

// So instead we us : public MENU_ITEM to make DRINK a "Derived Class" off the the MENU_ITEM class (also called a "Child Class").  The DRINK class will be given the member variables and member functions of its base class MENU_ITEM, i.e. our DRINK objects will have public member variables name, calories, and the print function too!

// We can still define in the DRINK class new member variables, like ounces and new member functions, like cal_per_ounce.

class DRINK : public MENU_ITEM
{
public:
  double ounces;

  double cal_per_ounce()
  {
    return calories / ounces;
  }
};

int main()
{
  MENU_ITEM french_fries;
  french_fries.name = "French Fries";
  french_fries.calories = 400;
  french_fries.print();


  // We can also instantiate and use a DRINK object, using the same name and calories member variables, and the same print member function, in addition to the new member variable calories and the new member function cal_per_ounce().

  DRINK hot_chocolate;
  hot_chocolate.name = "Hot Chocolate";
  hot_chocolate.calories = 300;
  hot_chocolate.ounces = 8;

  hot_chocolate.print();
  cout << "cal/ounce: " << hot_chocolate.cal_per_ounce() << endl;

  // We can use a derived class anywhere a base class can be used and it will work!  This is a feature of polymorphism, another concept that allows inheritance to help us write better code.  We describe the relationship between DRINK and MENU_ITEM as an "is a" relationship, in that a DRINK object "is a" MENU_ITEM object.  A DRINK object can be used anywhere that a
  // Menu item object can, in the sense that a DRINK object has the same member
  // variables and same member functions available.

  // Here we make a pointer to an MENU_ITEM variable, and we assign it the memory address of the hot_chocolate DRINK object instance.  This seems odd but polymorphism will allow for this, and we can even call the DRINK member function via the pointer, and it's OK.  What makes this work is that we *know* a DRINK object will have a print object by virtue of it being a MENU_ITEM too.


  MENU_ITEM *ptr;
  ptr = &hot_chocolate;
  ptr->print();

  return 0;
}
