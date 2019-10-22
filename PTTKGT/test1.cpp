#include <iostream>
using namespace std;

float Power(float x, int n)
{
    if (n == 0)
        return 1;
    return x * Power(x, n - 1);
}

float Fibonaci(int n)
{
    if (n < 2)
        return n;
    return Fibonaci(n - 1) + Fibonaci(n - 2);
}

float Mul(int n)
{
    if (n == 0)
        return 1;
    return Mul(n / 10) * (n % 10);
}

float Res(int n)
{
    if (!n)
        return 0;
    float res = 1;

    while (n)
    {
        res *= n % 10;
        n /= 10;
        cout << n << endl;
    }

    return res;
}

int Dem(char *a, int i)
{
    if (a[i] == 0)
        return 0;
    return 1 + Dem(a, i + 1);
}

int main()
{
    // cout << Power(2, 10);
    // cout << Fibonaci(30);
    // cout << Mul(55299) << endl;
    // cout << Res(55399);
    char a[] = "maithedung";
    cout << Dem(a, 0);

    return 0;
}