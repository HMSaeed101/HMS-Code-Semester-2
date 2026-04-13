//! Phone Number
/*
a) A phone number, such as (92) 51-1234567 or (92) 300-1234567, can be thought of as having three parts to describe the phone number and one part to describe if it is landline number or mobile number:

The country code (92)
The city code (51) or mobile company code (300)
The number (1234567)
Number type (mobile or landline)

Your task is to create two classes namely number and computation.
Write a program that uses a class phoneNumber to store these four parts of a phone number and a class numberInfo compose of name, city and address and const function display to show the phone number and name. The phoneNumber class is friend of numberInfo class. Create setters and getters method individually for all the member variables.

Create three constructors as follows:
A nullary constructor that initializes the parts with default values and numberType with landline.
A parameterized constructor that will set the three parts of phone number i.e. countryCode, cityMobileCode, theNumber sent in parameters and numberType with landline.
A parameterized constructor that will set all four parts of phone number i.e. countryCode, cityMobileCode, theNumber, numberType and name as sent in parameters.

Design a friend function showPhoneInfo which will show the four parts of a phone number and name.
Store the name as a dynamic array data member.
Create a copy constructor that can copy all those attributes that remain the same for numberInfo class.

b) Draw UML diagram for each class (including states/attributes and behavior) and show relationship between these classes. (3)
*/
