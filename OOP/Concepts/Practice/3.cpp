//! Phone Number
/*

a) A phone number, such as (92) 51-1234567 or (92) 300-1234567, can be thought of as having three parts to describe the phone number and one part to describe if it is landline number or mobile number:

country code (92)
city code (51) or mobile company code (300)
number (1234567)
Number type (mobile or landline)

Your task is to create two classes namely number and computation

Class phoneNumber to store these four parts of a phone number
Class numberInfo compose of name, city and address and const function display to show the phone number and name
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

class NUMBER();
class COMPUTATION();


class PHONENUMBER()
{
    private:
    int country_code, city_code;
    long int number;
    NUM num_type;

    public:
    PHONENUMBER()
    {
        country_code = 92;
        city_code = 0000;
        number = 123456;
        num_type = ####### ;
        //! ERROR
    }
    PHONENUMBER(int cc, int ctc, long int num)
    {
        country_code = cc;
        city_code = ctc;
        number = num;
        num_type = #####;
    }
    PHONENUMBER(int cc, int ctc, long int num, #####)
    {
        country_code = cc;
        city_code = ctc;
        number = num;
        num_type = #####;
    }
};


class NUMBERINFO()
{
    private:
    string name, city, address;

    public:
    friend class PHONENUMBER();
    void display const()
    {
        cout << "Name : " << name << endl;
        cout << "Phone Number : " << phonenumber<< endl;
    }

    void setname(string _name){name = _name;}
    void setname(string _city){city = _city;}
    void setname(string _address){address = _address;}

    string getname(){return name;}
    string getcity(){return city;}
    string getaddress(){return address;}
};

function showPhoneInfo()
{

}

