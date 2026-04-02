#include <iostream>
using namespace std;

class STUDENT
{
private:

    int age;
    long long cnic;
    int semester;
    string name;

public:

    void set_all(int a, long long c, int s, string n)
    {
        age = a;
        cnic = c;
        semester = s;
        name = n;
    }

    void display()
    {
        cout << "___________________________" << endl;
        cout << "The entered data is ";
        data();
    }

    void data()
    {
        cout << endl;
        cout << "Age : " << age << endl;
        cout << "CNIC : " << cnic << endl;
        cout << "Semester : " << semester << endl;
        cout << "Name : " << name << endl;
    }

};


int main( )
{
    STUDENT std_1;

    int a, s;
    long long c;
    string n;
    cout << "Enter your age : ";
    cin >> a;
    cout << "Enter your CNIC : ";
    cin >> c;
    cout << "Enter your Semester : ";
    cin >> s;
    cout << "Enter your Name : ";
    cin >> n;

    std_1.set_all(a, c, s, n);
    std_1.display();
}
