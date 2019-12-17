#include <bits/stdc++.h>
using namespace std;

#define e 0.001

class List
{
private:
    int n;
    int *p;

public:
    List()
    {
        ifstream inFile("DUNG.INP");
        if (inFile.fail())
            cout << "Failed to read this file!" << endl;
        else
            cout << "Read file successfully!" << endl;

        inFile >> this->n;

        p = new int[this->n + 1];
        for (int i = this->n; i >= 0; --i)
            inFile >> *(this->p + i);
        inFile.close();
    }

    double Function(const float x)
    {
        double res = 0;
        for (int i = this->n; i >= 0; --i)
            res += *(this->p + i) * pow(x, i);
        return res;
    }

    float Dual(float a, float b)
    {
        float res;

        if (Function(a) > 0)
        {
            res = a;
            a = b;
            b = res;
        }

        do
        {
            res = (a + b) / 2.0;
            if (Function(res) > 0)
                b = res;
            else
                a = res;
        } while (abs(Function(res)) > e);

        return res;
    }

    friend ostream &operator<<(ostream &out, const List &l)
    {
        cout << "f(x)=";
        for (int i = l.n; i >= 0; --i)
        {
            if (*(l.p + i) == 0)
                continue;
            if (*(l.p + i) > 0 && i == l.n)
                out << "";
            else if (*(l.p + i) > 0)
                out << "+";
            if (i == 1 && *(l.p + i) == -1)
                out << "-x";
            else if (i == 1 && *(l.p + i) == 1)
                out << "x";
            else if (i == 1)
                out << *(l.p + i) << "x";
            else if (i == 0)
                out << *(l.p + i);
            else if (*(l.p + i) == 1)
                out << "x^" << i;
            else if (*(l.p + i) == -1)
                out << "-x^" << i;
            else
                out << *(l.p + i) << "x^" << i;
        }
        return out;
    }
};

void Init()
{
    ofstream outFile("DUNG.INP");
    if (outFile.fail())
        cout << "Failed to write this file!" << endl;
    else
        cout << "Write file successfully!" << endl;

    srand(time(NULL));
    int n = rand() % 10 + 3;
    outFile << n << endl;
    int f;
    do
        f = rand() % 20 - 10;
    while (f == 0);
    outFile
        << f << " ";
    for (int i = 0; i < n; ++i)
        outFile << rand() % 20 - 10 << " ";

    outFile.close();
}

void Stars()
{
    for (int i = 0; i < 60; ++i)
        cout << "*";
    cout << endl;
}

void OutFile(float x)
{
    ofstream outFile("DUNG.OUT");
    if (outFile.fail())
        cout << "Failed to write this file!" << endl;
    else
        cout << "Write file successfully!" << endl;
    outFile << "Result: x = " << x;
    outFile.close();
}

int main()
{
    Init();
    List l;
    cout << l << endl;
    Stars();

    float a, b;

    cout << "Enter values a and b such that f (a) * f (b) = 0" << endl;
    do
    {
        printf("Enter a = ");
        scanf("%f", &a);
        cout << "f(" << a << ") = " << l.Function(a) << endl;
        printf("Enter b = ");
        scanf("%f", &b);
        cout << "f(" << b << ") = " << l.Function(b) << endl;
        Stars();
        if (l.Function(a) * l.Function(b) > 0)
            cout << "Enter the wrong range. Retype:" << endl;
    } while (l.Function(a) * l.Function(b) > 0);

    cout << "Result: x = " << l.Dual(a, b) << endl;
    OutFile(l.Dual(a, b));

    return 0;
}
