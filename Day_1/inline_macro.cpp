#include <iostream>
#define SQUARE(x) x*x
using namespace std;


inline int max(int x, int y)
{
    if (x < y)
        return y;
    else
        return x;
};

inline int square(float y)
{
    return (y*y);
};

int main( )
{
    float a = 0.5, b = 0.5, c, d;

    c = SQUARE(++a);
    d = square(++b);
    cout << max(10, 20) << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b<< endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

}
