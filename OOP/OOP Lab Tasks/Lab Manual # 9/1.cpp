/*
Hafiz Muhammad Saeed 25-CS-05
*/

#include <iostream>
#include <string>
using namespace std;

class ORDER
{
    protected:
    string name;
    int orderid;
    int totalamount;

    public:
    ORDER(string n, int id, int amount)
    {
        name = n;
        orderid = id;
        totalamount = amount;
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Order ID : " << orderid << endl;
        cout << "Total Amount : " << totalamount << endl;
    }
};

class SHIPPEDORDER : public ORDER
{
    protected:
    int trackingorder;
    string couriername;

    public:
    SHIPPEDORDER(string n, int id, int amount, int tr, string crn) : ORDER(n, id, amount)
    {
        trackingorder = tr;
        couriername = crn;
    }
    void display()
    {
        cout << "Tracking Order : " << trackingorder << endl;
        cout << "Courier Name : " << couriername << endl;
    }
};

class DELIVEREDORDER : public SHIPPEDORDER
{
    int deliverydate;
    int rating;

    public:
    DELIVEREDORDER(string n, int id, int amount, int tr, string crn, int dd, int rat) : SHIPPEDORDER(n, id,amount, tr, crn)
    {
        deliverydate = dd;
        rating = rat;
    }

    bool isDeliveredOnTime(int _date)
    {
        if(_date > deliverydate)    {return false;}
        else {return true;}
    }

    void display()
    {
        cout << "Delivery Date : " << deliverydate << endl;
        cout << "Rating : " << rating << endl;
    }
};


int main()
{
    ORDER order1("Saeed", 505, 2300);
    SHIPPEDORDER order2("Saeed", 505, 2300, 101, "Leopard");
    DELIVEREDORDER order3("Saeed", 505, 2300, 101, "Leopard", 23, 3);

    order1.display();
    order2.display();
    order3.display();
}
