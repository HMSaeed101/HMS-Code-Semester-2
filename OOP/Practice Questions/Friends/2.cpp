#include <iostream>
using namespace std;

class RECTANGLE
{
    private:
    int width;
    int height;

    public:
    void set_values(int x, int y);

    int area()
    {return (width * height);}

    friend RECTANGLE duplicate(RECTANGLE);
};

void RECTANGLE :: set_values(int x, int y)
{
    width = x;
    height = y;
}

RECTANGLE duplicate( RECTANGLE _ )
{
    RECTANGLE obj_rect;
    obj_rect.width = _.width * 2;
    obj_rect.height = _.height * 2;
    return obj_rect;
}

int main()
{
    RECTANGLE rect_1, rect_2;

    rect_1.set_values(10, 3);
    cout << "Area : " << rect_1.area() << endl;

    rect_2 = duplicate(rect_1);
    cout << "Area : " << rect_2.area() << endl;

}
