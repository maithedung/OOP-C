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
Date::Date(int d, int m, int y) : day(d), month(m), year(y)
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
Date d;

class Person
{
private:
    string Cmnd;
    string Name;
    int Age;
    int HpGroup;
    bool Gemale;
    Date Birthday;

public:
    Person(string cmnd = "102180118", string name = "Zeroken", int age = 19, int hpGroup = 1, bool gemale = true, Date birthday = d);
    Person(const Person &p);
    ~Person();

    friend ostream &operator<<(ostream &out, const Person &p);
};

/* Person.cpp */

Person::Person(string cmnd, string name, int age, int hpGroup, bool gemale, Date birthday)
    : Cmnd(cmnd), Name(name), Age(age), HpGroup(hpGroup), Gemale(gemale), Birthday(birthday)
{
}

Person::Person(const Person &p)
{
    this->Cmnd = p.Cmnd;
    this->Name = p.Name;
    this->Age = p.Age;
    this->HpGroup = p.HpGroup;
    this->Gemale = p.Gemale;
    this->Birthday = p.Birthday;
}

Person::~Person()
{
}

/* CongTrinhKhoaHoc.h */
class CongTrinhKhoaHoc
{
private:
    int codeCT;
    int yearXB;
    string nameCT;
    bool areaXB;
};

/* NhanVien.h */
class NhanVien
{
private:
    string codeNV;
    string nameNV;
    Date dateHD;
    bool gemale;
    double sarary;
};

/* Phong.h */
class Phong
{
private:
    string codeRoom;
    int people;
    bool status;
    Date getRoom;
    Date putRoom;
};
