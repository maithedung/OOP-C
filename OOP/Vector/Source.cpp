#include <iostream>
using namespace std;

/* Vector.h */
class Vector
{
public:
    int size;
    int *data;

public:
    Vector(int s = 3, int t = 1);
    ~Vector();

    // Da nang hoa toan tu
    friend ostream &operator<<(ostream &out, const Vector &v);
    friend istream &operator>>(istream &in, Vector &v);
    int &operator[](const int i);
};

/* Vector.cpp */
Vector::Vector(int s, int t) : size(s)
{
}

Vector::~Vector()
{
}

ostream &operator<<(ostream &out, const Vector &v)
{
    for (int i = 0; i < v.size; ++i)
        out << *(v.data + i) << " ";
    return out;
}

istream &operator>>(istream &in, Vector &v)
{
    cout << "Size = ";
    in >> v.size;
    v.data = new int[v.size];
    for (int i = 0; i < v.size; ++i)
        in >> *(v.data + i);
    return in;
}

int &Vector::operator[](const int i)
{
    int static n = 0;
    return ((i >= 0) && (i < this->size)) ? *(this->data + i) : n;
}

/* Main Program */
int main()
{
    Vector v1;

    cout << v1.size;

    return 0;
}