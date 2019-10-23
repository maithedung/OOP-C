#include <bits/stdc++.h>
using namespace std;

void Swap(int &a, int &b);

class List
{
private:
    int n;
    int *p;

public:
    List()
    {
        ifstream inFile("dung.txt");

        if (inFile.fail())
            cout << "Failed to open this file!" << endl;
        else
            cout << "Success to open this file!" << endl;

        inFile >> this->n;

        p = new int[this->n];
        for (int i = 0; i < this->n; ++i)
            inFile >> *(this->p + i);
        inFile.close();
    }

    ~List()
    {
    }
    void Show()
    {
        cout << "Result: ";
        for (int i = 0; i < this->n; ++i)
            cout << *(this->p + i) << " ";
        cout << endl;
    }

    void Add(int k, const int valueInsert)
    {
        if (k < 0)
            k = 0;
        if (k > this->n)
            k = this->n;
        for (int i = this->n; i > k; --i)
            *(this->p + i) = *(this->p + i - 1);
        *(this->p + k) = valueInsert;
        ++this->n;

        OutFile();
    }

    void Update(const int k, const int valueReplace)
    {
        *(this->p + k) = valueReplace;
        OutFile();
    }

    void Erase(int k)
    {
        if (this->n < 1)
        {
            cout << "No data" << endl;
            return;
        }
        if (k < 0)
            k = 0;
        else if (k >= this->n)
            k = this->n - 1;
        for (int i = k; i < this->n - 1; ++i)
            *(this->p + i) = *(this->p + i + 1);
        --this->n;

        OutFile();
    }

    void Sort()
    {
        for (int i = 0; i < this->n - 1; ++i)
            for (int j = i + 1; j < this->n; ++j)
                if (*(this->p + i) > *(this->p + j))
                    Swap(*(this->p + i), *(this->p + j));
    }

    void Search(const int valueSearch)
    {
        Sort();
        int l, m, r;

        l = 0;
        r = this->n - 1;
        cout << m << " " << l << " " << r << endl;

        while (l <= r && valueSearch >= *(this->p + l) && valueSearch <= *(this->p + r))
        {
            m = l + (((float)(r - l) / (*(this->p + r) - *(this->p + l))) * (valueSearch - *(this->p + l)));
            cout << m << " " << l << " " << r << endl;

            if (*(this->p + m) == valueSearch)
            {
                cout << "Search result:" << endl
                     << "Search value: " << *(this->p + m) << endl
                     << "Search index: " << m + 1 << endl;
                return;
            }

            if (*(this->p + m) < valueSearch)
                l = m + 1;
            else
                r = m - 1;
        }
        cout << "Not found value: " << valueSearch << endl;
    }

    void OutFile()
    {
        ofstream outFile("dung.txt");
        outFile << this->n << endl;
        for (int i = 0; i < this->n; ++i)
            outFile << *(this->p + i) << endl;
        outFile.close();
    }

    friend ostream &operator<<(ostream &out, const List &l)
    {
        for (int i = 0; i < l.n; ++i)
            out << *(l.p + i) << " ";
        return out;
    }
};

int main()
{
    List l;
    // cout << l;
    l.Show();
    // l.Add(5, 13);
    // l.Update(5, 15);
    // l.Erase(5);
    l.Sort();
    l.Show();
    l.Search(5);

    return 0;
}

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}