#include <bits/stdc++.h>
using namespace std;

int n, *p, stop;

void Init();
int IsLast();
void Gen();
void Swap(int &a, int &b);
void Out();
void Method();

int main()
{
    cout << "Nhap n = ";
    cin >> n;

    p = new int[n + 1];

    Method();

    return 0;
}

void Init()
{
    for (int i = 1; i <= n; ++i)
        *(p + i) = i;
}

int IsLast()
{
    for (int i = 1; i <= n; ++i)
        if (*(p + i) != n - i + 1)
            return 0;
    return 1;
}

void Gen()
{
    int i = n - 1;
    while (i > 0 && *(p + i) > *(p + i + 1))
        --i;
    int k = n;
    while (*(p + i) > *(p + k))
        --k;

    Swap(*(p + i), *(p + k));

    int l, r;

    l = i + 1;
    r = n;
    while (l < r)
    {
        Swap(*(p + l), *(p + r));
        ++l;
        --r;
    }
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Out()
{
    for (int i = 1; i <= n; ++i)
        cout << *(p + i);
    cout << endl;
}

void Method()
{
    Init();
    Out();
    stop = IsLast();
    while (!stop)
    {
        Gen();
        Out();
        stop = IsLast();
    }
}