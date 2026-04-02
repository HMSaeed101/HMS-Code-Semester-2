#include <iostream>
using namespace std;

class NUMBERS
{
private:
    int size;
    int* arr; // using array pointer instead of simple array

public:
    // Constructors
    NUMBERS(int s)
    {
        size = s;
        arr = new int[size]; // Dynamic mem alloc
    }

    NUMBERS(const NUMBERS &obj)
    {
        size = obj.size;
        arr = new int[size];          // allocate new memory

        for(int i = 0; i < size; i++)
        {
            arr[i] = obj.arr[i];      // copy each element
        }
    }

    void setValues()
    {
        for(int i = 0; i < size; i++){arr[i] = i + 1;}
    }

    void display()
    {
        for(int i = 0; i < size; i++)
        {cout << arr[i] << " ";}
        cout << endl;
    }

    void modify()
    {
        arr[0]= 999;
    }

    ~NUMBERS()
    {
        delete[] arr; // free memory
    }
};

int main()
{
    NUMBERS obj_1(5);
    obj_1.setValues();
    obj_1.display();

    NUMBERS obj_2 = obj_1;
    obj_2.display();

    NUMBERS obj_3 = obj_1;
    obj_3.display();

    obj_3.modify();
    obj_3.display();
}
