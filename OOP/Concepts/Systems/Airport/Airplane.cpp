#include <studio.h>
#include <iostream>
#include "Airplane.h"

// Constructor
AIRPLANE :: AIRPLANE (cont char* _name, int _type) :
type(_type), status(ONRAMP), speed(0), altitude(0), heading(0)
{
    switch(type)
    {
        case AIRLINER :
        ceiling = 35000;
        break;

        case COMMUTER :
        ceiling = 20000;
        break;

        case PRIVATE :
        ceiling = 8000;
    }

    name = new char[50];
    strcpy(name, _name);
}

// Destructor
~AIRPLANE :: AIRPLANE()
{
    delete[] name;
}

// Send Message Function
bool AIRPLANE :: SendMessage(int msg, char* response, int spd, int dir, int alt)
{
    // Check for Bad Commands
    if(spd>500)
    {
        strcpy(response, "Speed can't be more than 500.");
        return false;
    }

    if(dir>360)
    {
        strcpy(response, "Heading can't be over 360 degrees.");
        return false;
    }

    if(alt<100 && alt!=-1)
    {
        strcpy(response, "I would Crash. BoneHead!");
        return false;
    }

    if(alt>ceiling)
    {
        strcpy(response, "I can't go that high.");
        return false;
    }

    switch(msg)
    {
        case MSG_TAKEOFF:
        {
            if(status != ONRAMP)
            {
                strcpy(response, "I'm already in the air!");
                return false;
            }
            TAKEOFF(dir);
            break;
        }

        case MSG_CHANCE:
        {
            if(status == ONRAMP)
            {
                strcpy(response, "I'm on Ground!");
                return false;
            }
            // only change if non-negative value is passed
            if (spd!=-1) {speed = spd};
            if (dir!=-1) {heading = dir};
            if (alt!=-1) {altitude = alt};
            status = CRUISING;
            break;
        }

        case MSG_LAND:
        {
            if(status==ONRAMP)
            {
                strcpy(response, "I'm already on the Ground!");
                return false;
            }
            Land();
            break;
        }

        case MSG_REPORT():
        ReportStatus();
    }

    strcpy(response, "ROGER");
    return true;
}

// TakeOff Function
AIRPLANE :: TakeOff(int dir)
{
    heading = dir;
    status = TAKINGOFF;
}

// Land Function
AIRPLANE :: Land(int dir)
{
    speed = heading = altitude = 0;
    status = ONRAMP;
}

// Status Message String
AIRPLANE :: GetStatus(char* statusString)
{
    printf(statusString, "%s, Altitude: %d, Heading: %d" "Speed : %d \n", name, altitude, heading, speed);
    return status;
}

// Report Status
AIRPLANE :: ReportStatus()
{
    char buff[100];
    GetStatus(buff);
    cout << endl << buff << endl;
}
