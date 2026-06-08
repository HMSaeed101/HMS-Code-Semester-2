// Hafiz Muhammad Saeed
// 25-CS-005

#include <iostream>
using namespace std;

class BOX
{
    public:
    int volume;

    BOX(){volume = 0;}
    BOX(int v){volume = v;}

    bool operator< (const BOX& obj)
    {
        return volume < obj.volume;
    }

    bool operator> (const BOX& obj)
    {
        return volume > obj.volume;
    }

};

int main()
{
    BOX box1(50);
    BOX box2(20);

    if(box1 > box2)
    {
        cout << "Box 1 is larger.";
    }
    if(box1 < box2)
    {
        cout << "Box 2 is larger.";
    }
}
