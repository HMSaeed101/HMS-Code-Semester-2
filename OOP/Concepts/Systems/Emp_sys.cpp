// Employees

#include <iostream>
using namespace std;

// ===================== Encapsulation =====================
class Person {
private:
    string name;
    int age;

public:
    // Constructor overloading
    Person() : name("Unknown"), age(0) {}
    Person(string n, int a) : name(n), age(a) {}

    void setName(string n) { name = n; }
    void setAge(int a) {
        if (a >= 0) age = a;
    }

    string getName() const { return name; }
    int getAge() const { return age; }

    void showInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// ===================== Inheritance + Run‑time Polymorphism =====================
class Employee : public Person {
private:
    string role;
    double salary;

public:
    Employee(string n, int a, string r, double s)
        : Person(n, a), role(r), salary(s) {}

    // virtual allows run‑time polymorphism
    virtual void work() const {
        cout << getName() << " is working as " << role << endl;
    }

    void showInfo() const {
        Person::showInfo();
        cout << "Role: " << role << ", Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    Manager(string n, int a, double s)
        : Employee(n, a, "Manager", s) {}

    void work() const override {
        cout << getName() << " is managing the team.\n";
    }
};

// ===================== Abstraction (Abstract Class) =====================
class Shape {
public:
    virtual double area() const = 0;  // pure virtual → abstract
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double w, double h) : w(w), h(h) {}
    double area() const override { return w * h; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double r) : r(r) {}
    double area() const override { return 3.14159 * r * r; }
};

// ===================== Compile‑time Polymorphism (Overloading) =====================
class Complex {
    double re, im;
public:
    Complex(double r = 0, double i = 0) : re(r), im(i) {}

    // Function overloading
    void set(double r) { re = r; im = 0; }
    void set(double r, double i) { re = r; im = i; }

    // Operator overloading
    Complex operator+(const Complex& other) const {
        return Complex(re + other.re, im + other.im);
    }

    void print() const {
        cout << re << " + " << im << "i";
    }
};

int main() {
    cout << "=== Encapsulation Example ===\n";
    Person p("Ali", 20);
    p.showInfo();

    cout << "\n=== Inheritance & Run‑time Polymorphism ===\n";
    Employee e("Ahmed", 25, "Developer", 60000);
    Manager m("Usman", 30, 90000);
    e.showInfo();
    e.work();
    m.showInfo();
    m.work();

    cout << "\n=== Abstraction with Shapes ===\n";
    Shape* s1 = new Rectangle(4, 5);
    Shape* s2 = new Circle(3);
    cout << "Rectangle area: " << s1->area() << endl;
    cout << "Circle area: " << s2->area() << endl;
    delete s1;
    delete s2;

    cout << "\n=== Compile‑time Polymorphism (Overloading) ===\n";
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2;     // operator+
    c3.print();
    cout << endl;

    return 0;
}
