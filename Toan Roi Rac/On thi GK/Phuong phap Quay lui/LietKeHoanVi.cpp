#include <bits/stdc++.h>
using namespace std;

int n, *p, *c;

void Try(int i);
void Init();
void Out();

int main()
{
    p = new int[n];
    c = new int[n];

    cout << "Nhap n = ";
    cin >> n;

    Init();
    Try(1);

    return 0;
}

void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        if (*(c + j) == 1)
        {
            *(p + i) = j;
            *(c + j) = 0;
            if (i == n)
                Out();
            else
                Try(i + 1);
            *(c + j) = 1;
        }
    }
}

void Init()
{
    for (int i = 1; i <= n; ++i)
        *(c + i) = 1;
}

void Out()
{
    for (int i = 1; i <= n; ++i)
        cout << *(p + i);
    cout << endl;
}