
/*
Hafiz Muhammad Saeed
25-CS-005
*/

#include <iostream>
#include <string>
using namespace std;

class ORDER
{
private:
    string flavor;
    int price = 0;
    int scoops = 0;
    bool is_wafer = false;

public:
    void set_flavor(int choice);
    void set_scoops(int choice);
    void set_is_wafer(int choice);
    void calc_price();
    void display();
    ~ORDER(){cout << "Thank You for your Purchase." << endl;}
};


//! Functions ----------------------------------------------

void ORDER :: set_flavor(int choice)
{
    switch(choice)
    {
        case 1:
        flavor = "Almond_Crunch";
        break;

        case 2:
        flavor = "Tutti Fruity";
        break;

        case 3:
        flavor = "Strawberry";
        break;

        case 4:
        flavor = "Chocolate";
        break;

        case 5:
        flavor = "Vanilla";
        break;

        case 6:
        flavor = "Coffee";
        break;

        case 7:
        flavor = "Mango";
        break;

        default:
        flavor = "Invalid";
        break;
    }
}

void ORDER :: set_scoops(int choice)
{scoops = choice;}

void ORDER :: set_is_wafer(int choice)
{
    if(choice==1)
    {
        is_wafer = true;
    }
    else is_wafer = false;
}

void ORDER :: calc_price()
{
    int init_price = 0;
    if(flavor == "Chocolate")
    {
        if(scoops==2){init_price = 120;}
        if(scoops==3){init_price = 180;}
    }
    else
    {
        if(scoops==2){init_price = 100;}
        if(scoops==3){init_price = 150;}
    }
    if(is_wafer){init_price += 10;}
    price = init_price;
}

void ORDER :: display()
{
    cout << endl << "_____YOUR ORDER_____" << endl;
    cout << "Flavor : " << flavor << endl;
    cout << "Scoops : " << scoops << endl;
    cout << "Total Price : Rs " << price << endl;
    cout << "Wafer : " << (is_wafer ? "Yes" : "No") << endl;
}
//!----------------------------------------------------------


int main()
{
    int flavor_choice, scoops_choice, is_wafer_choice;

    cout << " -------------- LeCream -------------- " << endl << endl;
    cout << " -------------- MENU -------------- " << endl;
    cout << "------------------------------------" << endl;

    do
    {
        cout << "--> Choose the Icecream Flavour" << endl;
        cout << "1. Almond Crunch " << endl;
        cout << "2. Tutti Fruity " << endl;
        cout << "3. Strawberry " << endl;
        cout << "4. Chocolate " << endl;
        cout << "5. Vanilla " << endl;
        cout << "6. Coffee " << endl;
        cout << "7. Mango " << endl;
        cout << "------------------------------------" << endl;
        cin >> flavor_choice;

        if(flavor_choice > 7 || flavor_choice < 1)
        {
            cout << "Invalid Choice. Try Again !!!" << endl;
        }
    }
    while(flavor_choice > 7 || flavor_choice < 1);


    do
    {
        cout << "------------------------------------" << endl;
        cout << "--> How many Scoops ? (can't be more than 3)" << endl;
        cout << "Quantity" << "          Price" << endl;
        cout << "2                100 Rs-" << endl;
        cout << "3                150 Rs-" << endl;
        cout << "------------------------------------" << endl;

        cin >> scoops_choice;

        if(scoops_choice > 3)
        {
            cout << "Invalid Choice. Try Again !!!" << endl;
        }
    }
    while(scoops_choice > 3);


    cout << "------------------------------------" << endl;
    cout << "--> Do you want Vanilla Wafers On Top"<< endl;
    cout << "1. Yes                +10 Rs-" << endl;
    cout << "2. NO" << endl;

    if(is_wafer_choice != 1 && is_wafer_choice != 2)
    {
        cout << "Invalid input. Assuming No wafer." << endl;
        is_wafer_choice = 2;
    }

    cout << "------------------------------------" << endl;
    cin >> is_wafer_choice;





    ORDER order_1;
    order_1.set_flavor(flavor_choice);
    order_1.set_scoops(scoops_choice);
    order_1.set_is_wafer(is_wafer_choice);
    order_1.calc_price();
    order_1.display();

}

