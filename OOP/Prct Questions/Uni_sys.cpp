/*
* ============================================================
*  Students Management System
* ============================================================
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


/*========================================================*/
/* Section Divider
/*========================================================*/
void printDivider(const string& title = "")
{
    cout << endl << string(55, '-') << endl;
    if (!title.empty())
        {cout << "  " << title << endl << string(55, '-') << endl;}
}


/*========================================================*/
/* Base Class HUMAN
/*========================================================*/
#pragma region

class HUMAN{
private:
    string name, gender, idnumber;
    int age;

public:
HUMAN(const string& name, int age, const string& gender, const string& idnumber)
    : name(name), age(age), gender(gender), idnumber(idnumber)
    {}

virtual ~HUMAN() = default;

// Pure virtual so every derived class must define its own display
virtual void displayInfo() const {
    cout << left
    << "  Name   : " << name   << "" << endl
    << "  Age    : " << age    << "" << endl
    << "  Gender : " << gender << "" << endl
    << "  idnumber   : " << idnumber   << "" << endl;
}

// ── Getters ───────────────
    string getName()         const { return name;        }
    int getAge()             const { return age;         }
    string getGender()       const { return gender;      }
    string getidnumber()     const { return idnumber;    }

};
#pragma endregion



/*========================================================*/
/* Derived Class TEACHER
/*========================================================*/
#pragma region

class TEACHER : public HUMAN {
private:
    string employeeID;
    string department;
    double salary;
    string subjectsTaught[3];
    int subjectCount;

public:
// Constructor
TEACHER(const string& name,
        int age,
        const string& gender,
        const string& idnumber,
        const string& employeeID,
        const string& department,
        double salary)

    : HUMAN(name, age, gender, idnumber),
    employeeID(employeeID),
    department(department),
    salary(salary),
    subjectCount(0)
{
    // Zero-initialise the subjects array
    for (int i = 0; i < 3; ++i)
        subjectsTaught[i] = "";
}


// ── Override displayInfo ───────────────────────
void displayInfo() const override {

    cout << "  [TEACHER]" << endl ;
    HUMAN::displayInfo();
    cout << "  Emp ID  : " << employeeID  << endl
        << "  Dept    : " << department  << endl
        << "  Salary  : PKR " << fixed << setprecision(2)
        << salary << endl
        << "  Subjects: ";

    if (subjectCount == 0)
    {
        cout << "None assigned" << endl;
    }
    else
    {
        for (int i = 0; i < subjectCount; ++i)
        cout << subjectsTaught[i] << (i < subjectCount - 1 ? ", " : "\n");
    }
}

// ── Give a percentage raise ──────────────────────
void giveRaise(double percent) {
    if (percent <= 0)
    {   cout << "  [!] Raise percentage must be positive." << endl;
        return;
    }

    double increase = salary * (percent / 100.0);
    salary += increase;
    cout << "  [+] Raise of " << percent << "% applied → "
        << "New salary: PKR " << fixed << setprecision(2)
        << salary << "" << endl;
}

// ── Assign a subject (max 3) ──────────────────────────────
void assignSubject(const string& subject) {
    if (subjectCount >= 3)
    {
        cout << "  [!] Subject limit reached (max 3). " << "Cannot assign: " << subject << endl;
        return;
    }
    subjectsTaught[subjectCount++] = subject;
    cout << "  [+] Subject assigned: " << subject << endl;
}

// ── Getter ───────────────────────────────────────────
double getSalary() const { return salary; }


};
#pragma endregion



/*========================================================*/
/* Derived Class STUDENT
/*========================================================*/
#pragma region

class STUDENT : public HUMAN {
private:
    string rollNumber;
    string enrolledCourses[5];
    int courseCount, semester;
    float cgpa;

public:
STUDENT(const string& name,
    int age,
    const string& gender,
    const string& idnumber,
    const string& rollNumber,
    int semester,
    float cgpa)

    : HUMAN(name, age, gender, idnumber),
        rollNumber(rollNumber),
        semester(semester),
        cgpa(cgpa),
        courseCount(0)

