/*
Create a class named Trigon inherited from the class GeometricShape (containing a single data member named shapeName (a string) and a member function named setShapeName(shapeName).
The class Trigon is required to hold:
• Three data members i.e. base, perpendicular, and hypotenuse of type double
• A no-arg constructor that initializes all data members with value 1.0
• A parameterized constructor to initialize all data fields with user-defined values
• The setter functions for all three data fields
• The accessor functions for all three data fields
• A function named displayArea() that shows the area of a certain Trigon object
In the main() function make three objects of class Trigon while considering the shapeName as “threeangle” for each object. In addition, it is required to invoke all the functions of Trigon class
*/

#include <iostream>
#include <string>
using namespace std;

class GEOMETRIC_SHAPE
{
    protected:
    string shapeName;

    public:
    void setShapeName(string _){shapeName = _;}
};

class TRIGON : public GEOMETRIC_SHAPE
{
    private:
    double per, base, hyp;

    public:
    TRIGON()
    {   per = 1.0;
        base = 1.0;
        hyp = 1.0;
    }

    TRIGON(double _per, double _base, double _hyp) : per(_per), base(_base), hyp(_hyp) {}

    void setper (double _per) { per = _per ;}
    void setbase (double _base) { base = _base;}
    void sethyp (double _hyp) { hyp = _hyp;}

    void getper () { cout << per << endl;}
    void getbase() { cout << base << endl;}
    void gethyp () { cout << hyp << endl;}

    void displayArea()
    {
        double area;
        area = 0.5 * (base * per);
        cout << "Area : " << area << endl;
    }

};

int main()
{
    TRIGON tri1(23, 34, 45);
    TRIGON tri2(23, 34, 45);
    TRIGON tri3(23, 34, 45);

    tri1.setShapeName("threeangle");
    tri2.setShapeName("threeangle");
    tri3.setShapeName("threeangle");

    tri1.displayArea();
    tri2.displayArea();
    tri3.displayArea();
}
