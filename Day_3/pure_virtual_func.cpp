#include <iostream>

using namespace std;

class Base
{
private:
    int a;
public:
    ~Base()
    {

    }
    virtual void show() = 0;
    void modify()
    {
        a = 0;
        a++;
    }

};

class Derived: public Base
{
private:
    int i;
public:
    ~Derived()
    {
        cout << "In Derived Destructor" << endl;
    }

    void show()
    {
        i = 10;
        cout << "In derived func " << i << endl;
    }
};

int main(void)
{
    Base *b1;
    Derived d;
    b1 = &d;
    b1->show();

    Base *b2 = new Derived;

    delete b1;
    delete b2;

    return 0;
}
