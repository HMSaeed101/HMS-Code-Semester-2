// Transport  Vehicles

#include <iostream>
#include <string>
using namespace std;

// Base / Parent Class
class VEHICLE
{
    public:
    string brand;
    string color;
    int currentSpeed = 0;

    // Constructor
    VEHICLE(string b = "Unknown", string c = "White")
        : brand(b), color(c), currentSpeed(0)
    {

    }

    void start(){cout << brand << " engine starting...!!!" << endl;}

    void stop()
    {   cout << brand << " engine stopping...!!!\n";
        currentSpeed = 0;
    }

    virtual void honk()     // virtual → child classes can override
    {
        cout << "Default Horn sound: Beep!\n";
    }

    void accelerate(int increase)
    {   currentSpeed += increase;
        cout << brand << " accelerating → current speed: "
        << currentSpeed << " km/h\n";
    }

    virtual void showInfo() const
    {
        cout << "Brand: " << brand << "\n";
        cout << "Color: " << color << "\n";
        cout << "Current speed: " << currentSpeed << " km/h\n";
    }

    // Virtual destructor → important when using inheritance
    virtual ~VEHICLE() = default;
};


// Derived / Child Class
class CAR : public VEHICLE
{
    private:
    string name;
    string model;
    string owner;
    int price;

public:
    // Constructor - calls base class constructor
    CAR(string b, string c, string n, string m, string o, int p)
        : VEHICLE(b, c), name(n), model(m), owner(o), price(p)
    {
    }

    // Override / specialize behavior
    void honk() override
    {
        cout << name << " honking: BEEP-BEEP!\n";
    }

    // Better display method
    void display() const
    {
        cout << "\n====== CAR Information ======\n";
        showInfo();
        cout << "Name   : " << name << endl;
        cout << "Model  : " << model << endl;
        cout << "Owner  : " << owner << endl;
        cout << "Price  : $" << price << endl;
        cout << "------------------------\n";
    }
};


int main()
{
    CAR car1("Toyota",   "Silver", "Toyota Corolla", "GLI",   "Ali",   45000);
    CAR car2("Suzuki",   "Red",    "Suzuki Alto",    "VXR",   "Ahmed", 25000);
    CAR car3("Honda",    "Black",  "Honda Civic",    "Sport", "Usman", 60000);

    car1.display();
    car1.start();
    car1.accelerate(40);
    car1.honk();
    car1.stop();

    cout << "\n";

    car2.display();
    car2.honk();

    cout << "\n";

    car3.display();
    car3.start();
    car3.honk();

    return 0;
}
