#include <iostream>
#include "mento.h"

using namespace std;

int main()
{
    signed int value1 = -5;
    unsigned int value2 = 5;

    print("Signed value: "s + to_string(value1));
    print("Unsigned value: "s + to_string(value2));

    float p = 1.1003f;                         // float
    double p2 = 1.1003f;                       // float
    float p3 = 1.1003;                         // double
    std::cout << std::boolalpha;               // now; 1 => true , 0 => false
    std::cout << (p == p2 == p3) << std::endl; // false, because p3 is double.
}