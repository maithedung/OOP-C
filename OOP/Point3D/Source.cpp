#include <iostream>
using namespace std;

// /* Complex.h */
// class Complex
// {
// private:
//     int num;

// public:
//     Complex(int v = 5);
//     ~Complex();

//     friend ostream &operator<<(ostream &out, const Complex &num);
// };

// /* Complex.cpp */
// Complex::Complex(int v) : num(v)
// {
// }

// Complex::~Complex()
// {
// }

// ostream &operator<<(ostream &out, const Complex &num)
// {
//     out << num << endl;
//     return out;
// }

// /* main.cpp */
// int main()
// {
//     Complex c1(5);
//     cout << c1;

//     return 0;
// }

/* Point3D.h */
class Point3D
{
private:
    int x, y, z;

public:
    Point3D(int x = 1, int y = 2, int z = 3);
    ~Point3D();

    friend ostream &operator<<(ostream &out, const Point3D &p);
    friend istream &operator>>(istream &in, Point3D &p);
    friend Point3D operator+(const Point3D &p1, const Point3D &p2);
};

/* Point3D.cpp */
Point3D::Point3D(int x, int y, int z) : x(x), y(y), z(z)
{
}

Point3D::~Point3D()
{
}

ostream &operator<<(ostream &out, const Point3D &p)
{
    out << p.x << " " << p.y << " " << p.z << endl;
    return out;
}

istream &operator>>(istream &in, Point3D &p)
{
    cout << "x = ";
    in >> p.x;
    cout << "y = ";
    in >> p.y;
    cout << "z = ";
    in >> p.z;
    return in;
}

Point3D operator+(const Point3D &p1, const Point3D &p2)
{
    Point3D p;
    p.x = p1.x + p2.x;
    p.y = p1.y + p2.y;
    p.z = p1.z + p2.z;
    return p;
}

/* main.cpp */
int main()
{
    Point3D p1(2, 9, 0), p2(3, 6, 9), p3;
    // cin >> p1;
    cout << p1 << endl
         << p2 << endl
         << p3;
    // cout << p1 << endl
    //      << p2 << endl
    //      << p1 + p2;

    return 0;
}
