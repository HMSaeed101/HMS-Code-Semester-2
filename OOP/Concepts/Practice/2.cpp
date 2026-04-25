//! Elevator (Review)
/*
Consider a class **Elevator** with member functions **GoUp** and **GoDown**, program will select the appropriate function based upon user choice.

Consider five persons who want to go up or go down the building which is 10 floor high. All the persons are in the elevator initially. Each person may inquire where the elevator is at any certain point. Use data member to store value of current floor so that each user (object) may be able to locate the elevator at any point.

A building is 10 floors high, when a certain user is using elevator the current floor status must change accordingly.

Give permission to all five users one by one to use elevator. The program should run as long as user require. Define data members accordingly.
*/


#include <iostream>
#include <string>
using namespace std;

class Elevator {
private:
    static int currentFloor;  // shared — one elevator for all
    string personName;

public:
    Elevator(string name) : personName(name) {}

    void GoUp(int floors) {
        int target = currentFloor + floors;
        if (target > 10) {
            cout << personName << ": Can't go up " << floors
                 << " floor(s). Max floor is 10. Currently at floor "
                 << currentFloor << ".\n";
        } else {
            currentFloor = target;
            cout << personName << " went UP. Elevator is now at floor "
                 << currentFloor << ".\n";
        }
    }

    void GoDown(int floors) {
        int target = currentFloor - floors;
        if (target < 1) {
            cout << personName << ": Can't go down " << floors
                 << " floor(s). Min floor is 1. Currently at floor "
                 << currentFloor << ".\n";
        } else {
            currentFloor = target;
            cout << personName << " went DOWN. Elevator is now at floor "
                 << currentFloor << ".\n";
        }
    }

    void CheckFloor() const {
        cout << personName << " checks: Elevator is at floor "
             << currentFloor << ".\n";
    }

    string getName() const { return personName; }
};

// static member definition (required outside the class)
int Elevator::currentFloor = 1;

int main() {
    Elevator persons[5] = {
        Elevator("Ali"),
        Elevator("Sara"),
        Elevator("Usman"),
        Elevator("Hina"),
        Elevator("Bilal")
    };

    int personChoice, direction, floors;
    char continueChoice;

    do {
        cout << "\n--- Select a person (1-5) ---\n";
        for (int i = 0; i < 5; i++)
            cout << i + 1 << ". " << persons[i].getName() << "\n";

        cout << "Enter choice: ";
        cin >> personChoice;

        if (personChoice < 1 || personChoice > 5) {
            cout << "Invalid person. Try again.\n";
            continue;
        }

        Elevator& current = persons[personChoice - 1];
        current.CheckFloor();

        cout << "Direction: 1 = Go Up  |  2 = Go Down  |  3 = Check Floor Only\n";
        cout << "Enter choice: ";
        cin >> direction;

        if (direction == 1 || direction == 2) {
            cout << "How many floors? ";
            cin >> floors;
            if (direction == 1) current.GoUp(floors);
            else                current.GoDown(floors);
        } else if (direction == 3) {
            current.CheckFloor();
        } else {
            cout << "Invalid direction.\n";
        }

        cout << "\nContinue? (y/n): ";
        cin >> continueChoice;

    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "Program ended.\n";
    return 0;
}
