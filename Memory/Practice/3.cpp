#include <iostream>
using namespace std;

int main()
{
    char *ptr_grade = NULL;

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    ptr_grade = new char[size];

    for(int i=0; i<size; i++)
    {
        cout << "Enter Grade # " << i+1 << " : ";
        cin >> ptr_grade[i];
    }

    for(int i=0; i<size; i++)
    {
        cout << "Grade # " << i+1 << "  " << ptr_grade[i];
        cout << endl;
    }

    cout << endl;
    cout << "Address : " << ptr_grade << endl;
    cout << "Value : " << *ptr_grade;

    delete[] ptr_grade;

    ptr_grade = nullptr;

    cout << endl;
    cout << "Address : " << ptr_grade << endl;
    cout << "Value : " << *ptr_grade;

}
