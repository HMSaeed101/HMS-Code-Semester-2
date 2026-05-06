#include <iostream>
using namespace std;

class Vehicle
{
    public:
    void display() { cout << "This is a vehicle." << endl; }
};

class Car : public Vehicle
{
    public:
    void displayCar() { cout << "This is a car." << endl;}
};

class SportsCar : public Car
{
    public:
    void displaySportsCar() {cout << "This is a sports car." << endl;}
};

int main()
{
    SportsCar myCar;
    myCar.display(); // Accessing base class method
    myCar.displayCar(); // Accessing intermediate derived class method
    myCar.displaySportsCar(); // Accessing derived class method
    return 0;
}
