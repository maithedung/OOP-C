#include <iostream>
using namespace std;

int x = 4;
int &Func()
{
    return x;
}

int main()
{
    cout << x;
    cout << Func();
    Func() = 8;
    cout << x;
    system("pause");
    return 0;
}