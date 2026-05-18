//! Multiple Inheritance (Diamond problem)

//         CommonClass
//       /              \
//      /                \
// BaseClass1           BaseClass2
//      \                /
//       \              /
//         DerivedClass

#include <iostream>
using namespace std;

class CommonClass
{
public:
  int common_value = 0;

  CommonClass() : common_value(-99) {}
  CommonClass(int _) : common_value(_) {}

};

// BaseClass1 inherits from CommonClass using the virtual keyword, which will prevent DerivedClass below from inheriting two CommonClass common_value member variables when it inherits from BOTH BaseClass1 and BaseClass2
class BaseClass1 : virtual public CommonClass
{
public:
  int value;

  BaseClass1() : CommonClass(100) {}

  void function1(){cout << "Function1 BaseClass1" << endl;}
};

// BaseClass2 also inherits CommonClass using the virtual keyword to prevent DerivedClass below from inheriting two CommonClass common_value member variables when it is inherits from both BaseClass1 and BaseClass2
class BaseClass2 : virtual public CommonClass
{
public:
  int value;

  BaseClass2() : CommonClass(200) {}

  void function1(){cout << "Function1 BaseClass2" << endl;}

};



//! ---------------- Derived Class ----------------
class DerivedClass: public BaseClass1, public BaseClass2
{
public:

  // When DerivedClass inherits from BaseClass1 and BaseClass2 it will have TWO function1 member functions, one associated with each base class!

  // We can handle this situation in a few ways:

  // 1. DerivedClass can override both function1 definitions, this would be a suitable solution if the DerivedClass needs this function to do something different than either BaseClass.

  // Override function1, but have the function call either BaseClass1 or BaseClass2's function1 definition exclusively, effectively having DerivedClass inherit "one of" the two function definitions as a way of resolving the ambiguity.  This would be a suitable solution if the DerivedClass exclusively requires one of the the base class's functions.

  // If we need our derived class to have access to BOTH base class's function definitions, then we could as in the main function below, use the scope resolution operator to call each function as needed

  /*
  void function1()
  {
    BaseClass1::function1();
  }
  */

  // We might think that because the DerivedClass inherits from both BaseClass1 and BaseClass2 that it will inherit how BaseClass1 and/or BaseClass2 constructs the CommonClass object.  But with multiple inheritance this is not what happens, instead it is the responsibility of this DerivedClass to construct the CommonClass, which prevents any ambiguity.

  DerivedClass() : CommonClass(999) {}

};

int main()
{
  DerivedClass derived;

  // When we output the common_value member variable, we might expect that it
  // will be either 100 or 200 as set by the CommonClass constructors that
  // are called by BaseClass1 and BaseClass2.  But instead what happens is that
  // DerivedClass calls the CommonClass constructor with the value 999. This
  // may be surprising as typically a derived class will call the base class's
  // constructor, but in this case with multiple inheritance and the virtual
  // keyword, DerivedClass will decide how to construct the CommonClass!
  cout << "Common value: " << derived.common_value << endl;

  // In the case where the base classes of a derived class using multiple
  // inheritance share member variable names, the derived class will get two
  // member variables with the same name, and we can use the ClassName and ::
  // scope ambiguity operator to resolve this ambiguity as to which is being
  // accessed.  An error will result if we do not do so.
  derived.BaseClass2::value = 20;

  // We can resolve the ambiguity between the function1 member function in
  // the same way...
  derived.BaseClass1::function1();
  derived.BaseClass2::function1();

  // If we uncomment the function1() definition in DerivedClass, and comment
  // out the two statements above, we would then overide function1() and
  // call it more simply like this code below... in this case the overridden
  // function has been setup to exclusively call the BaseClass1 definition of
  // function1.
  //
  // derived.function1();

  return 0;
}
