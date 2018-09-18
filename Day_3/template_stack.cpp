#include <iostream>

using namespace std;

const int MAX = 10;

template <class T>
class Stack
{
private:
    T myStack[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(T data);
    T pop();
};
template <class T>
void Stack<T>::push(T data)
{
    if (top == MAX-1)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        top++;
        myStack[top] = data;
        cout << "myStack" << "[" << top << "]: " << data << endl;
    }
}

template <class T>
T Stack<T>::pop()
{
    if (top == -1)
    {
        return NULL;
    }
    else
    {
        T data = myStack[top];
        top--;
        return data;
    }
}

int main()
{
    Stack <char> ch;

    ch.push('a');
    ch.push('b');
    ch.push('c');
    ch.push('d');
    ch.push('e');
    ch.push('f');
    ch.push('g');
    ch.push('h');
    ch.push('i');
    ch.push('j');

    for (int iCN = 0; iCN < 10; iCN++)
        cout << "myStack" << "[" << iCN << "]: " << ch.pop() << endl;

    return 0;
}
