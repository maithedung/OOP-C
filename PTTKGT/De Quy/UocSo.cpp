#include <bits/stdc++.h>
using namespace std;

bool Divisor(int a, int b)
{
    if (a > b)
        return false;
    else if (a == b)
        return true;
    else
        return Divisor(a, b - a);
}

int main()
{
    int a, b;
    a = 3;
    b = 5;
    if (Divisor(a, b))
        cout << a << " la uoc so cua " << b;
    else
        cout << a << " khong la uoc so cua " << b;
    return 0;
}