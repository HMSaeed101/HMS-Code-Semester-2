//! Multilevel Inheritance

#include <iostream>
using namespace std;

// Base class of Drink class (i.e. "parent class", which makes it the "grandparent" of HotDrink class)
class MenuItem
{
public:

  string name;
  double calories;

  void print(){cout << name << " (" << calories << " cal)" << endl;}

};

// Drink is a derived class of MenuItem AND a base class of HotDrink.  Being a derived class of MenuItem it will be inherit the member variables name and calories as well as the member function print.
class Drink : public MenuItem
{
public:

  // Drink objects will have an additional member variable, the number of ounces in the drink
  double ounces;
};

// HotDrink is a derived class of Drink, making the Drink class its "parent class" and the MenuItem class its "grandparent class".  Being a derived class of Drink it will inherit the member variable ounces AS WELL AS the member variable name and calories, and the member function print, that Drink inherited from MenuItem!
class HotDrink : public Drink
{
public:

  double temperature;

  void serving_instructions()
  {
    cout << "Serve " << ounces << " ounces at " << temperature << " degrees F" << endl;
  }

};

int main()
{
  HotDrink hot_chocolate;

  hot_chocolate.name = "Hot Chocolate";
  hot_chocolate.calories = 200;
  hot_chocolate.ounces = 8;
  hot_chocolate.temperature = 77;

  hot_chocolate.print();
  hot_chocolate.serving_instructions();

  return 0;
}

//!   Visualization of Multilevel Inheritance
//
//
//      Base Class X
//           ↑
//           |
//           | - Y inherits from X
//           |
//           |
//  Derived AND Base Class Y
//           ↑
//           |
//           | - Z inherits from Y
//           |
//           |
//     Derived Class Z
//
//
//  Y is a parent class of Z, and we can think of X as a
//  "grandparent" class of Z.
