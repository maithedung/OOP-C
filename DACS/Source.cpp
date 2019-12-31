#include <bits/stdc++.h>
using namespace std;

#define e 0.001

// List.h
class List
{
private:
    int n;
    int *p;

public:
    List(const string &fileIn);
    ~List();

    double Function(const float x);
    float BisectionMethod(float a, float b);
    void OutFile(const float x, const string &fileOut);

    friend ostream &operator<<(ostream &out, const List &l);
};

// List.cpp
List::List(const string &fileIn)
{
    ifstream inFile(fileIn);
    if (inFile.fail())
        cout << "\t\t   Failed to read this file!" << endl;
    else
        cout << "\t\t   Read file successfully!" << endl;

    inFile >> this->n;

    p = new int[this->n + 1];
    for (int i = this->n; i >= 0; --i)
        inFile >> *(this->p + i);
    inFile.close();
}

List::~List()
{
    delete[] p;
}

double List::Function(const float x)
{
    double res = 0;
    for (int i = this->n; i >= 0; --i)
        res += *(this->p + i) * pow(x, i);
    return res;
}

float List::BisectionMethod(float a, float b)
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

void List::OutFile(const float x, const string &fileOut)
{
    ofstream outFile(fileOut);
    if (outFile.fail())
        cout << "\t\t   Failed to write this file!" << endl;
    else
        cout << "\t\t   Write file successfully!" << endl;
    outFile << x;
    outFile.close();
}

ostream &operator<<(ostream &out, const List &l)
{
    cout << "\t\t   f(x)=";
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

// main.cpp
void Init(const string &fileIn);
void PrintFunc(List &l);
void AutoCheck(List &l);
void RangeAB(List &l, const string &fileOut);
void PrintRes(const string &fileOut);

// functionExtra.h
void Stars(int n = 50);
void Continue(string &con);
void Menu(const string &fileIn, const string &fileOut);

void Init(const string &fileIn)
{
    ofstream outFile(fileIn);
    if (outFile.fail())
        cout << "\t\t   Failed to write this file!" << endl;
    else
        cout << "\t\t   Write file successfully!" << endl;
    Stars();
    int n;
    srand(time(NULL));

    cout << "\t\t   Enter the degree of the polynomial: ";
    cin >> n;
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

void PrintFunc(List &l)
{
    // Stars();
    cout << l << endl;
}

void AutoCheck(List &l)
{
    cout << "\t\t   Enter a = ";
    float a;
    cin >> a;

    cout << "\t\t   Enter b = ";
    float b;
    cin >> b;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for (int i = b; i >= a; --i)
    {
        if (l.Function(a) * l.Function(i) <= 0)
        {
            cout << "\t\t   Find the solution in the range: " << a << " -->  " << i << endl;
            return;
        }
    }
    cout << "\t\t   No solution was found in the range " << a << " -->  " << b << endl;
}

void RangeAB(List &l, const string &fileOut)
{
    Stars();
    float a;
    float b;
    string con;

    do
    {
        cout << "\t\t   Enter a = ";

        cin >> a;
        cout << "\t\t   f(" << a << ") = " << l.Function(a) << endl;

        cout << "\t\t   Enter b = ";

        cin >> b;
        cout << "\t\t   f(" << b << ") = " << l.Function(b) << endl;

        if (l.Function(a) * l.Function(b) > 0)
        {
            cout << "\t\t   There is no solution in the range a to b."
                 << endl
                 << "\t\t   Would you like to retype?" << endl;
            Continue(con);
            if (con == "N" || con == "n")
            {
                cout << "\t\t   Thank you for using the program (^_^)!." << endl;
                exit(0);
            }
        }
    } while (l.Function(a) * l.Function(b) > 0);
    Stars();
    cout << "\t\t   Find solution x = " << l.BisectionMethod(a, b) << endl;
    l.OutFile(l.BisectionMethod(a, b), fileOut);
}

void PrintRes(const string &fileOut)
{
    ifstream inFile(fileOut);
    if (inFile.fail())
        cout << "\t\t   Failed to read this file!" << endl;
    else
        cout << "\t\t   Read file successfully!" << endl;
    float n;
    inFile >> n;
    Stars();
    cout << "\t\t   Solution x = " << n << endl;
}

void Stars(int n)
{
    cout << "\t\t";
    for (int i = 0; i < n; ++i)
        cout << "*";
    cout << endl;
}

void Continue(string &con)
{
    Stars();
    cout << "\t\t   Enter Y or N to continue: ";
    cin >> con;
    while (con != "Y" && con != "N" && con != "y" && con != "n")
    {
        cout << "\t\t   Enter the wrong please enter again (Y/N): ";
        cin >> con;
    }
    Stars();
    return;
}

void Menu(const string &fileIn, const string &fileOut)
{
    int sel;
    string con;

    while (true)
    {
        system("clear");
        Stars();
        cout << "\t\t|  1. Initialize the function.                   |" << endl;
        cout << "\t\t|  2. Print function to the screen.              |" << endl;
        cout << "\t\t|  3. Auto check the solution of the function.   |" << endl;
        cout << "\t\t|  4. Enter any range a & b.                     |" << endl;
        cout << "\t\t|  5. Print results to the screen.               |" << endl;
        cout << "\t\t|  0. Exit the program.                          |" << endl;
        Stars();
        cout << "\t\t   Enter your selection: ";
        cin >> sel;
        switch (sel)
        {
        case 1:
        {
            Init(fileIn);
            Continue(con);
            while (con == "Y" || con == "y")
            {
                Init(fileIn);
                Continue(con);
            }
        }
        break;
        case 2:
        {
            Stars();
            List l(fileIn);
            PrintFunc(l);
            Continue(con);
            while (con == "Y" || con == "y")
            {
                PrintFunc(l);
                Continue(con);
            }
        }
        break;
        case 3:
        {
            Stars();
            List l(fileIn);
            AutoCheck(l);
            Continue(con);
            while (con == "Y" || con == "y")
            {
                AutoCheck(l);
                Continue(con);
            }
        }
        break;
        case 4:
        {
            List l(fileIn);
            RangeAB(l, fileOut);
            Continue(con);
            if (con == "N" || con == "n")
            {
                cout << "\t\t   Thank you for using the program (^_^)!." << endl;
                exit(0);
            }
        }
        break;
        case 5:
        {
            PrintRes(fileOut);
            Continue(con);
            while (con == "Y" || con == "y")
            {
                PrintRes(fileOut);
                Continue(con);
            }
        }
        break;
        case 0:
            Stars();
            cout << "\t\t   Thank you for using the program (^_^)!." << endl;
            exit(0);
        default:
            cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
            Continue(con);
            if (con == "N" || con == "n")
            {
                cout << "\t\t   Thank you for using the program (^_^)!." << endl;
                exit(0);
            }
            break;
        }
    }
}

int main()
{
    Stars();
    string fileIn;
    cout << "\t\t   Enter the input file name: ";
    cin >> fileIn;
    string fileOut;
    cout << "\t\t   Enter the output file name: ";
    cin >> fileOut;
    Stars();

    Menu(fileIn, fileOut);

    return 0;
}
