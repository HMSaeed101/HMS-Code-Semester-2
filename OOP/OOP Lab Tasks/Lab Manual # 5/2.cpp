#include <iostream>
#include <string>
using namespace std;
class CARS
{   private:
    string model;
    int rentperday;
    bool isavailable;

    public:
    CARS(string m, int rpd, bool aval)
    {   model = m;
        rentperday = rpd;
        isavailable = aval;
    }

    void display()
    {   cout << "Car details.\n";
        cout << model << endl;
        cout << rentperday << endl;
        cout << isavailable << endl;
    }
};

int main()
{   string mm;
    int rr;
    bool aavv;

    cout << "Model name\n";
    cin >> mm;

    cout << "Rent per Day\n";
    cin >> rr;

    cout << "Is Available\n";
    cin >> aavv;

    CARS car1(mm,rr,aavv);
    car1.display();
}