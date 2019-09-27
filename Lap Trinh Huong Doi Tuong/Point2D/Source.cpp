#include <iostream>
using namespace std;

class Point2D
{
public:
    int xVal;
    int yVal;

public:
    void TinhTien(int);

    Point2D();

    Point2D(int);

    Point2D(int, int);

    Point2D(const Point2D &);
};

void Point2D::TinhTien(int x)
{
    this->xVal += x;
    this->yVal += x;
}

Point2D::Point2D()
{
    this->xVal = 1;
    this->yVal = 2;
}

Point2D::Point2D(int x)
{
    this->xVal = x;
    this->yVal = x;
}

Point2D::Point2D(int x, int y)
{
    this->xVal = x;
    this->yVal = y;
}

int main()
{
    Point2D p1, p2(2), p3(2, 3);
    p1.xVal = 5;
    p1.yVal = 6;

    cout << p1.xVal << " " << p1.yVal << " " << endl;
    cout << p2.xVal << " " << p2.yVal << " " << endl;
    cout << p3.xVal << " " << p3.yVal << " " << endl;
    cout<<

    return 0;
}