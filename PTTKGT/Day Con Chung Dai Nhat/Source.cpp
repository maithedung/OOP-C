#include <bits/stdc++.h>
using namespace std;

int **c, n, m;
string string1, string2, s;
char *s1, *s2;

void Init()
{
    c = new int *[n + 1];
    for (int i = 0; i <= n; ++i)
        *(c + i) = new int[m + 1];

    for (int i = 0; i <= n; ++i)
        for (int j = 0; j <= m; ++j)
            *(*(c + i) + j) = 0;
}

void Show()
{
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
            cout << *(*(c + i) + j) << " ";
        cout << endl;
    }
}

int Max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    return num2;
}

void LCS()
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (s1[i] == s2[j])
                *(*(c + i) + j) = *(*(c + i - 1) + j - 1) + 1;
            else
                *(*(c + i) + j) = Max(*(*(c + i - 1) + j), *(*(c + i) + j - 1));

    for (int i = n; i > 0; --i)
        for (int j = m; j > 0; --j)
            if ((*(*(c + i) + j) == *(*(c + i - 1) + j - 1)) + 1 && i != 0 && j != 0)
                s += *(s1 + i);
}

int main()
{
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap m = ";
    cin >> m;
    cout << endl;

    cout << "Nhap chuoi s1 = ";
    cin >> string1;
    cout << "Nhap chuoi s2 = ";
    cin >> string2;
    cout << endl;

    s1 = new char[n + 1];
    for (int i = 1; i <= n; ++i)
        *(s1 + i) = string1[i - 1];
    s2 = new char[m + 1];
    for (int j = 1; j <= m; ++j)
        *(s2 + j) = string2[j - 1];

    s = "";

    Init();
    LCS();
    cout << s;
    Show();

    return 0;
}