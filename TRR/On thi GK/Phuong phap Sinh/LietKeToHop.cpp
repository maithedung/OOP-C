#include <iostream>
using namespace std;

int n, stop;

void Init(int *p, int k);
int IsLast(int *p, int k);
void Gen(int *p, int k);
void Out(int *p, int k);
void Method(int *p, int k);

int main()
{
    int k;

    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap k = ";
    cin >> k;

    int *p = new int[n + 1];

    Method(p, k);

    return 0;
}

void Init(int *p, int k)
{
    for (int i = 1; i <= k; ++i)
        *(p + i) = i;
}

int IsLast(int *p, int k)
{
    for (int i = k; i > 0; --i)
        if (*(p + i) != n - k + i)
            return 0;
    return 1;
}

void Gen(int *p, int k)
{
    int i = k;
    while (i > 0 && *(p + i) == n - k + i)
        --i;
    ++*(p + i);
    for (int j = i + 1; j <= k; ++j)
        *(p + j) = *(p + i) + j - i;
}

void Out(int *p, int k)
{
    for (int i = 1; i <= k; ++i)
        cout << *(p + i);
    cout << endl;
}

void Method(int *p, int k)
{
    Init(p, k);
    Out(p, k);
    stop = IsLast(p, k);
    while (!stop)
    {
        Gen(p, k);
        Out(p, k);
        stop = IsLast(p, k);
    }
}
