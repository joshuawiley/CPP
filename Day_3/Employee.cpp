#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Employee
{
private:
    int employeeID;
    string name;
    friend void operator++(Employee& a);
    friend void operator++(Employee& a, int b);
public:
    string location;

    Employee();
    virtual ~Employee()
    {
        cout << "In Employee Destructor" << endl;
    }

    void getEmployee();
    virtual void getEmployee(int id);
    virtual void setEmployee(int empID,
                             string empName,
                             string empLocation);
    int displayID()
    {
        return employeeID;
    }


    friend Employee& operator+(Employee obj, Employee obj1);

    friend Employee& operator-(Employee obj, Employee obj1);

    virtual void print();
};

Employee& operator+(Employee obj, Employee obj1)
{
    Employee temp;
    cout << "in add op" << endl;
    temp.employeeID = obj.employeeID + obj1.employeeID;
    return temp;
}
Employee& operator-(Employee obj, Employee obj1)
{
    Employee temp;
    cout << "in add op" << endl;
    temp.employeeID = obj.employeeID - obj1.employeeID;
    return temp;
}

void operator++(Employee& a)
{
    cout << "in prefix increment" << endl;
    a.employeeID++;
}

void operator++(Employee& a, int b)
{
    cout << "in postfix increment" << endl;
    a.employeeID++;
}

class SpecialEmployee: public Employee
{
private:
    int id;
    string name;
    string title;
public:
    SpecialEmployee()
    {
        setEmployee(333333, "John Smith","Novi, MI");
    }

    ~SpecialEmployee()
    {
        cout << "\nSpecial Employee Destructor" << endl;
    }

    void setEmployee(int id,
                     string name,
                     string location)
    {
        this->id = id;
        this->name = name;
        this->location = location;
    }

    void getEmployee()
    {
        cout << "\nEmployee ID: " << id <<endl;
        cout << "Name: " << name <<endl;
        cout << "Location: " << location <<endl;
    }

    void print()
    {
        cout << "\nEmployee ID: " << id <<endl;
        cout << "Name: " << name <<endl;
        cout << "Location: " << location <<endl;
    }
};

Employee::Employee()
{
    employeeID = 0000000;
    name = "John Doe";
    location = "Novi, MI";
}

void Employee::getEmployee()
{
    cout << "\nEmployee ID: " << employeeID <<endl;
    cout << "Name: " << name <<endl;
    cout << "Location: " << location <<endl;
}
void Employee::getEmployee(int id)
{
    cout << "\nEmployee ID: " << id <<endl;
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

void Employee::print()
{
    cout << "\nEmployee ID: " << employeeID <<endl;
    cout << "Name: " << name <<endl;
    cout << "Location: " << location <<endl;
}

int main(void)
{
    Employee emp, emp1, res;
    SpecialEmployee b1, b2;
    emp1.setEmployee(111111);
    emp.print();
    emp.setEmployee(222222);
    emp.print();

    emp++;
    emp.print();

    res = emp + emp1;
    cout << "ret_val = emp + emp1: " << res.displayID() << endl;
    emp.print();

    res = emp - emp1;
    cout << "ret_val = emp - emp1: " << res.displayID() << endl;
    emp.print();

    b1.getEmployee();
    b2.setEmployee(444444,"Joshua Wiley","Novi, MI");
    b2.print();
}
