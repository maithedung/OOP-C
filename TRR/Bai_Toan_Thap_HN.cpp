#include <iostream>
using namespace std;

int res(int n)
{
    if (n == 1)
        return 1;
    else
        return res(n - 1) * 2 + 1;
}

int tower(int n, char a, char b, char c)
{
    if (n == 1)
        cout << a << c << endl;
    else
    {
        tower(n - 1, a, c, b);
        tower(1, a, b, c);
        tower(n - 1, b, a, c);
    }
}

int main()
{
    int n;
    char a = 'A', b = 'B', c = 'C';
    cout << "Nhap n: ";
    cin >> n;
    cout << "So lan dich chuyen it nhat: " << res(n) << endl;
    tower(n, a, b, c);
    return 1;
}