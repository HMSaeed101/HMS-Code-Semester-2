/*Hafiz Muhammad Saeed 25-CS-05*/
/* Create a multilevel inheritance structure to model an e-commerce order processing system. Begin with a base class called Order that contains attributes such as orderID, customerName, and totalAmount. Derive a class named ShippedOrder from Order that adds trackingNumber and courierName as additional attributes. Further derive a class called DeliveredOrder from ShippedOrder that includes deliveryDate and ratingByCustomer.
You need to create objects of all three classes, set their attribute values, and display the information.
For the DeliveredOrder class, write a method named isDeliveredOnTime() that takes an expected delivery date as a parameter and compares it with the actual delivery date, returning true if the order was delivered on or before the expected date, and false otherwise*/

#include <iostream>
#include <string>
#include <iomanip>
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
        cout << "========= Order Details =========\n";
        cout << left << setw(15) << "Name" << " : " << right << setw(15) << name << endl;
        cout << left << setw(15) << "Order ID" << " : " << right << setw(15) << orderid << endl;
        cout << left << setw(15) << "Total Amount" << " : " << right << setw(15) << totalamount << endl;
    }
};

class SHIPPEDORDER : public ORDER
{
    protected:
    int trcorder;
    string courier;

    public:
    SHIPPEDORDER(string n, int id, int amount, int tr, string crn) : ORDER(n, id, amount) ,trcorder(tr), courier(crn){}

    void display()
    {
        ORDER :: display();
        cout << left << setw(15) << "Tracking Order" << " : " << right << setw(15) << trcorder << endl;
        cout << left << setw(15) << "Courier Name" <<  " : " << right << setw(15) << courier << endl;
    }
};

class DELIVEREDORDER : public SHIPPEDORDER
{
    int deldate;
    int rating;

    public:
    DELIVEREDORDER(string n, int id, int amount, int tr, string crn, int dd, int rat) : SHIPPEDORDER(n, id,amount, tr, crn), deldate(dd), rating(rat) {}

    bool isDeliveredOnTime(int _date)
    {
        return deldate <= _date;
    }

    void display()
    {
        SHIPPEDORDER :: display();
        cout << left << setw(15) << "Delivery Date" << " : " << right << setw(15) << deldate << endl;
        cout << left << setw(15) << "Rating" << " : " << right << setw(13) << rating << "/5" << endl;
    }
};


int main()
{
    ORDER o1("Saeed", 505, 2300);
    o1.display();
    cout << endl;

    SHIPPEDORDER o2("Ali", 602, 1500, 101, "Leopard");
    o2.display();
    cout << endl;

    int expected = 25;
    DELIVEREDORDER o3("Hafiz", 707, 5000, 152, "TCS", 23, 5);
    o3.display();

    if (o3.isDeliveredOnTime(expected)) {cout << "Status: ORDER delivered on time!" << endl;}

    else {cout << "Status: ORDER was delayed." << endl;}

    return 0;
}
