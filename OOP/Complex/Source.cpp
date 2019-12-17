#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(int x);
    Point(int x, int y);
    ~Point();

    void Show()
    {
        cout << this->x << ", " << this->y << endl;
    }
    friend const Point operator+(const Point &p, const Point &q);
};

Point::Point()
{
    this->x = 2;
    this->y = 3;
}

Point::Point(int x) : x(x)
{
    this->y = 5;
}

Point::Point(int x, int y) : x(x), y(y)
{
}

Point::~Point()
{
}

const Point operator+(const Point &p, const Point &q)
{
    return Point(p.x + q.x, p.y + q.y);
}

int main()
{
    Point p1(10, 20), p2(20, 30);
    p2 = p1;
    p2.Show();
    Point p3 = p1 + p2;
    p3.Show();
    Point p4 = p1 + 5;
    p4.Show();

    return 0;
}
