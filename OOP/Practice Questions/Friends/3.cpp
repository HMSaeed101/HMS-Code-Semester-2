#include <iostream>
using namespace std;

class SQUARE;

class RECTANGLE
{
    private:
    int width;
    int height;

    public:
    int area()
    {return (width * height);}

    void convert(SQUARE a);

};

class SQUARE
{
    private:
    int side;

    public:
    void set_side(int _)
    {
        side = _;
    }

    friend class RECTANGLE;
};

void RECTANGLE :: convert(SQUARE a)
{
    width = a.side;
    height = a.side;
}

int main()
{
    SQUARE sqr_1;
    RECTANGLE rect_1;

    sqr_1.set_side(5);

    rect_1.convert(sqr_1);

    cout << "Area : " << rect_1.area() << endl;
}
