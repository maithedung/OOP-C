#include "Point2D.h"

void Point2D::TinhTien(int x)
{
    this->xVal += x;
    this->yVal += x;
}

void Point2D::Show()
{
    cout << this->xVal << " " << this->yVal << " " << this->z << endl;
}

Point2D::Point2D(int x)
{
    this->xVal = x;
    this->yVal = x;
}

Point2D::Point2D(int x, int y) : xVal(x),
// yVal(y)
{
    // this->xVal = x;
    this->yVal = y;
}

Point2D::Point2D(const Point2D &p)
{
    this->xVal = p.xVal;
    this->yVal = p.yVal;
}

Point2D::~Point2D()
{
}