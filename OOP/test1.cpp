#include <iostream>
using namespace std;

void getValueFromKeyboard(int a);

int main()
{
    // float a = nhan(nhan(5, 7), nhan(0, 5));
    // cout << a;
    // in_xinchao();
    getValueFromKeyboard();
    return 0;
}

float nhan(int a, int b)
{
    int res = a * b;
    return res;
}

int in_xinchao()
{
    cout << "Xin chao!";
    cout << nhan(5, 5);
    return 0;
}

void getValueFromKeyboard()
{
    int32_t value;
    cin >> value;
    if (value < 0)
        return;
    else
        cout << value << endl;
}