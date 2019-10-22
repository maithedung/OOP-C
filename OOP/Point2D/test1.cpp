#include <bits/stdc++.h>
using namespace std;

/* Point2D.h */
class Point2D
{
    // Thuoc tinh
public:
    int xVal;
    int yVal;

public:
    Point2D(int = 1, int = 2);
    Point2D(const Point2D &);

    ~Point2D();

    friend void Output(const Point2D &);
    friend Point2D operator+(const Point2D &, const int &);
    friend Point2D operator+(const Point2D &p1, const Point2D &p2);
};

/* Point2D.cpp */
Point2D::Point2D(int x, int y) : xVal(x), yVal(y)
{
}

Point2D::Point2D(const Point2D &p)
{
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}

Point2D::~Point2D()
{
}

void Output(const Point2D &p)
{
    cout << p.xVal << " " << p.yVal << endl;
}

Point2D operator+(const Point2D &p1, const int &n)
{
    Point2D p;
    p.xVal = p1.xVal + n;
    p.yVal = p1.yVal + n;
    return p;
}

Point2D operator+(const Point2D &p1, const Point2D &p2)
{
    return Point2D(p1.xVal + p2.xVal, p1.yVal + p2.yVal);
}

/* main.cpp */
int main()
{
    Point2D p1(1, 2);
    Point2D p2(2, 3);

    Output(p1 = p2);
    Output(p1 + 4);
    Output(p1 + p2);

    return 0;
}