#include <iostream>
using namespace std;

void Show(const int &m)
{
    cout << ++m;
}
void Display(const int &m)
{
    cout << m + 1;
}
int main()
{
    int x = 1;
    Show(x);
    Display(x);
    return 0;
}