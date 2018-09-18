// C++ program to explain
// Diamond inheritance
#include <iostream>
using namespace std;

// base class
class A
{
    char name1[50];
public:
    A() {cout << "In A Constructor" << endl;}

    ~A() {cout << "In A Destructor" << endl;}

    void show()
    {
        cout << "In obj Show" << endl;
    }
};

// sub class derived from two base classes
class B: public virtual A
{
    char name2[50];
public:
    B() {cout << "In B Constructor" << endl;}

    ~B() {cout << "In B Destructor" << endl;}
};

class C: virtual public A
{
    char name3[50];
public:
    C() {cout << "In C Constructor" << endl;}

    ~C() {cout << "In C Destructor" << endl;}
};

class D: public B, public C
{
    char name4[50];
public:
    D() {cout << "In D Constructor" << endl;}

    ~D() {cout << "In D Destructor" << endl;}
};

// main function
int main()
{
    int x = 0;

    if (x == 0)
    {
        D d1;
        cout << "Size of obj. for D: " << sizeof(d1) << endl;
        d1.show();
    }
    return 0;
}
