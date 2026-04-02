//! In Progress ...
/*
Write a C++ program that creates a program for a new ice cream vendor called LeCream. The management of
LeCream has decided that they are going to sell their ice cream in 7 different flavours namely chocolate, vanilla, strawberry, mango, tutti fruit, almond crunch and coffee.

Carefully design the program by observing the following rules.

• SCOOPS __ LeCream is charging Rs 100 for two scoops and Rs 150 for three scoops. Hence you will need a function to determine the number of scoops and based on that the price. If a user enters more than three scoops your program should display invalid input and it should exit.

• VANILLA WAFER __ LeCream allows its customers to purchase a vanilla wafer with their ice cream. If the customer wants to purchase the wafer he will have to pay an additional Rs 10. This amount should be added to the total amount payable by the user.

• FLAVORED ICE CREAMS __ If the customer asks for chocolate flavour then he will have to pay an additional amount i.e. Rs 120 for two scoops and Rs 180 for three scopes. Design a function that will be called if the customer chooses flavoured ice cream.

• MENU DISPLAY __ The program should show a menu that asks the customer for his requirements and then displays the final payable amount with full details about the flavour, number of scoops and wafer.

• THANKYOU MESSAGE ~DESTRUCTOR __ In the end create a class destructor that displays a thank you message to the user.
*/

#include <iostream>
using namespace std;

class ORDER
{

private:

    char flavor;
    int price;
    int scoops;
    bool is_wafer;


public:

    bool set_is_wafer()
    {
        is_wafer =
    }

    int calc_price()
    {

        return price;
    }


    void display_Order()
    {
        cout << "_____YOUR ORDER_____" << endl;
        cout << "Flavor : " << ? << endl;
        cout << "Scoops : " << ? << endl;
        cout << "Price : " << ? << endl;
    }


    ~ICE_CREAM()
    {
        cout << "Thank You for your Purchase." << endl;
    }

};


int main()
{
    int flavor_choice, scoops_choice, is_wafer_choice;

    cout << " *** _____ LeCream _____ *** " << endl << endl;

    cout << " ### MENU ### " << endl;

    cout << "Choose the Icecream Flavour";
    cout << "1. Almond Crunch " << endl;
    cout << "2. Tutti Fruity " << endl;
    cout << "3. Strawberry " << endl;
    cout << "4. Chocolate " << endl;
    cout << "5. Vanilla " << endl;
    cout << "6. Coffee " << endl;
    cout << "7. Mango " << endl;

    cin >> flavor_choice;

    cout << "How many Scoops ? (can't be > 3)";
    cout << "Quantity" << "          Price";
    cout << "2                ( 100 Rs- )" << endl;
    cout << "3                ( 150 Rs- )" << endl;

    cin >> scoops_choice;

    cout << "Do you want Vanilla Wafers On Top"<< endl;
    cout << "1. Yes !!!      ( +10 Rs- )" << endl;
    cout << "2. NO ..." << endl;

    cin >> is_wafer_choice;

}

