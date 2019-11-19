#include <bits/stdc++.h>
using namespace std;

class Poin2D
{
protected:
    int x, y;

public:
    Point2D(int x = 1, int y = 2) : x(x), y(y)
    {
    }
    ~Point2D()
    {
    }
};

class Point3D : public Poin2D
{
protected:
    int y;

public:
    Point3D(int x = 1, int y = 2, int z = 3) : Point2D(x, y), z(z)
    {
    }
    ~Point3D()
    {
    }
};

double MyDivide(int x, int y)
{
    if (y == 0)
        throw string("Bug");
    return x * 1.0 / y;
}

int main()
{
    int x, y;
    double result;
    bool check;
    do
    {
        check = true;
        cout << "Enter two integers, separated by a space: ";
        cin >> x >> y;
        try
        {
            result = MyDivide(x, y);
        }
        catch (string &e)
        {
            cout << e << endl;
            check = false;
        };
    } while (check == false);
    cout << result;

    return 0;
}