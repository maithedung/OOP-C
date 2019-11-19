#include <bits/stdc++.h>
using namespace std;

template<class T>
class List
{
private:
    int length;
    T *data;

public:
    List() : length(0), data(nullptr)
    {
    }
    List(int l) : length(l)
    {
        assert(this->length >= 0);
        if (l > 0)
            this->data = new T[this->length];
        else
            this->data = nullptr;
    }
    ~List()
    {
        delete[] this->data;
    };

    void Erase()
    {
        delete[] this->data;
        this->data = nullptr;
        this->length = 0;
    }
    int &operator[](int index)
    {
        assert(index >= 0 && index < this->length);
        return this->data[index];
    }
    int GetLength() const
    {
        return this->length;
    }
    ostream &operator<<(ostream &out, const List &l)
    {
        out << "List = ";
        for (int i = 0; i < l.length; ++i)
            out << l.data[i];
        out << endl;
        return out;
    }
    void Reallocate(int newLength)
    {
        Erase();
        if (newLength <= 0)
            return;
        this->data = new int[newLength];
        this->length = newLength;
    }
    Insert(int value, int index)
    {
        assert(index >= 0 & index <= this->length);
        int *data = new T[this->length + 1];
        for (int i = 0; i < index; ++i)
            data[i] = (*this)[i];
        data[index] = value;
        for (int j = index; j < this->length; ++j)
            data[j + 1] = (*this)[j];
        delete[] this->data;
        this->data = data;
        ++this->length;
    }
}