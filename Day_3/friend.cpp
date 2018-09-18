#include <iostream>
using namespace std;

class B;
class C;
class A
{
private:
    int no;
public:
    A()
    {
        no = 10;
    }
    int sum(B ob2, C obj3);
};

class B
{
private:
    int no;
public:
    B()
    {
        no = 20;
    }
    friend class A;
};

class C
{
    int no;
public:
    C()
    {
        no = 30;
    }
    friend class A;
};

int A::sum(B obj2, C obj3)
{
    return (obj2.no + obj3.no);
}

int main(void)
{
    A ob11;
    B ob22;
    C ob33;

    int result = ob11.sum(ob22, ob33);
    cout << "sum is " << result << endl;

    return 0;
}
