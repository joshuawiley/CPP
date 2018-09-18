#include <iostream>

using namespace std;

class Test
{
private:
    int i;


public:
    Test(int x = 0)
    {
        i = x;
    }

    void display() const
    {
        cout << i << endl;
    }

    void modify() const
    {
        //i = i+10;
        cout << "In modify func\n";
    }
    void change()
    {
        i = i+5;
        cout << "In change\n";
    }
};

int main(void)
{
    cout << "\nTEST 1 " << endl;
    Test t1(10);
    t1.display();
    t1.modify();
    t1.display();
    t1.change();
    t1.display();

    cout << "\nTEST 2 " << endl;
    Test t2(20);
    t2.display();
    t2.modify();
    t2.display();
    t2.change();
    t2.display();

    cout << "\nTEST 3 " << endl;
    Test t3;
    t3.change();
    t3.display();
    t3.modify();
    t3.display();


    cout << "END " <<endl;
    return 0;
}
