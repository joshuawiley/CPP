#include <iostream>
using namespace std;

class Bird
{
public:
    int wings;
    Bird()
    {
        wings = 2;
    }

    void show()
    {
        cout << "Parent Class: wings = " << wings << endl;
    }
};

class Sparrow: public Bird
{
public:
    int beak;
    Sparrow()
    {
        beak = 1;
    }

    void show()
    {
        cout << "Child Class: beak = " << beak << endl;
        cout << "Child Class: wings = " << wings << endl;
    }
};

int main(void)
{
    Bird b2;
    Sparrow *sp3;
    sp3 = (Sparrow *)&b2;

    cout << "Downcasting" << endl;
    cout << "Sparrow: beak  = " << sp3->beak << endl;
    cout << "Bird:    wings = " << b2.wings << endl;
    cout << "Sparrow: wings = " << sp3->wings << endl;

    Bird *b1;
    Sparrow sp;
    b1 = &sp;

    cout << "\nUpcasting" << endl;
    cout << "Sparrow: wings = " << sp.wings << endl;
    cout << "Sparrow: beak  = " << sp.beak << endl;
    cout << "Bird:    wings = " << b1->wings << endl;

    b1->show();

    /*
     *  This demonstrates passing the child class
     *  to a reference of parent class
     */
    Sparrow sp2;
    Bird &ref1 = sp2;

    cout << "\nUpcasting Ref" << endl;
    cout << "Sparrow: wings = " << sp2.wings << endl;
    cout << "Sparrow: beak  = " << sp2.beak << endl;
    cout << "Bird:    wings = " << ref1.wings << endl;

    ref1.show();

}
