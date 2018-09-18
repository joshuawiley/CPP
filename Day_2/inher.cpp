// C++ program to explain
// Single inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    int wheels_p = 4;
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }

    ~Vehicle()
    {
        cout << "Destructor" << endl;
    }
};

// sub class derived from two base classes
class Motorcycle: public Vehicle
{
public:
    int wheels_c = 2;
    Motorcycle()
    {
    }

    ~Motorcycle()
    {
    }
};

// main function
int main()
{
    // creating object of sub class will
    // invoke the constructor of base classes
    Motorcycle* obj = new Motorcycle();
    Motorcycle obj1;
    obj = &obj1;
    cout << "Parent # of Wheels is " << obj->wheels_c << endl;
    cout << "Child # of Wheels is " << obj1.wheels_c << endl;
    delete obj;
    return 0;
}
