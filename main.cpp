// M3. Date Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	cout << "Different Formatted Dates\n";
	cout << "-------------------------\n";

	Date date(12, 25, 2021);

	cout << date.Format1() << endl;
	cout << date.Format2() << endl;
	cout << date.Format3() << endl;
}

