#include <bits/stdc++.h>
using namespace std;

/* Teacher.h */
class Teacher
{
private:
    string name;
    int age;

public:
    Teacher(string name = "", int age = 0);
    ~Teacher();

    friend ostream &operator<<(ostream &out, const Teacher &t);
};

/* Teacher.cpp */
Teacher::Teacher(string name, int age) : name(name), age(age)
{
}

Teacher::~Teacher()
{
}

ostream &operator<<(ostream &out, const Teacher &t)
{
    out << "Name: " << t.name << endl
        << "Age: " << t.age << endl;
    return out;
}

/* Department.h */
class Deparment
{
private:
    Teacher *teacher;
    string nameDep;

public:
    Deparment(string nameDep = "", Teacher *teacher = nullptr);
    ~Deparment();

    friend ostream &operator<<(ostream &out, const Deparment &d);
};

Deparment::Deparment(string nameDep, Teacher *teacher) : nameDep(nameDep), teacher(teacher)
{
}

Deparment::~Deparment()
{
    delete this->teacher;
}

ostream &operator<<(ostream &out, const Deparment &d)
{
    out << d.nameDep << ": " << endl
        << *d.teacher << endl;
    return out;
}

/* main.cpp */
int main()
{
    Teacher *t1 = new Teacher("Mr.Phuong", 1);
    Deparment d("CNTT", t1);
    cout << d;

    return 0;
}