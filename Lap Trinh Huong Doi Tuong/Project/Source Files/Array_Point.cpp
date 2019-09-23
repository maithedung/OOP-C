#include <iostream>
using namespace std;

bool TD(int left, int right)
{
    return left < right;
}

bool GD(int left, int right)
{
    return left > right;
}

void In(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> *(p + i);
    }
}

void Out(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void Sort(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (GD(*(p + j), *(p + i)))
                Swap(*(p + j), *(p + i));
        }
    }
}

int main()
{
    int a[50];
    In(a, 5);
    Out(a, 5);
    Sort(a, 5);
    Out(a, 5);
    return 0;
}
