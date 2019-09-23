#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // double x = 12.34;
    // cout << setiosflags(ios::showpoint) << setprecision(3);
    // cout << x;

    cout << setw(5) << "KHOA"
         << "CNTT";

    int x = 5;
    int &y = x;
    y = 1;
    cout << x;
    x++;
    cout << y;
    return 0;
}