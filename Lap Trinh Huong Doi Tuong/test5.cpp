#include <iostream>
using namespace std;

void Show(int x, int y = 1, int z = 2);

int main()
{
    // Show(); --> compile error
    Show(1);
    Show(1, 2);
    Show(1, 2, 3);
    // Show(1, , 1); --> compile error
    return 0;
}

void Show(int x, int y, int z)
{
    cout << x << y << z << endl;
}