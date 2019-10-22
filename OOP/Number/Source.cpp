#include <bits/stdc++.h>
using namespace std;

/* Number.cpp */
class Number
{
private:
    float Data;

public:
    Number(float F = 0.0) : Data(F)
    {
    }

    operator float()
    {
        return Data;
    }

    operator int()
    {
        return int(Data);
    }

    Number &operator++()
    {
        this->Data++;
        return *this;
    }

    friend ostream &operator<<(ostream &out, const Number &num)
    {
        out << num.Data;
        return out;
    }
};

/* main.cpp */
int main()
{
    Number N1(9.7), N2(2.6);

    cout << N1;

    return 0;
}