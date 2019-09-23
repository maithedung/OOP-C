#include <iostream>
using namespace std;

void hoanvi(int &a, int &b);

int x = 5;
int main()
{
    // int x = 1;
    // cout << x << ::x;

    int m = 5, n = 10;
    // hoanvi(m, n);
    cout << m << endl
         << n;
    return 0;
}

void hoanvi(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}