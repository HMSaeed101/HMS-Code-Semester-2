// Your task is to create a class called examination. The class has data members duration, credit_hours, course title, month, date, year and time. Your task is to create the individual member functions and call them using the class constructor. Be very vigilant in determining the access specifiers for the data members and member functions.

#include <iostream>
using namespace std;

class EXAMINATION
{
private:
    int duration;
    int credit_hours;
    int date;
    int year;
    int time;
    string course_title;
    string month;

public:
EXAMINATION(int du, int c, int da, int y, int t, string cr, string m)
{
    set_duration(du);
    set_credit_hours(c);
    set_date(da);
    set_year(y);
    set_time(t);
    set_course_title(cr);
    set_month(m);
}

void set_duration(int _){duration = _;}

void set_credit_hours(int _){credit_hours = _;}

void set_date(int _){date = _;}

void set_year(int _){year = _;}

void set_time(int _){time = _;}

void set_month(string _){month = _;}

void set_course_title(string _){course_title = _;}

void display()
{
    cout << "Examination Details" << endl;
    cout << "Course Title : " << course_title << endl;
    cout << "Credit Hours : " << credit_hours << endl;
    cout << "Duration : " << duration << endl;
    cout << "Date : " << date << month << year << endl;
    cout << "Time : " << time << endl;
}

};

int main()
{
    EXAMINATION exam_one(120, 3, 10, 2026, 9, "OOP", "April");
    exam_one.display();
}
