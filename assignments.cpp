#include <iostream>

using namespace std;

int main()
{
    static int var = 30;
    var += 7;
    // cout << var << std::endl; - 14
    var /= 7;
    // cout << var << std::endl; - 2
    var *= 7;
    // cout << var << std::endl; - 14
    var %= 6;
    // cout << var << std::endl; - 2
    var -= 1;
    // cout << var; - 1

    var = 30;

    std::cout << ++var << std::endl; // 31

    var = 30;

    std::cout << var++ << var << std::endl; // 30

    var = 30;

    var++;

    std::cout << var << std::endl; // 31

    var = 30;

    ++var;

    std::cout << var << std::endl; // 31
}