#include <iostream>

using namespace std;

class Test
{
private:
    const int i;
    float a;

public:
    Test(int x): i(x), a(5.3)
    {
        cout << "\nIn Constructor\n";
    }

    void change(float a)
    {
        cout << "\nIn Change a\n";
        this->a = a;
    }

    void display() const
    {
        cout << "i = " << i << endl;
        cout << "a = " << (float)a << endl;
    }
};

int main(void)
{
    cout << "\nTEST 1 " << endl;
    Test t1(10);
    t1.display();

    cout << "\nTEST 2 " << endl;
    Test t2(20);
    t2.display();

    cout << "\nTEST 3 " << endl;
    Test t3(30);
    cout << "\nBefore change of a " << endl;
    t3.display();
    t3.change(10.5);
    cout << "\nAfter change of a " << endl;
    t3.display();

    cout << "END " <<endl;
    return 0;
}
