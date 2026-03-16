
#include "Date.h"
#include <string>
#include <array>
#include <iostream>
using namespace std;

Date::Date(int m, int d, int y)
	{
		if (Validation(m, d, y))
		{
			month = m;
			day = d;
			year = y;
		}
		else
		{
			month = 1;
			day = 1;
			year = 1900;
		}
	}

void Date::setDate(int m, int d, int y)
{
	if (Validation(m, d, y))
	{
		month = m;
		day = d;
		year = y;
	}
	else
	{
		month = 1;
		day = 1;
		year = 1900;
	}
}

int Date::getMonth() const
{
	return month;
}

int Date::getDay() const
{
	return day;
}

int Date::getYear() const
{
	return year;
}

bool Date::isLeapYear() const
{
	return isLeapYear(year);
}

bool Date::isLeapYear(int year) const
{
	if (year % 400 == 0)
		return true;
	else if (year % 100 == 0)
		return false;
	else if (year % 4 == 0)
		return true;
	else
		return false;
}

int Date::lastDay() const
{
	return lastDay(month, year);
}

int Date::lastDay(int m, int y) const
{
	array <int, 12> monthDays = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (m == 2 && isLeapYear(y))
		return 29;

	return monthDays[m - 1];
}

bool Date::Validation(int m, int d, int y) const
{
	if (m < 1 || m > 12)
		return false;
	if (y < 1)
		return false;

	int max = lastDay(m, y);
	return d >= 1 && d <= max;
}

string Date::Format1() const
{
	return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

string Date::Format2() const
{
	array<string, 12> months =
	{ "January","February","March","April","May","June","July","August","September","October","November","December" };

	return months[month - 1] + " " +
		to_string(day) + ", " +
		to_string(year);
}

string Date::Format3() const
{
	array<string, 12> months =
	{ "January","February","March","April","May","June","July","August","September","October","November","December" };

	return to_string(day) + " " +
		months[month - 1] + " " +
		to_string(year);
}