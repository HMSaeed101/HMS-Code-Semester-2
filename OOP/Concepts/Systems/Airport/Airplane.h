
#ifndef airplaneH

#define airplaneH
#define AIRLINER 0
#define COMMUTER 1
#define PRIVATE 2
#define TAKINGOFF 0
#define CRUISING 1
#define LANDING 2
#define ONRAMP 3

#define MSG_CHANCE 0
#define MSG_TAKEOFF 1
#define MSG_LAND 2
#define MSG_REPORT 3

class AIRPLANE
{
    public:
    AIRPLANE(const* char _name, int _type = AIRLINER);
    ~AIRPLANE();

    virtual int GetStatus(char* statusString);

    int GetStatus()
    {return status;}

    int GetSpeed()
    {return speed;}

    int GetHeading()
    {return heading;}

    int GetAltitude()
    {return altitude;}

    void ReportStatus();

    bool SendMessage(int msg, char* response, int speed = -1, int dir = -1, int alt = -1);

    char* name;


    protected:
    virtual void Takeoff(int dir);
    virtual void Land();

    private:
    int speed;
    int altitude;
    int height;
    int status;
    int type;
    int ceiling;
};

#endif
