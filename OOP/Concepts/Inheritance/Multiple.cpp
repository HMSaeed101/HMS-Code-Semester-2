//! Multiple Inheritance
// Diamond problem

//         COMMON_CLASS
//       /              \
//      /                \
// BASE_CLASS_1           BASE_CLASS_2
//      \                /
//       \              /
//         DerivedClass

// The classes defined below have the following relationships, with DerivedClass using multiple inheritance to inherit from both BASE_CLASS_1 and BASE_CLASS_2.
// But we'll also have a COMMON_CLASS that both BASE_CLASS_1 and BASE_CLASS_2 also inherit from, causing an instance of "the diamond problem".

#include <iostream>
using namespace std;

class COMMON_CLASS
{
public:
  int common_value;

  COMMON_CLASS() : common_value(-99) {}
  COMMON_CLASS(int _) : common_value(_) {}

};

// BASE_CLASS_1 inherits from COMMON_CLASS using the virtual keyword, which will prevent DerivedClass below from inheriting two COMMON_CLASS common_value member variables when it inherits from BOTH BASE_CLASS_1 and BASE_CLASS_2!
class BASE_CLASS_1 : virtual public COMMON_CLASS
{
public:

  // BASE_CLASS_1 and BASE_CLASS_2 both have a member variable value
  int value;

  // Have BASE_CLASS_1 use COMMON_CLASS's parameterized constructor with the value 100
  BASE_CLASS_1() : COMMON_CLASS(100) {}

  // BASE_CLASS_1 has a member function called function1, and it is different than BASE_CLASS_2's function1 too
  void function1()
  {
    cout << "Function1 BASE_CLASS_1" << endl;
  }

};

// BASE_CLASS_2 also inherits COMMON_CLASS using the virtual keyword to prevent DerivedClass below from inheriting two COMMON_CLASS common_value member variables when it is inherits from both BASE_CLASS_1 and BASE_CLASS_2
class BASE_CLASS_2 : virtual public COMMON_CLASS
{
public:
  // member variable with same name as BASE_CLASS_1
  int value;

  // BASE_CLASS_2 also calls COMMON_CLASS's parameterized constructor, but with an argument of 200
  BASE_CLASS_2() : COMMON_CLASS(200) {}

  // BASE_CLASS_2 also has a member function called function1
  void function1()
  {
    cout << "Function1 BASE_CLASS_2" << endl;
  }
};



//! ---------------- Derived Class ----------------
class DerivedClass: public BASE_CLASS_1, public BASE_CLASS_2
{
public:

  // When BaseClass inherits from BASE_CLASS_1 and BASE_CLASS_2 it will have TWO function1 member functions, one associated with each base class!

  // We can handle this situation in a few ways:

  // DerivedClass can override both function1 definitions, this would be a suitable solution if the DerivedClass needs this function to do something different than either BaseClass.

  // We could, as commented out below, override function1, but have the function call either BASE_CLASS_1 or BASE_CLASS_2's function1 definition exclusively, effectively having DerivedClass inherit "one of" the two function definitions as a way of resolving the ambiguity.  This would be a suitable solution if the DerivedClass exclusively requires one of the the base class's functions.

  // If we need our derived class to have access to BOTH base class's function definitions, then we could as in the main function below, use the scope resolution operator to call each function as needed

  /*
  void function1()
  {
    BASE_CLASS_1::function1();
  }
  */

  // We might think that because the DerivedClass inherits from both BASE_CLASS_1 and BASE_CLASS_2 that it will inherit how BASE_CLASS_1 and/or BASE_CLASS_2 constructs the COMMON_CLASS object.  But with multiple inheritance this is not what happens, instead it is the responsibility of this DerivedClass to construct the COMMON_CLASS, which prevents any ambiguity.

  DerivedClass() : COMMON_CLASS(999) {}

};

int main()
{
  DerivedClass derived;

  // When we output the common_value member variable, we might expect that it
  // will be either 100 or 200 as set by the COMMON_CLASS constructors that
  // are called by BASE_CLASS_1 and BASE_CLASS_2.  But instead what happens is that
  // DerivedClass calls the COMMON_CLASS constructor with the value 999. This
  // may be surprising as typically a derived class will call the base class's
  // constructor, but in this case with multiple inheritance and the virtual
  // keyword, DerivedClass will decide how to construct the COMMON_CLASS!
  cout << "Common value: " << derived.common_value << endl;

  // In the case where the base classes of a derived class using multiple
  // inheritance share member variable names, the derived class will get two
  // member variables with the same name, and we can use the ClassName and ::
  // scope ambiguity operator to resolve this ambiguity as to which is being
  // accessed.  An error will result if we do not do so.
  derived.BASE_CLASS_2::value = 20;

  // We can resolve the ambiguity between the function1 member function in
  // the same way...
  derived.BASE_CLASS_1::function1();
  derived.BASE_CLASS_2::function1();

  // If we uncomment the function1() definition in DerivedClass, and comment
  // out the two statements above, we would then overide function1() and
  // call it more simply like this code below... in this case the overridden
  // function has been setup to exclusively call the BASE_CLASS_1 definition of
  // function1.
  //
  // derived.function1();

  return 0;
}
