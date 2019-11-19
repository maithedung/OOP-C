#include <bits/stdc++.h>
using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    a = 1;
    b = 2;
    Swap<int>(a, b); // Tuong minh
    Swap(a, b);      // Khong tuong minh
    cout << a << " " << b << endl;

    return 0;
}