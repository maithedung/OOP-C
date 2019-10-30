#include <bits/stdc++.h>
using namespace std;

int i = 0;

int Syracuse(int n)
{
    ++i;
    cout << "Count " << i << ":" << endl;
    if (n == 0 || n == 1)
        return 1;
    else if (n % 2 == 0)
    {
        cout << n << endl;
        return Syracuse(n / 2);
    }
    else
    {
        cout << n << endl;
        return Syracuse(3 * n + 1);
    }
}

int main()
{
    cout << Syracuse(5);

    return 0;
}