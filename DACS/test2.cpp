#include <bits/stdc++.h>
using namespace std;
// void ok();

// int main()
// {
//     ok();
// }

/* Person.h */
class Person
{
private:
    int age;
    string name;
    int x, y;

public:
    Person(int x = 1, int y = 1);
    Person(const Person &p);
    ~Person();

    void NoiChuyen();
    void Show();
    friend void Add(const Person &p);
};

/* Person.cpp */
Person::Person(int x, int y)
{
    this->x = x;
    this->y = y;
}

Person::Person(const Person &p)
{
    this->x = p.x;
    this->y = p.y;
}

Person::~Person()
{
}

void Person::NoiChuyen()
{
    cout << "Noi linh tinh";
}

void Person::Show()
{
    cout << this->x << " " << this->y << endl;
}

void ok(int x = 1, int y = 1)
{
    cout << x << " " << y << endl;
}

void Add(const Person &p)
{
    cout << p.x << " " << p.y << endl;
}

int main()
{
    Person p1(2), p2(2, 3);
    Person p3;
    Person p4(p1);
    p1.Show();
    Add(p1);
    // p2.Show();
    // p3.Show();
    p4.Show();

    return 0;
}
