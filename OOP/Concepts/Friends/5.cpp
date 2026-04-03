#include <iostream>
using namespace std;

class HUMAN
{
private:
    int age;
    int energyLevel;

public:
    HUMAN()
    {
        age = 25;
        energyLevel = 80;
    }

    // Declare Animal as friend class
    friend class Animal;
};

class Animal
{
private:
    int strength;
    int speed;

public:
    Animal()
    {
        strength = 60;
        speed = 70;
    }

    // Function accessing HUMAN's private data
    void analyzeHUMAN(HUMAN h)
    {
        cout << "HUMAN Age: " << h.age << endl;
        cout << "HUMAN Energy Level: " << h.energyLevel << endl;

        cout << "Animal Strength: " << strength << endl;
        cout << "Animal Speed: " << speed << endl;

        cout << "Total Capability Score: " << (h.energyLevel + strength + speed) << endl;
    }
};

int main()
{
    HUMAN person;
    Animal creature;

    creature.analyzeHUMAN(person);

    return 0;
}
