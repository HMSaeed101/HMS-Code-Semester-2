// Write a program that creates a class called PIZZA. The data members of the class are size, toppings, price, thickness, extra toppings. Through the use of a constructor initialize the class object. Determine what is public and private in the class.

#include <iostream>
using namespace std;

class PIZZA
{

private:
    int size, price, thickness;
    string topping;

public:

    PIZZA()
    {
        setsize();
        setprice();
        setthickness();
        settopping();
    }

    void setsize()
    {
        cout << "Enter size of PIZZA: ";
        cin >> size;
    }

    void setprice()
    {
        cout << "Enter price of PIZZA: ";
        cin >> price;
    }

    void setthickness()
    {
        cout << "Enter thickness of PIZZA: ";
        cin >> thickness;
    }

    void settopping()
    {
        cout<<"Enter toppings of PIZZA: ";
        cin>>topping;
    }

    void display() const
    {
        cout << endl;
        cout << "The ordered PIZZA details are: ";
        cout << "\nSize: "<<size;

        cout<<"\nPrice: "<<price;

        cout<<"\nTopping:"<<topping;

        cout<<"\nThickness:"<<thickness<<"\n";
    }

};


int main()
{
    PIZZA obj;
    obj.display( );
}
