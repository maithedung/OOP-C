#include <bits/stdc++.h>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y){};
    Date(const Date &date)
    {
        this->day = date.day;
        this->month = date.month;
        this->year = date.year;
    };
    ~Date(){};
};

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
    Person(string cmnd = "102180118", string name = "Zeroken", int age = 19, int hpGroup = 1, bool gemale = true, Date birthday = d) : Cmnd(cmnd), Name(name), Age(age), HpGroup(hpGroup), Gemale(gemale), Birthday(birthday){};
    Person(const Person &p)
    {
        this->Cmnd = p.Cmnd;
        this->Name = p.Name;
        this->Age = p.Age;
        this->HpGroup = p.HpGroup;
        this->Gemale = p.Gemale;
        this->Birthday = p.Birthday;
    };
    ~Person(){};

    // friend ostream &operator<<(ostream &out, const Person &p);
};

class List
{
    private:
    
};