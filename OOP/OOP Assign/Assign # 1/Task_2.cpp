/*
Hafiz Muhammad Saeed
25-CS-005
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
