#include "Point2D.h"

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