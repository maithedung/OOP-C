#include <bits/stdc++.h>
using namespace std;

/* Date.h */
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 2000);
    Date(const Date &date);
    ~Date();
};

/* Date.cpp */
Date::Date(int d, int m, int y) : day(d), month(m), year(y);
{
}

Date::Date(const Date &date)
{
    this->day = date.day;
    this->month = date.month;
    this->year = date.year;
}

Date::~Date()
{
}

/* Person.h */
class Person
{
private:
    string cmnd;
    string name;
    int age;
    int hpGroup;
    bool gemale;
    Date birthday;
};