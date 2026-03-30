
#include <string>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

    bool Validation(int m, int d, int y) const;

public:
    Date(int m = 1, int d = 1, int y = 1900);

    void setDate(int m, int d, int y);

    int getMonth() const;
    int getDay() const;
    int getYear() const;

    bool isLeapYear() const;
    bool isLeapYear(int year) const;

    int lastDay() const;
    int lastDay(int month, int year) const;

    string Format1() const;
    string Format2() const;
    string Format3() const;

    Date& operator++();
    Date operator++(int);
    Date& operator--();
    Date operator--(int);
    bool operator<(const Date& rhs) const;
    int operator-(const Date& other);

    friend ostream& operator<< (ostream& out, const Date& d);
    friend istream& operator>> (istream& in, Date& d);

};
