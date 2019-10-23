#include <bits/stdc++.h>
using namespace std;

int n, *p, *a, *b, *c;
int t = 0;

void Try(int i);
void Out();
void Init();

int main()
{
    cout << "Nhap n = ";
    cin >> n;

    p = new int[n];
    a = new int[n];
    b = new int[2 * n];
    c = new int[2 * n];

    Init();
    Try(1);

    cout << t;

    return 0;
}

void Try(int i)
{
    for (int j = 1; j <= n; ++j)
    {
        if (*(a + j) && *(b + i + j) && *(c + i - j))
        {
            *(p + i) = j;
            *(a + j) = 0;
            *(b + i + j) = 0;
            *(c + i - j) = 0;
            if (i == n)
                Out();
            else
                Try(i + 1);
            *(a + j) = 1;
            *(b + i + j) = 1;
            *(c + i - j) = 1;
        }
    }
}

void Init()
{
    for (int i = 1; i <= n; ++i)
        *(a + i) = 1;
    for (int i = 2; i <= 2 * n; ++i)
        *(b + i) = 1;
    for (int i = 1 - n; i <= n - 1; ++i)
        *(c + i) = 1;
}

void Out()
{
    for (int i = 1; i <= n; ++i)
        cout << *(p + i);
    cout << endl;
    ++t;
}