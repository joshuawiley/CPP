//#include <iostream>
//
//using namespace std;
//
//class EventClass
//{
//private:
//    int i;
//    static int count;
//
//public:
//    static void modifyCount()
//    {
//        count++;
//        i++;
//        show();
//    }
//
//    void show()
//    {
//        cout << "count = " << count << endl;
//        cout << "i = " << i << endl;
//    }
//};
//
//int EventClass::count = 0;
//
//int main(void)
//{
//    EventClass e1;
//    e1.show();
//    e1.modifyCount();
//
//    EventClass e2;
//    e2.show();
//    EventClass::modifyCount();
//    EventClass::show();
//
//    EventClass e3;
//    e3.show();
//    EventClass::modifyCount();
//
//    e3.show();
//    cout << "END" << endl;
//    return 0;
//}
