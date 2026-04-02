// Saeed (25-CS-005) Section-B
// 19, Feb, 2026

#include <iostream>
#include <string>
using namespace std;

class CAR
{
    public:
    string name;
    string owner;
    string model;
    int price;

    void display()
    {
        cout << "\nCar Information.\n";
        cout << "Name : " << name << endl;
        cout << "Model : " << model << endl;
        cout << "Owner : " << owner << endl;
        cout << "Price : " << price << endl;
    }
};

int main()
{
    CAR car1, car2, car3;

    car1.model = "GLI";
    car1.name = "Toyota Corolla";
    car1.price = 45000;
    car1.owner = "Ali";

    car2.model = "VXR";
    car2.name = "Suzuki Alto";
    car2.price = 25000;
    car2.owner = "Ahmed";

    car3.model = "Sport";
    car3.name = "Honda Civic";
    car3.price = 60000;
    car3.owner = "Usman";

    car1.display();
    car2.display();
    car3.display();

    return 0;
}