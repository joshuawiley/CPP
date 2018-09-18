#include <iostream>

using namespace std;

class Parent
{
    int a;
public:
    Parent()
    {
        a = 0;
    }
    virtual void show()
    {
        cout << "a = " << a << endl;
        cout << "In parent cls" << endl;
    }
};

class Child: public Parent
{
    int b;
public:
    Child() {b = 10;}

    void show()
    {
        cout << "b = " << b << endl;
        cout << "In Child cls" << endl;
    }
};

int main(void)
{
    Parent p1;
    p1.show();

    Parent *p2;
    Child c2;
    p2 = &c2;
    p2->show();

    Child c3;
    Parent &ref1 = c3;
    ref1.show();
}
