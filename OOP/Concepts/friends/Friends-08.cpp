#include <iostream>
using namespace std;


class SERIES
{
    friend class SUM;
    friend void display(SERIES);

    private:
    int first;
    int last_term;
    int num_of_terms;
    int sumn;

    public:
    SERIES(int f, int n, int e)
    {
        first = f;
        last_term = n;
        num_of_terms = e;
    }

};

class SUM
{
    public:
    void series_sum(SERIES &obj)
    {
        obj.sumn = (obj.num_of_terms)*(obj.first + obj.last_term) / 2;
    }
};


void display(SERIES obj)
{
    cout << "The sum of SERIES is " << obj.sumn << endl;
}


int main()
{
    SERIES obj1(6,96,31);

    SUM obj2;
    obj2.series_sum(obj1);
    display(obj1);

    system ("pause");
    return 0;
}

