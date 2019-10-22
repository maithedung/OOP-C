#include <iostream>
using namespace std;

void Init(int *p, int n);
int IsLast(int *p, int n);
void Gen(int *p, int n);
void Out(int *p, int n);
void Method(int *p, int n);

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;

    int *p = new int[n + 1];
    Method(p, n);
    return 0;
}

void Init(int *p, int n)
{
    for (int i = 1; i <= n; ++i)
        *(p + i) = 0;
}

int IsLast(int *p, int n)
{
    for (int i = 1; i <= n; ++i)
        if (*(p + i) == 0)
            return 0;
    return 1;
}

void Out(int *p, int n)
{
    for (int i = 1; i <= n; ++i)
        cout << *(p + i);
    cout << endl;
}

void Gen(int *p, int n)
{
    int i = n;
    while (*(p + i) == 1)
        --i;
    *(p + i) = 1;
    for (int j = i + 1; j <= n; ++j)
        *(p + j) = 0;
}

void Method(int *p, int n)
{
    Init(p, n);
    Out(p, n);
    int stop = IsLast(p, n);
    while (!stop)
    {
        Gen(p, n);
        Out(p, n);
        stop = IsLast(p, n);
    }
}
