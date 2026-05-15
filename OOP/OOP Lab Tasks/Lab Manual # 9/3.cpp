//! Hierarchal Inheritance
/*
Implement hierarchical inheritance to model different types of vehicles for a registration system.

Define a base class named Vehicle that contains common attributes like regNumber, ownerName, and baseprice.

From this base class, derive two separate classes: Car and Bike.

The Car class should have additional attributes such as fuelType (which can be petrol, diesel, or electric) and numberOfDoors.

The Bike class should include attributes like hasGear (a boolean value) and engineCC (engine displacement
in cubic centimeters).

Create one object of Car and one object of Bike, set their respective attributes, and display all details.

Furthermore, add a method named calculateRoadTax() in both derived classes, implementing different tax calculation formulas for cars and bikes.
*/

#include <iostream>
#include <string>

using namespace std;


class VEHICLE
{
    protected:
    string owner;
    int regnum;
    int baseprice;

    public:
    VEHICLE(string n, int reg, int p) : owner(n), regnum(reg), baseprice(p) {}

    void display()
    {
        cout << "=========== Vehicle Display ===========\n";
        cout << "Owner Name" << " : " << owner << endl;
        cout << "Registration Number" << " : " << regnum << endl;
        cout << "Base Price" << " : " << baseprice << endl;
    }
};


enum FUELTYPE{Petrol, Diesel, Electric};

class CAR : public VEHICLE
{
    FUELTYPE fuel;
    int num_doors;

    public:
    CAR(string n, int reg, int p, FUELTYPE ft, int d) : VEHICLE(n, reg, p), fuel(ft), num_doors(d) {}

    void calculateRoadTax()
    {
        double tax = baseprice * 0.10;
        cout << "Road Tax (10%)" << " : " << tax << endl;
    }

    void display()
    {
        VEHICLE :: display();
        cout << "Fuel Type" << " : " ;
        switch(fuel)
        {
            case Petrol:   cout << "Petrol";   break;
            case Diesel:   cout << "Diesel";   break;
            case Electric: cout << "Electric"; break;
        }
        cout << endl;
        cout << "Number of Doors" << " : " << num_doors << endl;
        calculateRoadTax();
        cout << "=========================================" << endl;
    }
};

class BIKE : public VEHICLE
{
    bool hasgear;
    int engineCC;

    public:
    BIKE(string n, int reg, int p, bool gear, int cc) : VEHICLE(n, reg, p), hasgear(gear), engineCC(cc) {}

    void calculateRoadTax()
    {
        double tax = baseprice * 0.05;
        cout << "Road Tax (5%)" << " : " << tax << endl;
    }

    void display()
    {
        VEHICLE :: display();
        cout << "Gears" << " : " << (hasgear ? "Yes" : "No") << endl;
        cout << "Engine CC" << " : " << engineCC << endl;
        calculateRoadTax();
        cout << "=========================================" << endl;
    }
};


int main()
{
    CAR myCar("Saeed", 5505, 2500000, Petrol, 4);
    BIKE myBike("Ali", 9901, 150000, true, 150);

    myCar.display();

    myBike.display();

    return 0;
}
