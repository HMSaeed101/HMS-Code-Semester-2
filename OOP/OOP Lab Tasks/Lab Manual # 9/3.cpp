//! Hierarchal Inheritance
/*
Implement hierarchical inheritance to model different types of vehicles for a registration system.

Define a base class named Vehicle that contains common attributes like regNumber, ownerName, and price.

From this base class, derive two separate classes: Car and Bike.

The Car class should have additional attributes such as fuelType (which can be petrol, diesel, or electric) and numberOfDoors.

The Bike class should include attributes like hasGear (a boolean value) and engineCC (engine displacement
in cubic centimeters).

Create one object of Car and one object of Bike, set their respective attributes, and display all details.
Furthermore, add a method named calculateRoadTax() in both derived classes, implementing different tax calculation formulas for cars and bikes.
*/

#include <iostream>
using namespace std;

class VEHICLE
{
    protected:
    string owner;
    int regnum;
    int price;

    public:
    VEHICLE()
    {
        owner = "Unknown";
        regnum = 000;
        price = 000;
    }
    VEHICLE(string n, int reg, int p)
    {
        owner = n;
        regnum = reg;
        price = p;
    }
};

class CAR : public VEHICLE
{
    string fueltype;
    int num_doors;

    public:
    CAR()
    {
        fueltype = "UNKNOWN";
        num_doors = "UNKNOWN";
    }
    CAR(string n, int reg, int p, string ft, int d) : VEHICLE(n, reg, p)
    {
        fueltype = ft;
        num_doors = d;
    }

    void CALCULATEROADTAX()
    {

    }
};

class BIKE : public VEHICLE
{
    bool hasgear;
    int engineCC;

    public:
    void CALCULATEROADTAX()
    {

    }
};

int main()
{
    CAR car;
    BIKE bike;

    car.


    bike.
}
