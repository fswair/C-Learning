#pragma once

#include <iostream>
#include "math.h"

using namespace std;

void print(string text, bool endline = true)
{
    std::cout << text << (endline ? "\n" : "");
}

double square(double number)
{
    return pow(number, 2);
}