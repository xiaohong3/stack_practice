#ifndef FIXEDCAPACITYSTACK_H
#define FIXEDCAPACITYSTACK_H

#include <iostream>

using namespace std;

template <class T>
class FixedCapacityStack
{
    public:
        FixedCapacityStack(int cap);
        ~FixedCapacityStack();
        bool isEmpty();
        int getLength();
        int getCapacity();
        void push(T item);
        T pop();
        void printout();

    private:
        T* a;
        int length;
        int capacity;
        void resize(int max);
};


#endif // FIXEDCAPACITYSTACK_H
