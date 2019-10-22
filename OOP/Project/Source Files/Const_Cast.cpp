#include <iostream>
using namespace std;

void Show(char *str)
{
    cout << str;
}

int main()
{
    const char *str = "DUT";
    // Show(str);
    Show(const_cast<char *>(str));
    return 0;
}