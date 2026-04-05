#include <iostream>
#include <cmath>
using namespace std;

class EQUATION {
private:
    int a, b, c;
    float proot, nroot;

public:
    // Nullary constructor
    EQUATION()
    {
        a = 1;
        b = -3;
        c = 2;
        proot = 0.0;
        nroot = 0.0;
    }

    friend void calc_roots(EQUATION &eq);
    friend void displayRoots(EQUATION eq);
};


void calc_roots(EQUATION &obj) {
    float discriminant = obj.b * obj.b - 4 * obj.a * obj.c;

    if (discriminant < 0)
    {
        cout << "Roots are complex, cannot calculate real roots." << endl;
        return;
    }

    obj.proot = (-obj.b + sqrt(discriminant)) / (2 * obj.a);
    obj.nroot = (-obj.b - sqrt(discriminant)) / (2 * obj.a);
}

void displayRoots(EQUATION eq)
{
    cout << "Positive root: " << eq.proot << endl;
    cout << "Negative root: " << eq.nroot << endl;
}

int main() {
    EQUATION eq1;

    calc_roots(eq1);
    displayRoots(eq1);

    return 0;
}
