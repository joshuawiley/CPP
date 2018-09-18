#include <iostream>

using namespace std;

void func1();
class EventClass
{
private:
    int count;
    static int NoOfEvents;
public:
    EventClass()
    {
        count = 0;
        ++count;
        ++NoOfEvents;
        cout << "In Constructor" << endl;
    }

    void show()
    {
        cout << "count = " << count << endl;
        cout << "NoOfEvents = " << NoOfEvents << endl;
    }
};

int EventClass::NoOfEvents = 0;

int main( )
{
    EventClass e1;
    e1.show();
    EventClass e2;
    e2.show();
    EventClass e3;
    e3.show();
    cout << "END" << endl;
    return 0;
}
