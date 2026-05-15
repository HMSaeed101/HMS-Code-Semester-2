// Hafiz Muhammad Saeed (25-CS-005)

#include <iostream>
#include <cmath>
using namespace std;

class EQUATION
{
    friend void calc_root(EQUATION &obj);
    friend void display_root(EQUATION &obj);

    private:
    int a, b, c;
    float pos_root, neg_root;

    public:
    EQUATION()
    {
        a = 0;
        b = 0;
        c = 0;
        pos_root = 0.0;
        neg_root = 0.0;
    }

    void set_values(int a, int b, int c);
};

void EQUATION :: set_values(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}

void calc_root(EQUATION &obj)
{
    float disc = obj.b * obj.b - 4 * (obj.a * obj.c);

    if(disc<0)
    {
        cout << "Roots are complex, can't calculate real roots." << endl;
        return;
    }

    obj.pos_root = (-obj.b + sqrt(disc)) / (2 * obj.a);
    obj.neg_root = (-obj.b - sqrt(disc)) / (2 * obj.a);
}

void display_root(EQUATION &obj)
{
    cout << "Positive Root : " << obj.pos_root << endl;
    cout << "Negative Root : " << obj.neg_root << endl;
}


int main()
{
    EQUATION eq;
    eq.set_values(1,2,-3);

    calc_root(eq);
    display_root(eq);

}
