//#include <iostream>
//
//using namespace std;
//
//class TempSensor
//{
//private:
//    float temp_value;
//public:
//    TempSensor(): temp_value(21.0){}
//    ~TempSensor(){}
//    void show()
//    {
//        cout << temp_value << endl;
//    }
//
//    friend void operator++(TempSensor &ts, int);
//    friend void operator--(TempSensor &ts, int);
//};
//
////void operator++(TempSensor a)
////{
////    cout << "in prefix increment" << endl;
////    a.temp_value = a.temp_value + 1.5;
////}
//
//void operator++(TempSensor &a, int b)
//{
//    cout << "in postfix increment" << endl;
//    a.temp_value = a.temp_value + 1.5;
//}
//
//void operator--(TempSensor &a, int)
//{
//    cout << "in prefix decrement" << endl;
//    a.temp_value = a.temp_value - 1.5;
//}
//
////void operator++(TempSensor a, float b)
////{
////    cout << "in postfix increment" << endl;
////    a.employeeID++;
////}
//
//int main(void)
//{
//    TempSensor ts;
//    ts++;
//    ts.show();
//    ts--;
//    ts.show();
//}
