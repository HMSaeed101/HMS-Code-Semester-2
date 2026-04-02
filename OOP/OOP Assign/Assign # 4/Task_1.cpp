
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
    int year_manuf;
    int engine_number;
    int frame_number;


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
        string name;
        cout << "Enter the name of the Owner ";
        cin >> name;
        year_manuf = year;
    }

    void set_engine_number()
    {
        string name;
        cout << "Enter the name of the Owner ";
        cin >> name;
        engine_number = engine;
    }

    void set_frame_number()
    {
        int name;
        cout << "Enter the Frame Number ";
        cin >> name;
        frame_number = frame;
    }

};

int main()
{
    DIABLO obj1;
    obj1.set_owner();

    int year;
    cout << "Enter the Year of Manufacture ";
    cin >> year;
    obj1.set_year_manuf(year);

    int frame;
    cout << "Enter the Frame Number ";
    cin >> frame;
    obj1.set_frame_number(frame);

    int engine;
    cout << "Enter the engine Number ";
    cin >> engine;
    obj1.set_engine_number(engine);

    obj1.display();


    DIABLO obj2 = obj1;
    obj2.set_owner();
    obj2.display();
}
