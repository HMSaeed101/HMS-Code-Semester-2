#include <iostream>
using namespace std;

class BOOK
{
    private:
    string title;
    string author;
    int price;

    public:
    void SetBookDetails();
    void DisplayBookDetails();

};

void BOOK :: SetBookDetails()
{
    cout << "Enter Title Name.\n";
    cin >> title;
    cout << "Enter Author Name\n";
    cin >> author;
    cout << "Price fo the Book?\n";
    cin >> price;
}

void BOOK :: DisplayBookDetails()
{
    cout << "Title : " << title << endl;
    cout << "Author Name : " << author << endl;
    cout << "Price : " << price << endl;
}

int main()
{
    BOOK book1, book2;
    book1.SetBookDetails();
    book2.SetBookDetails();

    book1.DisplayBookDetails();
    book2.DisplayBookDetails();

    return 0;
}