//! Phone Number
/*

a) A phone number, such as (92) 51-1234567 or (92) 300-1234567, can be thought of as having three parts to describe the phone number and one part to describe if it is landline number or mobile number:

country code (92)
city code (51) or mobile company code (300)
number (1234567)
Number type (mobile or landline)

Your task is to create two classes namely number and computation

Class phoneNumber to store these four parts of a phone number
Class numberInfo compose of name, city and address and const function display to show the phone number and name.
The phoneNumber class is friend of numberInfo class. Create setters and getters method individually for all the member variables.

Create three constructors as follows:
A nullary constructor that initializes the parts with default values and numberType with landline.
A parameterized constructor that will set the three parts of phone number i.e. countryCode, cityMobileCode, theNumber sent in parameters and numberType with landline.
A parameterized constructor that will set all four parts of phone number i.e. countryCode, cityMobileCode, theNumber, numberType and name as sent in parameters.

Design a friend function showPhoneInfo which will show the four parts of a phone number and name.
Store the name as a dynamic array data member.
Create a copy constructor that can copy all those attributes that remain the same for numberInfo class.

b) Draw UML diagram for each class (including states/attributes and behavior) and show relationship between these classes. (3)
*/

#include <iostream>
#include <string>
using namespace std;

enum NUM = {mobile, landline};

class PHONENUMBER()
{
    private:
    int ccode, ct_code;
    long int number;
    NUM num_type;

    public:
    PHONENUMBER()
    {
        ccode = 92;
        ct_code = 0000;
        number = 123456;
        num_type = ####### ;
        //! ERROR
    }
    PHONENUMBER(int cc, int ctc, long int num)
    {
        ccode = cc;
        ct_code = ctc;
        number = num;
        num_type = #####;
    }
    PHONENUMBER(int cc, int ctc, long int num, #####)
    {
        ccode = cc;
        ct_code = ctc;
        number = num;
        num_type = #####;
    }
};


class NUMBERINFO()
{
    private:
    char* name[];
    string city, address;

    public:
    friend class PHONENUMBER;
    friend void showPhoneInfo(const phoneNumber& ph, const numberInfo& info);

    // Default Constructor
    NUMBERINFO()
    {
        name = new char[8];
        strcpy(name, "Unknown");
        city = "";
        address = "";
    }

    // Copy Constructor
    NUMBERINFO(NUMBERINFO& source)
    {
        if(source.name) {
            name = new char[strlen(source.name) + 1];
            strcpy(name, source.name);
        } else {name = nullptr;}
        city = source.city;
        address = source.address;
    }

    // Parametrized Constructor
    NUMBERINFO(const char* n, string ct, string add)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        city = ct;
        address = add;
    }

    ~NUMBERINFO()
    {
        delete[] name;
    }

    void display const()
    {
        cout << "Display Member Function" << endl;
        cout << "Name : " << (name : name ? "NONE") << endl;
        cout << "Phone Number : " << phonenumber<< endl;
    }

    // Getters and Setters
    void setname(const char* n)
    {
        delete[] name;
        name = new [strlen(n) + 1];
        name = n;
    }
    const char* getname(){return name;}

    void setname(string _city){city = _city;}
    string getcity(){return city;}

    void setname(string _address){address = _address;}
    string getaddress(){return address;}
};


void showPhoneInfo(const phoneNumber& ph, const numberInfo& info)
{
    cout << "========== Phone Number Information ==========" << endl;
    cout << "Name : " << endl;
    cout << "Phone Number : " << endl;
    cout << "City : " << endl;
    cout << "Address : " << endl;
}
