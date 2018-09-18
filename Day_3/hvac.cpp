#include <iostream>
#define OFF false
#define ON true

using namespace std;

class HVAC
{
private:
    int temp_val;
    bool recirculationMode;
    int fan_speed;
public:
    HVAC(int t = 27, bool r = OFF, int f = 0): temp_val(t), recirculationMode(r), fan_speed(f){}
    ~HVAC(){}

    friend bool operator>(HVAC &lhs, HVAC &rhs);
    friend bool operator<(HVAC &lhs, HVAC &rhs);
    friend bool operator==(HVAC &lhs, HVAC &rhs);
};

bool operator>(HVAC &lhs, HVAC &rhs)
{
    if (lhs.temp_val > rhs.temp_val)
    {
        lhs.recirculationMode = ON;
        if ((lhs.fan_speed > 0) && (lhs.fan_speed < 4))
            lhs.fan_speed++;
        if ((lhs.temp_val > -10) && (lhs.temp_val < 37))
            lhs.temp_val--;

        cout << lhs.fan_speed << " " << lhs.fan_speed << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool operator<(HVAC &lhs, HVAC &rhs)
{
    if (lhs.temp_val < rhs.temp_val)
    {
        rhs.recirculationMode = ON;
        if ((rhs.fan_speed >= 0) && (rhs.fan_speed < 4))
            rhs.fan_speed++;
        if ((rhs.temp_val > -10) && (rhs.temp_val < 37))
            rhs.temp_val--;

        cout << "Fan Speed:" << rhs.fan_speed << "\nTemperature: " << rhs.temp_val << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool operator==(HVAC &lhs, HVAC &rhs)
{
    if (lhs.temp_val == rhs.temp_val)
    {
        lhs.recirculationMode = OFF;
        rhs.recirculationMode = OFF;
        cout << "Optimum Temperature" << endl;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    HVAC h1, h2(32, OFF, 0);


    if (h1 > h2)
    {
        while (h1 > h2)
        {
            cout << "In >" << endl;
        }
    }

    if (h1 < h2)
    {
        while (h1 < h2 && !(h1 == h2))
        {
            cout << "In <" << endl;
        }
    }

}
