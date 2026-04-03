/*******************************************************************************
* Program: Friend Functions Enumamples
*******************************************************************************/

#include <iostream>
using namespace std;

class MyClass
{
  // We declare a 'friend function' double_num that will be allowed access to any protected and private members of MyClass objects.  The friend function is NOT a member function of MyClass.  We could put this declaration beneath the public or private access specifiers and it would work the same as it does here, because it is NOT a member of MyClass.
  friend void double_num(MyClass &object);

private:

  int num;
  void add(int n) { num += n; }

public:
  MyClass(int num) : num(num) {};

  // A public member function that prints out the value of member variable num... MyClass CAN access private members of MyClass, but the "outside world" such as the main function cannot... friend functions will *also* be able to access private and protected members!
  void print()
  {cout << " num : " << num << endl;}

};

// We define the friend function double_num and because it is declared a friend function inside MyClass (notice the friend keyword is absent here) we can access the private and protected members of the MyClass object instance.

void double_num(MyClass &object)
{
  // access the private member variable num, store it into current_num_value
  int current_num_value = object.num;

  // use the private member function add to add the current_num_value to itself,
  // having the effect of doubling num
  object.add(current_num_value);

  // Alternatively we could have accessed the private member variable num directly
  // in order to double it like this...
  //
  // object.num *= 2;
}



// A friend function can also be a friend to multiple classes, here we have an enumample of a friend function that is a friend to both a Revenue1 class and a Costs1 class.

// forward declaration of Costs1 so we can use it in the Revenue1 class
class Costs1;

class Revenue1
{
  friend bool profit1(Revenue1 rev, Costs1 cos);

private:
  int revenue;

public:
  Revenue1(int revenue) : revenue(revenue) {}

};

class Costs1
{
  // we ALSO declare the profit1 function as a friend of Costs1
  friend bool profit1(Revenue1 rev, Costs1 cos);

private:
  // private member variable for representing costs
  int costs;

public:
  // Constructor for setting the costs member variable
  Costs1(int costs) : costs(costs) {}
};

// The profit1() function will have access to the protected and private members of BOTH Revenue1 AND Costs1 because both classes declare it as a friend function!  We return true if revenue is greater than costs (as this would represent a profit), otherwise we return false.
bool profit1(Revenue1 rev, Costs1 cos)
{
  if (rev.revenue > cos.costs) return true;
  else return false;
}



// A friend function can also be a member function of another class!  Here we re-work the above enumample to make the profit2 function a member of class Revenue2 and a friend function of Costs2.

// Again we provide a forward declaration of Costs2
class Costs2;

// A simple class for representing revenues
class Revenue2
{
private:

  // a private member variable for representing the revenue
  int revenue;

public:

  // Construct sets revenue member variable to the int argument provided
  Revenue2(int revenue) : revenue(revenue) {}

  // profit2 is a member variable of Revenue2 (we will define it later) and it
  // will be a friend function of the Costs2 class
  bool profit2(Costs2 cos);
};

// A simple class for representing costs
class Costs2
{
  // profit2 is a member function of Revenue2 (notice Revenue2::) BUT is also
  // declared as a friend function of Class2 below
  friend bool Revenue2::profit2(Costs2 cos);

private:

  // private member variable for representing costs
  int costs;

public:

  // Constructor sets costs member variable to the int argument provided
  Costs2(int costs) : costs(costs) {}
};

// Define the Revenue2 member function profit2... because it is a friend of
// Costs2 it will have access to the private and protected members of the
// Costs2 object.  We return return if revenue is greater than costs, and
// false otherwise.
bool Revenue2::profit2(Costs2 cos)
{
  if (revenue > cos.costs) return true;
  else return false;
}


int main()
{
  // Create an instance of MyClass with num set to 7
  MyClass myobject(7);

  // Call print to print out the current value of num
  myobject.print();

  // Use friend function double_num() to double the value of num... notice how we
  // do NOT call it like a member function (e.g. my.object.doublenum(...)) because
  // it is NOT a member function of MyClass objects.
  double_num(myobject);

  // Print out the current value of num again to verify that it has doubled to 14
  myobject.print();


  // Create Revenue1 and Costs1 objects, here revenue is greater than costs
  Revenue1 revenue1(1000);
  Costs1 costs1(500);

  // Use the profit1() function which is a friend of both Revenue1 and Costs1
  // classes, and we should report that a profit has occurred
  if (profit1(revenue1, costs1)) cout << "Profit!" << endl;
  else cout << "No profit!" << endl;


  // Create Revenue2 and Costs2 objects, here revenue is not greater than costs
  Revenue2 revenue2(500);
  Costs2 costs2(1000);

  // Use the profit2() member function of the Revenue2 object revenue2 which is
  // ALSO a friend of the Costs2 class, and we should report no profit this time
  if (revenue2.profit2(costs2)) cout << "Profit!" << endl;
  else cout << "No profit!" << endl;

  return 0;
}
