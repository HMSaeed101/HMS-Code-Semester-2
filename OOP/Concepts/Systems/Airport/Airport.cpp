
#include <vcl\condefs.h>
#include <iostream.h>
#include <conio.h>

#pragma hdrstop
USERES("Airport.res");
USEUNIT("airplane.cpp");
#include "airplane.h"

int getInput(int max);

void getItems(int& speed, int& dir, int& alt);

int main(int argc, char **argv)
{
    char returnMsg[100];

    // Set up an array of Airplanes and create three Airplane objects.

    Airplane* planes[3];
    planes[0] = new Airplane("TWA 1040");
    planes[1] = new Airplane("United Express 749", COMMUTER);
    planes[2] = new Airplane("Cessna 3238T", PRIVATE);

     // Start the loop.

    do {
        int plane, message, speed, altitude, direction;
        speed = altitude = direction = -1;

        // Get a plane to whom a message will be sent.
        // List all of the planes and let the user pick one.

        cout << endl << "Who do you want to send a message to?";
        cout << endl << endl << "0. Quit" << endl;
        for (int i=0; i<3; i++)
            cout << i + 1 << ". " << planes[i]->name << endl;

        // Call the getInput() function to get the plane number.

        plane = getInput(4);

        // If the user chose item 0 then break out of the loop.

        if (plane == -1) break;

        // The plane acknowledges

        cout << endl << planes[plane]->name << ", roger.";
        cout << endl << endl;

        // Allow the user to choose a message to send.

        cout << "What message do you want to send?" << endl;
        cout << endl << "0. Quit" << endl;
        cout << "1. State Change" << endl;
        cout << "2. Take Off" << endl;
        cout << "3. Land" << endl;
        cout << "4. Report Status" << endl;
        message = getInput(5);

         // Break out of the loop if the user chose 0.

        if (message == -1) break;
        //
        // If the user chose item 1 then we need to get input for the new speed, direction, and altitude. Call the getItems() function to do that.

        if (message == 0)
            getItems(speed, direction, altitude);
        //
        // Send the plane the message.
        //
        bool goodMsg = planes[plane]->SendMessage(
            message, returnMsg, speed, direction, altitude);
        //
        // Something was wrong with the message
        //
        if (!goodMsg) cout << endl << "Unable to comply.";
        //
        // Display the plane's response.
        //
        cout << endl << returnMsg << endl;
    } while (1);

     // Delete the Airplane objects.

    for (int i=0;i<3;i++) delete planes[i];
}

int getInput(int max)
{
    int choice;
    do {
        choice = getch();
        choice -= 49;
    } while (choice < -1 || choice > max);
    return choice;
}

void getItems(int& speed, int& dir, int& alt)
{
    cout << endl << "Enter new speed: ";
    getch();
    cin >> speed;
    cout << "Enter new heading: ";
    cin >> dir;
    cout << "Enter new altitude: ";
    cin >> alt;
    cout << endl;
}
