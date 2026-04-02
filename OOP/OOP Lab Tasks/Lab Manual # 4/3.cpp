#include <iostream>
using namespace std;

class RECTANGLE
{
    private:
    float length, width;

    public:
    void SetValues();
    void CalculateArea();
    void CalculatePerimeter();
};

void RECTANGLE :: SetValues()
{
    cout << "Enter Length of the rectangle.\n ";
    cin >> length;
    cout << "Enter Width of the rectangle.\n ";
    cin >> width;
}

void RECTANGLE :: CalculateArea()
{
    float area;
    area = length * width ;
    cout << "Area : " << area << endl;
}

void RECTANGLE :: CalculatePerimeter()
{
    float perimeter;
    perimeter = 2 * (length + width) ;
    cout << "Perimeter : " << perimeter <<  endl;
}


int main ()
{
    RECTANGLE rect;
    rect.SetValues();
    rect.CalculateArea();
    rect.CalculatePerimeter();

    return 0;
}