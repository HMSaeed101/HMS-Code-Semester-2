/*
Hafiz Muhammad Saeed
25-CS-005
*/
#include <iostream>
using namespace std;

class LAPTOP
{
    private:
    string brand;
    string model;
    string color;
    int serial;
    int RAM;
    float price;
    float processor_speed;
    float screen_size;

    public:
    void setbrand(string _)
    {brand=_;}

    void setmodel(string _)
    {model=_;}

    void setcolor(string _)
    {color=_;}

    void setserial(int _)
    {serial=_;}

    void setRAM(int _)
    {RAM=_;}

    void setprice(float _)
    {price=_;}

    void setprocessor_speed(float _)
    {processor_speed=_;}

    void setscreen_size(float _)
    {screen_size=_;}

    // RAM function
    void upgrade_RAM(int _)
    {RAM += _;}

    // Display Info
    void display()
    {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Colour : " << color << endl;
        cout << "Serial : " << serial << endl;
        cout << "RAM : " << RAM << endl;
        cout << "Price : $ " << price << endl;
        cout << "Processor Speed : " << processor_speed << " GHz" << endl;
        cout << "Screen Size : " << screen_size << endl;
    }
};

int main()
{
    LAPTOP HMSLaptop;

    HMSLaptop.setbrand("Dell");
    HMSLaptop.setmodel("1565D");
    HMSLaptop.setcolor("Silver");
    HMSLaptop.setserial(123456);
    HMSLaptop.setRAM(2);
    HMSLaptop.setprice(64500.5);
    HMSLaptop.setprocessor_speed(2.8);
    HMSLaptop.setscreen_size(15.6);

    HMSLaptop.upgrade_RAM(3);

    HMSLaptop.display();

}
