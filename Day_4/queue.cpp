/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Programmer:         Joshua Wiley
 *  Course:             CSCI 201-001
 *  Semester:           Fall 2016
 *  Build Instructions: g++ -o application queue.h queue.cpp application.cpp
 *  Execution Command:  ./application
 *  Description:        This program is a generic queue that stores doubles.
 *                      You need a unix/linux compiler for C++ like g++.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "queue.h"

Queue::Queue()
{
    front = back = NULL;
}

Queue::~Queue()
{
    // deleteAll() code should be in here!!!
    //    cout << ("front: %p back: %p\n", *front, *back);
    // sets the queue to null
    QueueNode *current;

    current = front;

    // set the temp to the front of the queue.  Then loop while the temp
    // is not null.  And end once it reaches null
    while (!isEmpty())
        dequeue();

    front = back = NULL;

    return;
}

bool Queue::isEmpty()
{
    return(front == NULL);
}

void Queue::enqueue(int ndata)
{
    // Code for enqueue()
    QueueNode *newNode = NULL;

    // QueueNode to hold new appData to queue
    newNode = new QueueNode;
    newNode->item = ndata;
    newNode->next = NULL;

    if (isEmpty())
    {
        front = back = newNode;
    }
    else
    {
        (back)->next = newNode;
        back = newNode;
    }
    cout << "\nData in queue: " << newNode->item << "\n\n";

    return;
}

int Queue::dequeue()
{
    int tempData;
    QueueNode *tempNode;

    if (!isEmpty())
    {
        // Grab the data out of the first item
        // and put it in the dummy variable
        tempData = front->item;

        tempNode = front;
        front = front->next;
        tempNode->next = NULL;

        // Check if we should set tail to NULL
        if (front == NULL)
        {
            back = NULL;
        }
        delete(tempNode);
    }
    else
    {
        cout << "\n\tQueue is empty.\n";
    }

    return(tempData);
}

void Queue::printAll()
{
    // Code for printAll

    QueueNode *current;

    cout << "Data in queue:\n";

    if (isEmpty())
    {
        cout << "\n\tQueue is empty.\n\n";
    }
    else
    {
        for (current=front; current != NULL; current=current->next)
            cout << "\n\tData: " << current->item;

        cout << "\n\n";
    }

    return;
}

ostream& operator<<(ostream &out, const Queue &it)
{
    Queue q;

    out << q.front << endl;

    return out;
}

istream& operator>>(istream& in, Queue &it)
{
    double dummy;

    in >> dummy;
    it.data = dummy;

    return in;
}
