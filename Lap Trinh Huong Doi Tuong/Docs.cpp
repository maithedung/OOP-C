#include <iostream>
#include <iomanip>
using namespace std;

/*
// 1. Data type
- 2 loai:
    + Primitive Type
        . bool
        . char
        . int
        . float
        . double
        . void
    + Modifier Primitive Type use:
        . signed
        . unsigned
        . short
        . long
*/

/*
// 2. Indentifier (Dinh danh)
- 3 loai bien:
    + Bien gia tri
    + Bien tham chieu
    + Bien con tro
- Phan loai theo pham vi
    + Bien cuc bo
    + Bien toan cuc
    + Toan tu dinh pham vi ::
*/

/*
// 3. Toan tu dinh pham vi
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
// 4. typedef: tao mot ten moi cho mot kieu du lieu dang ton tai
int main()
{
    typedef int SoNguyen;
    SoNguyen x = 5;
    cout << x;
    return 0;
}
*/

/*
// 5. define && const
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
// 6. Kieu liet ke: Enum
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
// 7. Operator:
1. Toan tu so hoc: +, -, *, /, %, ++, --
2. Toan tu quan he: ==, !=, >, <, >=, <=
3. Toan tu logic: &&, ||, !
4. Toan tu so sanh bit: &, |, ^, ~, >>, <<
5. Toan tu gan: =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
6. Toan tu hon hop: sizeof, x ? y : z, &, *
*/

/*
// 8. Dinh dang in: use function setw(k) ~ #include<iomainip>
int main()
{
    cout << setw(15) << "maithedung"
         << "kimnhatdung";
    return 0;
}
*/

/*
// 9. Bien tham chieu &y: int &y = x
// - La mot ten khac (bi danh) cho bien da dinh nghia
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
// 10. Hang tham chieu: const int &a = 1
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
// 11. Function - Khai bao nguyen mau ham & Dinh nghia ham
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
// 12. Function - Truyen tham tri & tham chieu (bien tham chieu or bien con tro)
void Swap_1(int x, int y) // Truyen tham tri
{
    int t = x;
    x = y;
    y = t;
}

void Swap_2(int &x, int &y) // Truyen tham chieu
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
// 13. Function - Doi so hang: use khi khong wanna change value of doi so truyen vao
void Show(const int x) // Ham voi doi so hang
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
// 14. Funtion - Doi so hang tham chieu
void Show(const int &m) // Doi so hang tham chieu
{
    cout << m++; // bug
}

int main()
{
    int x = 1;
    Show(x);

    return 0;
}
*/

/*
// 15. Function - Doi so mac dinh
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
// 16. Function - Ham tra ve tham chieu: int &Func() {}
int x = 4;
int &Func_1()
{
    return x;
}

int &Func_2()
{
    static int x = 5;
    return x;
}

int main()
{
    cout << x << endl;
    cout << Func_1() << endl
         << Func_2() << endl;

    return 0;
}
*/

/*
// 17. Function - Ham hang: const int Func(){} || int Func() const;
const int Func()
{
    int x = 4;
    ++x;

    return x;
}

int main()
{
    int x = Func();
    // int y = Func()++; // Compile error
    cout << Func() << endl
         << x;

    return 0;
}
*/

/*
// 18. Point: int *a || int* a
// - Point la bien dung de chua dia chi of bien khac && cung data type voi data type cua bien ma no tro toi
// - *: Toan tu tham nhap
// - *p: Gia tri noi dung vung nho point dang tro toi
// - &: Toan tu dia chi
// - &x: Dia chi of bien x
// - int *p && p = &x === int *p = &x

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

/*
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
*/

// 24. Class - Toan tu truy cap
// - Ten lop: ::
// - Doi tuong: .
// Con tro: ->

/*
// 25. Static & Dynamic Allowcation: Huy Dynamic Array bat hop le
int main()
{
    int *a = new int[6];
    // a[6] = {1, 2, 3, 4, 5, 6}; // bug
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;
    a[3] = 3;
    a[4] = 4;
    a[5] = 5;

    int *p = (a + 2);
    cout << *p << endl;
    cout << *(a + 2);

    // delete[] p; // Bug - Khong duoc xoa vua nho thong qua con tro tro toi vung nho do ma phai xoa thong qua bien con tro khai bao vung nho do
}
*/

/*
// 26. Class - Bo sung truy cap
// - public
// - private
// - protected
*/

/*
// 27. Static & Dynamic Allowcation - Ro ri Memory
int main()
{
    int *p, *q;
    p = new int;
    q = new int;
    q = p // Lam mat vung nho da tung duoc q tro toi
        return 0;
}
*/

/*
// 28. Algorithm - Linear Search
*/

// 29. Algorithm - Binary Search