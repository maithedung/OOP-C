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
    vector<Teacher *> teacher;
    string nameDep;

public:
    Deparment(string nameDep = "");
    ~Deparment();

    void addTeacher(Teacher *t);

    friend ostream &operator<<(ostream &out, const Deparment &d);
};

/* Deparment.cpp */
Deparment::Deparment(string nameDep) : nameDep(nameDep)
{
}

Deparment::~Deparment()
{
    this->teacher.clear();
}

void Deparment::addTeacher(Teacher *t)
{
    this->teacher.push_back(t);
}

ostream &operator<<(ostream &out, const Deparment &d)
{
    out << d.nameDep << ": " << endl;
    for (int i = 0; i < d.teacher.size(); ++i)
        out << *d.teacher[i];
    out << endl;
    return out;
}

/* main.cpp */
int main()
{
    Teacher *t1 = new Teacher("Mr.Phuong", 40);
    Teacher *t2 = new Teacher("Mr.Thinh", 30);
    Teacher *t3 = new Teacher("Mr.Dung", 20);
    Deparment d("Khoa CNTT");
    d.addTeacher(t1);
    d.addTeacher(t2);
    d.addTeacher(t3);
    cout << d;

    // cout << *t1 << *t2 << *t3;
    delete t1;
    delete t2;
    delete t3;
    // cout << *t1 << *t2 << *t3;
    cout << d;

    return 0;
}