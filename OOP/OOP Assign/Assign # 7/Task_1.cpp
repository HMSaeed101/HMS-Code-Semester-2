#include <iostream>
#include <string>
using namespace std;

class NOTEBOOK
{
    protected:
    int id;
    string name;

    public:
    NOTEBOOK(){id = 000; name="Unknown";}
    NOTEBOOK(int id, string n) : id(id), name(n) {}

    void setid(int _id){id = _id;}
    void setname(string n) {name = n;}

    void getid(){cout << "ID : " << id << endl;}
    void getname(){cout << "Name : " << name << endl;}

};

class ENOTEBOOK : public NOTEBOOK
{
    int size;

    public:
    ENOTEBOOK(int id, string n) : NOTEBOOK(id, n) {}
    void setsize(int s){size = s;}
    void display()
    {
        cout << "Manufacture ID : " << id << endl;
        cout << "Manufacturer Name : " << name << endl;
        cout << "Size : " << size << endl;
    }

};

class PAPERNOTEBOOK : public NOTEBOOK
{
    int totalpages;

    public:
    PAPERNOTEBOOK(int id, string n) : NOTEBOOK(id, n) {}
    void settotalpages(int t){totalpages = t;}
    void display()
    {
        cout << "Manufacture ID : " << id << endl;
        cout << "Manufacturer Name : " << name << endl;
        cout << "Total Pages : " << totalpages << endl;
    }
};


int main()
{
    ENOTEBOOK e1(101, "Dell");
    PAPERNOTEBOOK p1(202, "Moleskine");

    e1.setsize(15);
    p1.settotalpages(200);

    cout << "--- Digital Notebook Info ---" << endl;
    e1.display();

    cout << "--- Paper Notebook Info ---" << endl;
    p1.display();
}
