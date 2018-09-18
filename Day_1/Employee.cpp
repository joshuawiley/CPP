#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee
{
private:
    int employeeID;
    string name;
    string location;

public:
    Employee();
    ~Employee();

    void getEmployee();
    virtual void getEmployee(int id);
    virtual void setEmployee(int empID,
                             string empName,
                             string empLocation);
    int operator++()
    {
        cout << "in prefix increment" << endl;
        return employeeID++;
    }
    Employee& operator++(int a)
    {
        cout << "in postfix increment" << endl;
        employeeID++;
        return *this;
    }

    int operator+(Employee obj)
    {
        cout << "in add op" << endl;
        int ret = this->employeeID + obj.employeeID;
        return ret;
    }

    int operator-(Employee obj)
    {
        cout << "in add op" << endl;
        int ret = this->employeeID - obj.employeeID;
        return ret;
    }

    void printAll();
};

Employee::Employee()
{
    employeeID = 0000000;
    name = "John Doe";
    location = "Novi, MI";
}

Employee::~Employee()
{
}

void Employee::getEmployee()
{
    cout << "Employee ID: " << employeeID <<endl;
    cout << "Name: " << name <<endl;
    cout << "Location: " << location <<endl;
}
void Employee::getEmployee(int id)
{
    cout << "Employee ID: " << id <<endl;
    cout << "Name: " << name <<endl;
    cout << "Location: " << location <<endl;
}

void Employee::setEmployee(int employeeID,
                           string name = "Jane Doe",
                           string location = "Alpena, MI")
{
    this->employeeID = employeeID;
    this->name = name;
    this->location = location;
}
/*
void Employee::setEmployee(int employeeID,
                           string name,
                           string location)
{
    this->employeeID = employeeID;
    this->name = name;
    this->location = location;
}
*/
void Employee::printAll()
{
    cout << "Employee ID: " << employeeID <<endl;
    cout << "Name: " << name <<endl;
    cout << "Location: " << location <<endl;
}

int main(void)
{
    int ret_val;
    Employee emp, emp1;
    emp1.setEmployee(111111);
    emp.printAll();
    emp.setEmployee(222222);
    emp.printAll();

    emp = emp++;
    emp.printAll();

    ret_val = emp + emp1;
    cout << "ret_val = emp + emp1: " << ret_val << endl;
    emp.printAll();

    ret_val = emp - emp1;
    cout << "ret_val = emp - emp1: " << ret_val << endl;
    emp.printAll();
}
