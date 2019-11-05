#include <bits/stdc++.h>
using namespace std;

/* Point2D.h */
class Point2D
{
private:
    int xVal, yVal;

public:
    Point2D(int x = 1, int y = 2);
    virtual ~Point2D();

    void Show();

    friend ostream &operator<<(ostream &out, const Point2D &p);
};

/* Point2D.cpp */

Point2D::Point2D(int x, int y) : xVal(x), yVal(y)
{
}

Point2D::~Point2D()
{
    cout << "Cha" << endl;
}

void Point2D::Show()
{
    cout << this->xVal << "," << this->yVal << endl;
    return;
}

ostream &operator<<(ostream &out, const Point2D &p)
{
    out << p.xVal << "," << p.yVal << endl;
    return out;
}

/* Point3D.h */
class Point3D : public Point2D
{
    int zVal;

public:
    Point3D(int x = 3, int y = 3, int z = 3);
    virtual ~Point3D();

    void Display();
};

// Point3D::Point3D(int x, int y, int z) : xVal(x), yVal(y), zVal(z)
// {
// }

Point3D::Point3D(int x, int y, int z) : Point2D(x, y), zVal(z)
{
}

Point3D::~Point3D()
{
    cout << "Con" << endl;
}

void Point3D::Display()
{
    // cout << this->xVal << "," << this->yVal << "," << this->zVal << endl;
    return;
}

/* main.cpp */
int main()
{
    // Point2D p1;
    // Point2D p2(3);
    // Point2D p3(4, 5);
    // cout << p1 << p2 << p3;
    // p1.Show();
    // p2.Show();
    // p3.Show();

    // Point3D p4, p5(7), p6(6, 7, 8);
    // p4.Display();
    // p5.Display();
    // p6.Display();

    Point2D *p2D = new Point3D(1, 2, 3);

    return 0;
}
