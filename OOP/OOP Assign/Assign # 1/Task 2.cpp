
/*
Write a class called rectangle. Your task is to store the length and width of the rectangle. Write a member function called increment that will add 1 to the value of length and width. Also write a function that will compute the area of the rectangle. Finally write a constant function that will display the length, width and area of the rectangle.
*/

#include <iostream>
using namespace std;

class RECTANGLE
{
    private:
    float length;
    float width;

    public:
    void setlength(float _)
    {length=_;}

    void setwidth(float _)
    {width=_;}

    increment()
    {   length++;
        width++;}

    float calc_area()
    {   return length * width;}

    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        float area = calc_area();
        cout << "Area : " << area << endl;
    }
};

int main()
{
    RECTANGLE one;
    one.setlength(2.4);
    one.setwidth(1.9);
    one.display();

    cout << "___________________________"<< endl;

    one.increment();
    one.display();
}
