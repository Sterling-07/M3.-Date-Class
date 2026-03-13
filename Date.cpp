
#include "Date.h"
#include <string>
#include <array>
using namespace std;

bool Date::Validation(int m, int d, int y) const
{
	if (m < 1 || m > 12)
		return false;
	if (y < 1)
		return false;

}

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

int Date::lastDay(int month, int year) const
{
	array <int, 12> monthDays = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (month == 2 && isLeapYear(year))
		return 29;

	return monthDays[month - 1];
}

