// Hafiz Muhammad Saeed
// 25-CS-005

#include <iostream>
#include <string>
using namespace std;

class MUSIC
{
    protected:
    string songtitle;
    string singername;
    int singingyear;

    public:
    MUSIC()
    {
        songtitle = "---";
        singername = "---";
        singingyear = 0;
    }

    MUSIC(string t, string n, int y) : songtitle(t), singername(n), singingyear(y) {}

    void setsingtitle (string _t){ songtitle= _t;}
    void setsingername (string _n){ singername = _n ;}
    void setsingingyear (int _y){ singingyear= _y ;}
};


class FOLKMUSIC : public MUSIC
{
    string provincename;

    public:
    FOLKMUSIC(){provincename = "---";}
    FOLKMUSIC(string t, string n, int y, string pn) : MUSIC( t, n, y), provincename(pn) {}

    void setprovincename(string pn) {provincename = pn;}
    void show()
    {
        cout << "Song Title : "   << songtitle << endl;
        cout << "Singer Name :"   << singername << endl;
        cout << "Singing Year : " << singingyear << endl;
        cout << "Province Name :" << provincename << endl;
    }

};


int main()
{
    FOLKMUSIC music("WOW", "Wahh", 2007, "Punjab");
    music.show();
}
