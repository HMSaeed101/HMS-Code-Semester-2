// Hafiz Muhammad Saeed
// 25-CS-05
#include <iostream>
#include <string>
using namespace std;

class CAFESERVICE
{
    protected:
    int orderid;
    float price;

    public:
    CAFESERVICE()
    {
        orderid = 0;
        price = 0.0;
    }

    CAFESERVICE(int id, float p) : orderid(id), price(p) {}
};

class STAFFSERVICE : public CAFESERVICE
{
    float servicefee;
    int cabin;

    public:
    STAFFSERVICE(int id, float p, int fee, int c) : CAFESERVICE(id, p), servicefee(fee), cabin(c) {}

    float totalcharge() {return servicefee + price;}

    void display()
    {
        cout << "Order Id : " << orderid << endl;
        cout << "Price : " << price << endl;
        int charge = totalcharge();
        cout << "Total Charges : " << charge << endl;
    }
};

int main()
{
    STAFFSERVICE obj(101, 45.9, 32, 6);
    obj.display();
}
