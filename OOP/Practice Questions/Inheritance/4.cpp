#include <iostream>
using namespace std;

// Base Class
class SHAPE
{
    protected:
    int width;
    int height;

    public:
    void set_width(int w)
    {width = w;}

    void set_height(int h)
    {height = h;}

};

// Derived Class , Public Inheritance
class RECTANGLE : public SHAPE
{
    public:
    int get_area()
    {
        return (width * height);
    }
};

int main()
{
    RECTANGLE rect_1;

    rect_1.set_width(5);
    rect_1.set_height(7);

    cout << "Area : " << rect_1.get_area() << endl;

}
