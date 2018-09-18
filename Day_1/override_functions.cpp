//#include <iostream>
//
//using namespace std;
//
//class A
//{
//public:
//    void show(int i, bool j)
//    {
//        cout << "in show 1" << endl;
//    }
//
//    void show(bool i, int j)
//    {
//        cout << "in show 2" << endl;
//    }
//
//    void show(bool i, int j, double h)
//    {
//        cout << "in show 3" << endl;
//    }
//
//    void show() const
//    {
//        cout << "in show 4" << endl;
//    }
//
//    void print(int p, char q = 't', int r = 5)
//    {
//        cout << "in print1" << endl;
//    }
//
//    void print(bool bitStatus = false)
//    {
//        cout << "in print2" << endl;
//    }
//
//    void display(char* p)
//    {
//        cout << p << endl;
//        cout << "in display1" << endl;
//    }
//
//    void display(const char* q)
//    {
//        cout << q << endl;
//        cout << "in display2" << endl;
//    }
///*
//    void display(volatile char* p)
//    {
//        cout << p << endl;
//        cout << "in display3" << endl;
//    }
//*/
//};
//
//int main(void)
//{
//    char* ch1 = "Hello";
//    const char* ch2 = "Hi";
//    // volatile char* ch3 = "Bye";
//
//    A a;
//    // a.show(1,1);
//    a.show(0, 10, 45.76);
//    // a.show(10, 1);
//    a.show();
//    a.print(1,'9',0);
//    a.print(9,'n');
//    a.print(12);
//    a.print(false);
//    a.print(true);
//    a.display(ch1);
//    a.display(ch2);
//    // a.display(ch3);
//
//    return 0;
//}
