// Hafiz Muhammad Saeed (25-CS-005)

#include <iostream>
using namespace std;

class COMPUTATION;
class NUMBER
{
    friend class COMPUTATION
    friend void display();

    private:
    float a, b, c ;
};

void display()
{
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
}

class COMPUTATION
{
    public:
    float sq_sums()
    {

    }

    float sq_diff()
    {

    }

    int mean()
    {
        
    }
};
