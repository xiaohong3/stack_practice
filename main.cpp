#include <iostream>
#include <FixedCapacityStack.h>

using namespace std;

int main()
{
    FixedCapacityStack<double> test1(10);
    FixedCapacityStack<int> test2(10);

    for (int i = 0; i < 11; ++i)
    {
        test1.push(1 + 0.1 * i);
    }

    test1.printout();

    cout << test1.getLength() << "\n";
    cout << test1.getCapacity() << "\n";

    cout << "Popping: " << "\n";

    test1.pop();
    test1.pop();

    test1.push(12.5);

    test1.printout();

    cout << test1.getLength() << "\n";
    cout << test1.getCapacity() << "\n";
    return 0;
}
