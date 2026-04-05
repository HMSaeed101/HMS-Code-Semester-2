/*
Hafiz Muhammad Saeed
25-CS-005
*/

#include <iostream>
#include <string>
using namespace std;

class DIABLO
{
private:
    string owner;
    string color;
    int capacity;
    int seats;
    int year_manuf = 2000;
    int engine_number = 000000;
    int frame_number = 00000;


public:
    // Constructor
    DIABLO()
    {
        color = "Hot Red";
        capacity = 3000;
        seats = 4;
    }

    // Copy Constructor
    DIABLO( DIABLO &_)
    {
        color = _.color;
        capacity = _.capacity;
        seats = _.seats;
    }

    void display()
    {
        cout << endl;
        cout << "_______________________________" << endl;
        cout << "CAR DETAILS" << endl;
        cout << "Owner : " << owner << endl;
        cout << "Colour : " << color << endl;
        cout << "Capacity : " << capacity << endl;
        cout << "Year of Manufacture : " << year_manuf << endl;
        cout << "Engine Number : " << engine_number << endl;
        cout << "Frame Number : " << frame_number << endl;
        cout << "Number Seats : " << seats << endl;
    }

    // Setters
    void set_owner()
    {
        string name;
        cout << "Enter the name of the Owner ";
        cin >> name;
        owner = name;
    }

    void set_year_manuf()
    {
        int year = 2000;
        cout << "Enter Year of Manufacture ";
        cin >> year;
        year_manuf = year;
    }

    void set_engine_number()
    {
        int engine = 0;
        cout << "Enter Engine Number ";
        cin >> engine;
        engine_number = engine;
    }

    void set_frame_number()
    {
        int frame = 0;
        cout << "Enter the Frame Number ";
        cin >> frame;
        frame_number = frame;
    }

};

int main()
{
    DIABLO obj1;
    obj1.set_owner();
    obj1.set_year_manuf();
    obj1.set_frame_number();
    obj1.set_engine_number();
    obj1.display();

    DIABLO obj2 = obj1;
    obj2.display();
}
