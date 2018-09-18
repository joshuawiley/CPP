#include <iostream>
using namespace std;

template <class T1>
T1 myMinFunc(T1 a, T1 b)
{
    return ((a<b)?a:b);
}

//double myMinFunc(double a, double b)
//{
//    cout << "In Overridden Template Function" << endl;
//    return (a<b)?a:b);
//}

int main()
{
    int i = 10, j = 20;
    cout << "Smallest int is: " << myMinFunc(i,j) << endl;

    float x = 3.56f, y = -9.70f;
    cout << "Smallest float is: " << myMinFunc(x,y) << endl;

    double d = 1.1, e = 1.111;
    cout << "Smallest double is: " << myMinFunc(d,e) << endl;

    char ch1 = 'm', ch2 = 'z';
    cout << "Smallest char is: " << myMinFunc(ch1,ch2) << endl;

    return 0;
}
