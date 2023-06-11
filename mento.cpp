#include <iostream>
#include <string>
#include <cmath>
#include "mento.h"

using namespace std;

void print(string text, bool endline)
{
	cout << text << (endline ? "\n" : "");
}

double square(double number)
{
	return pow(number, 2);
}
