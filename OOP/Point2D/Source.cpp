#include <iostream>
using namespace std;

/* Point2D.h - Khai bao nguyen mau ham class */
class Point2D
{
    // Thuoc tinh
private:
    int xVal;
    int yVal;

public:
    // const int z;
    static int count;

public:
    static void Display();
    // get
    int Get_xVal()
    {
        return this->xVal;
    }

    // set
    void Set_xVal(int);

    void TinhTien(int);
    void Show();

    friend void Output(const Point2D &);

    // Da nang hoa toan tu bang ham toan cuc
    friend Point2D operator+(const Point2D &, const Point2D &);
    friend Point2D operator+(const Point2D &, const int &);
    friend Point2D operator-(const Point2D &, const Point2D &);
    friend Point2D operator*(const Point2D &, const Point2D &);

    // Da nang hoa toan tu bang ham thanh vien cua lop
    Point2D operator+(const Point2D &);

    Point2D(int);
    // // Point2D(int = 1, int = 2, int const = 2);
    Point2D(int = 1, int = 2);
    Point2D(const Point2D &);

    ~Point2D();
};

/* Point2D.cpp - Dinh nghia class */
// Method
void Point2D::Display()
{
    cout << Point2D::count;
    // this->xVal;
}

void Point2D::TinhTien(int x)
{
    this->xVal += x;
    this->yVal += x;
}

void Point2D::Show()
{
    // cout << this->xVal << " " << this->yVal << " " << this->z << endl;
    cout << this->xVal << " " << this->yVal << endl;
    // cout << Point2D::count << endl;
}

void Output(const Point2D &p)
{
    cout << p.xVal << " " << p.yVal << endl;
}

// Point2D operator+(const Point2D &p1, const Point2D &p2)
// {
//     Point2D p;
//     p.xVal = p1.xVal + p2.xVal;
//     p.yVal = p1.yVal + p2.yVal;
//     return p;
// }

Point2D Point2D::operator+(const Point2D &p2)
{
    Point2D p;
    p.xVal = this->xVal + p2.xVal;
    p.yVal = this->yVal + p2.yVal;
    return p;
}

Point2D operator+(const Point2D &p1, const int &n)
{
    Point2D p;
    p.xVal = p1.xVal + n;
    p.yVal = p1.yVal + n;
    return p;
}

Point2D operator-(const Point2D &p1, const Point2D &p2)
{
    Point2D p;
    p.xVal = p1.xVal - p2.xVal;
    p.yVal = p1.yVal - p2.yVal;
    return p;
}

Point2D operator*(const Point2D &p1, const Point2D &p2)
{
    Point2D p;
    p.xVal = p1.xVal * p2.xVal;
    p.yVal = p1.yVal * p2.yVal;
    return p;
}

int Point2D::count = 0;

// Ham dung
Point2D::Point2D(int x) : xVal(x), yVal(x)
{
    // this->xVal = x;
    // this->yVal = x;
    Point2D::count++;
}

Point2D::Point2D(int x, int y) : xVal(x), yVal(y)
{
    // this->xVal = x;
    // this->yVal = y;
    // this->z = z; // bug
    Point2D::count++;
}

Point2D::Point2D(const Point2D &p)
{
    this->xVal = p.xVal;
    this->yVal = p.yVal;
    Point2D::count++;
}

// Ham huy
Point2D::~Point2D()
{
    Point2D::count--;
}

/* TG.h */
/*
class TG
{
private:
    Point2D a, b, c;

public:
    void Show();
    TG(Point2D = Point2D(1, 2), Point2D = Point2D(2, 3), Point2D = Point2D(3, 4));
    TG(const TG &);
    ~TG();
};
*/

/* TG.cpp */
/*
void TG::Show()
{
    this->a.Show();
    this->b.Show();
    this->c.Show();
}

TG::TG(Point2D a, Point2D b, Point2D c) : a(a), b(b), c(c)
{
}

TG::TG(const TG &t) : a(t.a), b(t.b), c(t.c)
{
}

TG::~TG()
{
}
*/

/* Main Program */
int main()
{
    Point2D p1(1, 2);
    // Point2D p2(2);
    Point2D p3(2, 3);

    p3 = p3 + 5;
    // p1.xVal = 5;
    // p1.yVal = 6;

    // cout << p1.xVal << " " << p1.yVal << " " << endl;
    // cout << p2.xVal << " " << p2.yVal << " " << endl;
    // cout << p3.xVal << " " << p3.yVal << " " << endl;

    // p1.Show();
    // p2.Show();
    // p3.Show();

    // TG tg1;
    // TG tg2(Point2D(1, 1), Point2D(2, 2), Point2D(3, 3));
    // TG tg3(tg2);

    // tg1.Show();
    // cout << endl;
    // tg2.Show();
    // cout << endl;
    // tg3.Show();

    // Point2D *point = new Point2D(1, 2) [5];
    // Point2D arr[5] = {Point2D(1, 2), Point2D(2, 3), Point2D(3, 4)};
    // Point2D a[3];

    // a[0] = Point2D(2, 5);
    // a[0].Show();

    // for (int i = 0; i < 5; ++i)
    //     arr[i].Show();

    // Point2D::Display();
    // cout << endl;
    // Output(p1 + p3);
    // Output(p1 * p3);

    // Output(operator+(p1, p3)); // Goi toan tu + bang ham toan cuc - Cach 2
    // Output(p1.operator+(p3)); // Goi toan tu + bang ham thanh vien cua lop - Cach 2
    // Output(operator*(p1, p3));
    // Output(p3);

    return 0;
}