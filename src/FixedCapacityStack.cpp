#include "FixedCapacityStack.h"

template <class T>
FixedCapacityStack<T>::FixedCapacityStack(int cap)
{
    a = new T[cap];
    capacity = cap;
    length = 0;
}

template <class T>
FixedCapacityStack<T>::~FixedCapacityStack()
{
    delete a;
}

template <class T>
bool FixedCapacityStack<T>::isEmpty()
{
    return length == 0;
}

template <class T>
int FixedCapacityStack<T>::getLength()
{
    return length;
}

template <class T>
int FixedCapacityStack<T>::getCapacity()
{
    return capacity;
}

template <class T>
void FixedCapacityStack<T>::printout()
{
    cout << "Print out all: " << "\n";
    for (int i = 0; i < length; ++i)
    {
        cout << a[i] << "\n";
    }
}

template <class T>
void FixedCapacityStack<T>::push(T item)
{
    if (length == capacity)
    {
        const int cap = 2 * capacity;
        resize(cap);
    }
    a[length++] = item;
}

template <class T>
T FixedCapacityStack<T>::pop()
{
    T item = a[--length];
    if (length > 0 && length == capacity / 4)
    {
        const int cap = capacity / 2;
        resize(cap);
    }
    return item;
}

template <class T>
void FixedCapacityStack<T>::resize(int max)
{
    T* temp = new T[max];
    for (int i = 0; i < this->length; ++i)
    {
        temp[i] = a[i];
    }
    delete a;
    a = temp;
    capacity = max;
}

template class FixedCapacityStack<double>;
template class FixedCapacityStack<int>;
