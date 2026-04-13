//! Library Management System

#include <iostream>
using namespace std;

class BOOK
{
    string title;
    sting author;
    int price;

    void display_details()
    {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: $" << price << "\n";

        display_details();
    }
}

int main()
{

}