    {
        for (int i = 0; i < 5; ++i)
        enrolledCourses[i] = "";
    }


// ── Override displayInfo ──────────────────────────────────
void displayInfo() const override {
    cout << "  [STUDENT]" << endl;
    HUMAN::displayInfo();
    cout << "  Roll No : " << rollNumber << "" << endl
    << "  Semester: " << semester   << "" << endl
    << "  CGPA    : " << fixed << setprecision(2)
    << cgpa << "" << endl
    << "  Courses : ";

    if (courseCount == 0)
    {   cout << "None enrolled" << endl;}

    else
    {
        for (int i = 0; i < courseCount; ++i)
        cout << enrolledCourses[i] << (i < courseCount - 1 ? ", " : "" "\n");
    }
}


// ── Enroll in a course (max 5) ────────────────────────────
void enrollCourse(const string& course) {
    if (courseCount >= 5)
    {
        cout << "  [!] Course limit reached (max 5). " << "Cannot enroll in: " << course << "" << endl;
        return;
    }
    enrolledCourses[courseCount++] = course;
    cout << "  [+] Enrolled in: " << course << "" << endl;
}


// ── Update CGPA with range validation ────────────────────
void updateCGPA(float newCGPA) {
    if (newCGPA < 0.0f || newCGPA > 4.0f)
    {
        cout << "  [!] Invalid CGPA (" << newCGPA << "). Must be between 0.0 and 4.0." << endl;
        return;
    }
    cgpa = newCGPA;
    cout << "  [+] CGPA updated to: " << fixed << setprecision(2) << cgpa << "" << endl;
}

};
#pragma endregion


/*========================================================*/
/* Main Program
/*========================================================*/

int main() {

cout << "UNIVERSITY MANAGEMENT SYSTEM" << endl;

// ── 1. Create objects ─────────────────────────────────────

STUDENT s1("Saeed Ahmed", 20, "Male", "35201-5556667-1",
            "F23-CS-001", 2, 3.45f);

STUDENT s2("Hina Malik", 21, "Female", "35201-7778889-0",
            "F23-CS-042", 2, 3.70f);

TEACHER t1("Dr. Ayesha Siddiqui", 45, "Female", "35201-1234567-8",
            "EMP-001", "Computer Science", 120000.0);

TEACHER t2("Prof. Bilal Raza", 52, "Male", "35202-9876543-2",
            "EMP-002", "Electrical Engineering", 135000.0);

// ── 2. Demonstrate giveRaise (before / after) ─────────────
printDivider("TEACHER — SALARY RAISE DEMO");

cout << "  Before raise:" << endl;
cout << "  Salary: PKR " << fixed << setprecision(2) << t1.getSalary() << "" << endl;
t1.giveRaise(15.0);


// ── 3. Assign subjects to teachers ────────────────────────
printDivider("TEACHER — SUBJECT ASSIGNMENT");

t1.assignSubject("Data Structures");
t1.assignSubject("Algorithms");
t1.assignSubject("OOP");

t2.assignSubject("Digital Logic Design");
t2.assignSubject("Circuit Analysis");
t2.assignSubject("Information and Communication Technology");


// ── 4. Enroll student in courses ─────
printDivider("STUDENT — COURSE ENROLLMENT");

s1.enrollCourse("CS-101 Programming Fundamentals");
s1.enrollCourse("CS-201 Data Structures");
s1.enrollCourse("EE-101 Basic Electronics");
s1.enrollCourse("MATH-101 Calculus");
s1.enrollCourse("HUM-101 English Composition");


// ── 5. Runtime Polymorphism via HUMAN* pointer array ──────

printDivider("RUNTIME POLYMORPHISM — HUMAN* ARRAY");

HUMAN* university[6] = { &t1, &t2, &s1, &s2, &st1, &st2 };

for (int i = 0; i < 6; ++i)
{
    cout << endl << " Person [" << (i + 1) << "]" << endl;
    university[i]->displayInfo();
}

return 0;
}
