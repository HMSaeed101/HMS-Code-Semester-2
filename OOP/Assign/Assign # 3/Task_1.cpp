// Hafiz Muhammad Saeed 25-CS-005

#include <iostream>
using namespace std;

class VISION
{
    private:
    float length=0;
    float width=0;
    float area=0;
    float price=0;

    public:
    //! Constructors
    // Nullary Constructor
    VISION()
    {
        set_length();
        set_width();
        calc_area();
        calc_price();
    }
    // Overloaded Constructors
    VISION(int l, int w)
    {
        length = static_cast<float>(l);
        width = static_cast<float>(w);
        calc_area();
        calc_price();
    }
    // Overloaded Constructors
    VISION(float l, float w)
    {
        length = l;
        width = w;
        calc_area();
        calc_price();
    }


    void set_length();
    void set_width();
    void calc_area();
    void calc_price();
    void display();
};



void VISION :: set_length()
{
    float l;
    cout << "Enter the length of TV : ";
    cin >> l;
    length = l;
}
void VISION :: set_width()
{
    float w;
    cout << "Enter the width of TV : ";
    cin >> w;
    width = w;
}
void VISION :: calc_area()
{
    area = length * width;
}
void VISION :: calc_price()
{
    price = area * 65;
}
void VISION::display()
{
    cout << "\n----- ORDER DETAILS -----" << endl;
    cout << "Length : " << length << " units" << endl;
    cout << "Width  : " << width << " units" << endl;
    cout << "Area   : " << area << " sq.units" << endl;
    cout << "Price  : Rs " << price << endl;
}



int main()
{
    VISION order1;
    VISION order2(30, 20);
    VISION order3(30.0f, 20.0f);

    cout << "\nDisplaying Original Objects:\n";
    order1.display();
    order2.display();
    order3.display();


    VISION copy1 = order1;
    VISION copy2 = order2;
    VISION copy3 = order3;

    cout << "\nDisplaying Copied Objects (using default copy constructor):\n";
    copy1.display();
    copy2.display();
    copy3.display();
}
