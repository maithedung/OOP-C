#include <bits/stdc++.h>
using namespace std;

void ConvertReverseBin1(int n)
{
    if (n == 0)
        return;
    else
    {
        return ConvertReverseBin1(n - 1);
        cout << n;
    }
}

void ConvertReverseBin2(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << n % 2;
        return ConvertReverseBin2(n / 2);
    }
}

string ConvertReverseBin3(int n)
{
    if (n == 0)
        return "";
    else
        return char(n % 2) + ConvertReverseBin3(n / 2);
}

void ConvertBin1(int n)
{
    if (n != 0)
    {
        ConvertBin1(n / 2);
        cout << n % 2;
    }
}

long ConvertBin2(int n)
{
    char b;
    if (n == 0)
        return 0;
    else
        b = n % 2;
    return ConvertBin2(n / 2) * 10 + b;
}

int main()
{
    int a;
    a = 12;
    ConvertReverseBin1(a);
    ConvertReverseBin2(a);
    cout << ConvertReverseBin3(a) << endl;
    ConvertBin1(a);
    cout << endl
         << ConvertBin2(a);

    return 0;
}