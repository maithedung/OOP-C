#include <bits/stdc++.h>
using namespace std;

int n, *p;

void Try(int i);
void Out();

int main()
{
    cout << "Nhap n = ";
    cin >> n;

    p = new int[n];

    Try(0);

    return 0;
}

void Try(int i)
{
    for (int j = 0; j < 2; ++j)
    {
        *(p + i) = j;
        if (i == n - 1)
            Out();
        else
            Try(i + 1);
    }
}

void Out()
{
    for (int i = 0; i < n; ++i)
        cout << *(p + i);
    cout << endl;
}