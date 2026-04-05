// Hafiz Muhammad Saeed (25-CS-005)

#include <iostream>
using namespace std;


class NUMBER
{
    friend class COMPUTATION;
    friend void display(NUMBER &obj);

    private:
    float a, b, c ;

    public:
    NUMBER(float a, float b, float c) : a(a), b(b), c(c) {}
};


class COMPUTATION
{
    public:
    float sq_sums(NUMBER &obj)
    {
        return (obj.a + obj.b + obj.c) * (obj.a + obj.b + obj.c);
    }

    float sq_diff(NUMBER &obj)
    {
        return (obj.a - obj.b - obj.c) * (obj.a - obj.b - obj.c);
    }

    float mean(NUMBER &obj)
    {
        return (obj.a + obj.b + obj.c) / 3;
    }
};


void display(NUMBER &obj)
{
    cout << "a : " << obj.a << endl;
    cout << "b : " << obj.b << endl;
    cout << "c : " << obj.c << endl;
}


int main()
{
    NUMBER num1(1,2,3);
    display(num1);

    COMPUTATION compt;

    cout << "Square of Sums : " << compt.sq_sums(num1) << endl;
    cout << "Square of Difference : " << compt.sq_diff(num1) << endl;
    cout << "Mean : " << compt.mean(num1) << endl;

}
