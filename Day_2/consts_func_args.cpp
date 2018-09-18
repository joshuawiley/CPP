#include <iostream>

using namespace std;
void func1(const int*);
void func2(int*);

void func1(const int*)
{
    cout << "In func1 \n";
}

void func2(int*)
{
    cout << "In func2 \n";
}

int main(void)
{
   int p = 1, q = 2;
   int *point1 = &p;
   const int *point2 = &q;
   func1(point2);
   func1(point1);

   // func2(point2);
   func2(point1);

    return 0;
}
