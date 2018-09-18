//#include <string>
//#include <iostream>
//#include <stdlib.h>
//
//using namespace std;
//
//class Employee
//{
//private:
//    int employeeID;
//    string name;
//
//public:
//    string location;
//
//    Employee();
//    ~Employee();
//
//    void getEmployee();
//    virtual void getEmployee(int id);
//    virtual void setEmployee(int empID,
//                             string empName,
//                             string empLocation);
//    int operator++()
//    {
//        cout << "in prefix increment" << endl;
//        return employeeID++;
//    }
//    Employee& operator++(int a)
//    {
//        cout << "in postfix increment" << endl;
//        employeeID++;
//        return *this;
//    }
//
//    int operator+(Employee obj)
//    {
//        cout << "in add op" << endl;
//        int ret = this->employeeID + obj.employeeID;
//        return ret;
//    }
//
//    int operator-(Employee obj)
//    {
//        cout << "in add op" << endl;
//        int ret = this->employeeID - obj.employeeID;
//        return ret;
//    }
//
//    virtual void print();
//};
//
//class SpecialEmployee: public Employee
//{
//private:
//    int id;
//    string name;
//    string title;
//public:
//    SpecialEmployee()
//    {
//        setEmployee(333333, "John Smith","Novi, MI");
//    }
//
//    ~SpecialEmployee()
//    {
//        cout << "\nSpecial Employee Destructor" << endl;
//    }
//
//    void setEmployee(int id,
//                     string name,
//                     string location)
//    {
//        this->id = id;
//        this->name = name;
//        this->location = location;
//    }
//
//    void getEmployee()
//    {
//        cout << "\nEmployee ID: " << id <<endl;
//        cout << "Name: " << name <<endl;
//        cout << "Location: " << location <<endl;
//    }
//
//    void print()
//    {
//        cout << "\nEmployee ID: " << id <<endl;
//        cout << "Name: " << name <<endl;
//        cout << "Location: " << location <<endl;
//    }
//};
//
//
//Employee::Employee()
//{
//    employeeID = 0000000;
//    name = "John Doe";
//    location = "Novi, MI";
//}
//
//Employee::~Employee()
//{
//}
//
//void Employee::getEmployee()
//{
//    cout << "\nEmployee ID: " << employeeID <<endl;
//    cout << "Name: " << name <<endl;
//    cout << "Location: " << location <<endl;
//}
//void Employee::getEmployee(int id)
//{
//    cout << "\nEmployee ID: " << id <<endl;
//    cout << "Name: " << name <<endl;
//    cout << "Location: " << location <<endl;
//}
//
//void Employee::setEmployee(int employeeID,
//                           string name = "Jane Doe",
//                           string location = "Alpena, MI")
//{
//    this->employeeID = employeeID;
//    this->name = name;
//    this->location = location;
//}
//
//void Employee::print()
//{
//    cout << "\nEmployee ID: " << employeeID <<endl;
//    cout << "Name: " << name <<endl;
//    cout << "Location: " << location <<endl;
//}
//
//int main(void)
//{
//    int ret_val;
//    Employee emp, emp1;
//    SpecialEmployee b1, b2;
//    emp1.setEmployee(111111);
//    emp.print();
//    emp.setEmployee(222222);
//    emp.print();
//
//    emp = emp++;
//    emp.print();
//
//    ret_val = emp + emp1;
//    cout << "ret_val = emp + emp1: " << ret_val << endl;
//    emp.print();
//
//    ret_val = emp - emp1;
//    cout << "ret_val = emp - emp1: " << ret_val << endl;
//    emp.print();
//
//    b1.getEmployee();
//    b2.setEmployee(444444,"Joshua Wiley","Novi, MI");
//    b2.print();
//}
