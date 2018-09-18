#include <iostream>

using namespace std;

int i = 80;
int main(void)
{
    int i = 50;
    bool a = true;

    std::cout << "i = " << i << " global i = " << ::i << std::endl;

    if (a == true)
    {
        int i = 20;
        std::cout << "i = " << i << " global i = " << ::i << std::endl;
        i++;
        ::i++;
        std::cout << "i++ = " << i << " global i++ = " << ::i << std::endl;
    }
    std::cout << "i = " << i << " global i = " << ::i << std::endl;
    return 0;
}
