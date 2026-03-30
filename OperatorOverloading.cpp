
#include <iostream>
#include "Date.h"
using namespace std;

int main2()
{
	Date date1(12, 25, 2025);
	Date date2(4, 16, 2021);

	cout << "Updated Operator Overloading\n";
	cout << "----------------------------\n";

	cout << "Date 1 = " << date1 << endl << "Date 2 = " << date2 << endl;

	cout << "Prefix Increment Operator: " << ++date1 << endl;
	cout << "Postfix Increment Operator: " << date1++ << endl;
	cout << "Prefix Decrement Operator: " << --date1 << endl;
	cout << "Postifx Decrement Operator: " << date1-- << endl;
	cout << "Subtraction Operator Example: Days between dates is " << date1 - date2 << " days." << endl;
	cout << "Stream Extraction Operator: ";
	Date d;
	cin >> d;
	cout << "The entered date was " << d << endl;
}