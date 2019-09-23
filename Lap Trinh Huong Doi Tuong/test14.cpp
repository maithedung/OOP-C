#include <iostream>
#include <math.h>
using namespace std;

#define EPS 1e-6

long gt(int n)
{
    long res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

int main()
{
    int i, n;
    double res, s, x;

    n = 0;
    res = 0;

    cout << "Nhap x = ";
    cin >> x;

    do
    {
        s = (pow(-1, n) * pow(x, 2 * n + 1)) / gt(2 * n + 1);
        res += s;
        ++n;
    } while (fabs(s) >= EPS);
    cout << "Result = " << res;
    return 0;
}