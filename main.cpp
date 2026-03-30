// M3. Date Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
	cout << "Different Formatted Dates\n";
	cout << "-------------------------\n";

	Date date1(12, 21, 2021);
	Date date2(12, 18, 2021);

	cout << date1.Format1() << endl;
	cout << date1.Format2() << endl;
	cout << date1.Format3() << endl;

	cout << date1 - date2;
}

