#include <iostream>
#include "mento.h"
using namespace std;

void Increment(int &value)
{
    value++;
}

void Decrement(int &value)
{
    value--;
}
int main()
{

    int i = 0;

    for (i; i < 5; i++)
        print(to_string(i));

    // Increase `i` while i > 5 is true. (Increase and Use)
    while (i > 5)
    {
        print(to_string(i));
        ++i;
    }
    char data[5] = {'a', 'b', 'c', 'D', 'E'};

    int counter = 1;
    // infinity loop
    for (;;)
    {
        if (counter == 5)
            break;
        else
            print("Counter: "s + to_string(counter));
        counter++;
    }

    // foreach
    for (char c : data)
    {
        if (c == 'D')
            break;
        print("Char: "s + c); // a, b, c, break;
    }

    print(to_string(i));
    int &ref = i;
    ref = 4;
    print(to_string(i));

    // ref = 4 & i = 4

    Increment(ref); // i=5
    Increment(ref); // i=6
    Increment(ref); // i=7
    Increment(ref); // i=8
    Decrement(ref); // i=7
    Decrement(ref); // i=6

    print(to_string(i), false);
    print(":", false);
    print(to_string(ref));

    // i and ref belongs to same address, because `i` referenced by `ref`
    if (&ref == &i)
    {
        print("Done!");
    }
}