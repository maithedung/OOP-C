#include <iostream>
#include <iomanip>
using namespace std;

/*
// 1. Toan tu dinh pham vi
int x = 5;
// int main()
// {
//     int x = 1;
//     cout << x << endl << ::x;
//     return 0;
// }

// int main()
// {
//     int y = 1;
//     x = y;
//     cout << x << endl
//          << y;
//     return 0;
// }
*/

/*
// 2. typedef: tao mot ten moi cho mot kieu du lieu dang ton tai
int main()
{
    typedef int SoNguyen;
    SoNguyen x = 5;
    cout << x;
    return 0;
}
*/

/*
// 3. define && const
#define PI 3.14

int main()
{
    const int x = 5;
    int const y = 6;
    cout << PI << endl
         << x << endl
         << y;
    return 0;
}
*/

/*
// 4. Kieu liet ke: Enum
int main()
{
    enum Color
    {
        RED = 1;
        BLUE = 2;
        GREEN = 3;
    };
    Color c = GREEN;
    cout << c;
    return 0;
}
*/

/*
// 5. Operator:
1. Toan tu so hoc: +, -, *, /, %, ++, --
2. Toan tu quan he: ==, !=, >, <, >=, <=
3. Toan tu logic: &&, ||, !
4. Toan tu so sanh bit: &, |, ^, ~, >>, <<
5. Toan tu gan: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
6. Toan tu hon hop: sizeof, x ? y : z, &, *
*/

/*
// 6. Dinh dang in: use function setw(k) ~ #include<iomainip>
int main()
{
    cout << setw(15) << "maithedung"
         << "kimnhatdung";
    return 0;
}
*/

/*
// 7. Bien tham chieu &y: int &y = x
int main()
{
    int x = 5;
    int &y = x;
    y = 1;
    cout << x << endl;
    ++x;
    cout << y << " " << x;
    return 0;
}
*/

/*
//8. Hang tham chieu: const int &a = 1
int main()
{
    const int a = 1;
    int b = 2;
    const int &x = a;
    const int &y = b;
    const int &z = 3;
    ++b;
    // y = 2;
    // ++a;
    cout << x << endl
         << y << endl
         << z;
    return 0;
}
*/

/*
// 9. Khai bao nguyen mau ham & Dinh nghia ham
void Sum(int a, int b); // Khai bao nguyen mau ham

main()
{
    int m, n;
    m = 2;
    n = 3;
    Sum(m, n);
    return 0;
}

void Sum(int a, int b) // Dinh nghia ham
{
    cout << a + b;
}
*/

/*
// 10. Truyen tham tri & tham chieu
void Swap_1(int x, int y) // Truyen tham chieu
{
    int t = x;
    x = y;
    y = t;
}

void Swap_2(int &x, int &y) // Truyen tham tri
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int m, n;
    m = 2;
    n = 3;
    Swap_1(m, n);
    cout << m << " " << n << endl;
    Swap_2(m, n);
    cout << m << " " << n;
    return 0;
}
*/

/*
// 11. Function - Doi so ham: use khi khong wanna change value of doi so truyen vao
void Show(const int x)
{
    cout << x << endl;
    // cout << x++; 
}

int main()
{
    int x = 1;
    const int y = 1;
    Show(x);
    Show(y);
    return 0;
}
*/

/*
// 12. Function - Doi so mac dinh
void Show_1(int x = 1, int y = 2, int z = 3);

void Show_2(int x = 2, int y = 3, int z = 4)
{
    cout << x << " " << y;
}

int main()
{
    Show_1();
    Show_1(1);
    Show_1(1, 2);
    Show_1(1, 2, 3);
    // Show_1(1, , 3); // compile error
    return 0;
}

void Show_1(int x, int y, int z)
{
    cout << x << " " << y << " " << z << endl;
}
*/

/*
// 13. Function - Ham tra ve tham chieu: int &Func(){}
*/

/*
// 14. Function - Ham hang: const int Func(){} || int Func() const;
*/

/*
// 15. Point: int *a || int* a
// - Point la bien dung de chua dia chi of bien khac && cung data type voi data type cua bien ma no tro toi
// - *: Toan tu tham nhap
// - *p: Gia tri noi dung vung nho point dang tro toi
// - &: Toan tu dia chi
// - &x: Dia chi of bien x
// - p = &x === int *p = &x
int main()
{
    int x = 5;
    int *a = &x;
    // cout << *a << endl
    //      << x << endl
    //      << a;
    cout << *a << endl
         << x;
}
*/

/*
// 16. Point - Con tro hang && Hang con tro: const int x = 1 === int const x = 1
int main()
{
    int x = 1;
    const int *p = &x; // Con tro hang
    // int *const p = &x; // Hang con tro
    return 0;
}
*/

/*
// 17. Point - Gan con tro
int main()
{
    int x = 1;
    int *p1, *p2;
    p1 = &x;
    cout << *p1 << " " << *p2 << " " << x << endl;
    ++*p1;
    // *p++; // ???
    cout << *p1 << " " << *p2 << " " << x << endl;
    p2 = p1;
    ++x;
    cout << *p1 << " " << *p2 << " " << x << endl;
    return 0;
}
*/

/*
// 18. Point - Use typedef: typedef int *Q
*/

/*
// 19. Array
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    cout << a << endl;
    cout << &a[4] << endl;

    // cout << a;
    // for (int i = 0; i < 5; i++)
    // cout << a[i] << endl;
}
*/

/*
// 20. Type Data

Kieu du lieu nguyen thuy:
1. boolean
2. void
3. char
4. int
5. float
6. double

Phan mo rong cua kieu du lieu
1. signed
2. unsigned
3. short
4. long

int main()
{
    int
    long int
}
*/

/*
// 21. Function Pointer - Khai bao con tro ham
int Show(int x)
{
    return x;
}

void Swap(int &x, int &y)
{
    int t = x;
    x = y;
    y = t;
}

int main()
{
    int m, n;

    m = 10;
    n = 5;

    void (*pSwap)(int &, int &) = Swap;
    (*pSwap)(m, n);

    cout << m << endl
         << n;

    // int n = 5;
    // cout << Show(n) << endl;
    // cout << Show;

    return 0;
}

*/

/*
// 22. Function Pointer - Use con tro ham lam doi so
void Show(int *p, int length)
{
    for (int i = 0; i < length; i++)
        cout << setw(3) << *(p + i);
}

int main()
{
    int *p;

    p = new int[5];
    for (int i = 0; i < 5; i++)
        *(p + i) = i;
    Show(p, 5);
    return 0;
}
*/

// 23. Static & Dynamic Allowcation
int main()
{
    // int *p1 = new int;
    // *p1 = 1;
    // cout << *p1 << " " << p1 << endl;
    // delete p1;
    // cout << *p1 << " " << p1 << endl;

    int *p2 = new int[3];
    for (int i = 0; i < 3; i++)
        *(p2 + i) = i;

    for (int i = 0; i < 3; i++)
        cout << *(p2 + i) << " " << p2 + i << endl;

    cout << endl;

    delete[] p2;

    for (int i = 0; i < 3; i++)
        cout << *(p2 + i) << " " << p2 + i << endl;

    return 0;
}

// 24. Toan tu truy cap
// - Ten lop: ::
// - Doi tuong: .
// Con tro: ->