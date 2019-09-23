#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    cout << p <<endl;
    if (p == NULL)
    {
        cout << "Error";
        exit(0);
    }
    return 1;
}