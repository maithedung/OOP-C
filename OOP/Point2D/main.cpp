#include <iostream>
#include "./Point2D.h"
using namespace std;

int main()
{
    Point2D p1;
    // Point2D p2(2);
    Point2D p3(2, 3);
    // p1.xVal = 5;
    // p1.yVal = 6;

    // cout << p1.xVal << " " << p1.yVal << " " << endl;
    // cout << p2.xVal << " " << p2.yVal << " " << endl;
    // cout << p3.xVal << " " << p3.yVal << " " << endl;

    p1.Show();
    // p2.Show();
    p3.Show();

    return 0;
}
