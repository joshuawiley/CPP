/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *  Programmer:         Joshua Wiley
 *  Date:               August 2018
 *  Build Instructions: g++ -o application queue.h queue.cpp application.cpp
 *  Execution Command:  ./application
 *  Description:        This program is a generic queue that stores generic
 *                      data.
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef QUEUE
#define QUEUE
#include <iostream>

using namespace std;

class Queue
{
public:
    int data;
    Queue();               // Constructor
    ~Queue();               // Destructor
    bool isEmpty();         // Empty queue test
    void enqueue(int data);   // Insert data into the queue
    int dequeue();            // Delete data from the queue
    void printAll();        // Prettyprint the contents of the queue

    // Stream operator overloads...
    friend ostream& operator<< (ostream& out, const Queue &it);
    friend istream& operator>> (istream& in, int &it);
private:
    struct QueueNode
    {
        int item;
        QueueNode *next;
    };

    QueueNode *front, *back;
};
#endif
