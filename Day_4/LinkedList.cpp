#include <iostream>

using namespace std;

class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void insert(int insertData);
    void remove(int removeData);
    void printAll();
    bool isEmpty();

private:
    struct LLNode
    {
        int data;
        LLNode *next;
    } *head;
};

LinkedList::LinkedList()
{
    head = NULL;
}

LinkedList::~LinkedList()
{
    LLNode *nextNode;
    LLNode *nodePtr;

    nodePtr = head;

    while (nodePtr != NULL)
    {
        nextNode = nodePtr->next;
        delete(nodePtr);
        nodePtr = nextNode;
    }
}

