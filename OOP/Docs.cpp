#include <iostream>
#include <iomanip>
using namespace std;

/*
// 1. Data type

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
// 19. Point - Con tro hang && Hang con tro
// - Con tro hang const int *p = &x: Khong cho phep thay doi value memory ma point dang tro den thong qua con tro *p
// - Hang con tro int *const p = &x: Khong cho phep thay doi vung nho point dang tro toi, but can change value memory do thong qua con tro

int main()
{
    int x = 1;
    const int *p = &x; // Con tro hang
    // int *const p = &x; // Hang con tro
    return 0;
}
*/

/*
// 20. Point - Gan con tro
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
// 21. Point - Use typedef: typedef int *Q
typedef int P;
typedef int *Q;

int main()
{
    int x, y;
    x = 1;
    y = 2;
    P *p1, *p2;
    p1 = &x;
    p2 = &y;
    cout << *p1 << " " << *p2 << endl;
    cout << p1 << " " << p2 << endl;

    Q p3, p4;
    p3 = &x;
    p4 = &y;
    cout << *p3 << " " << *p4 << endl;
    cout << p3 << " " << p4 << endl;

    return 0;
}
*/

/*
// 22. const_cast: add or loai bo const (thay doi tinh hang cua bien)
*/

/*
// 23. Array
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
// 24. Function - Doi so con tro
void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int m, n;
    m = 1;
    n = 2;
    Swap(&m, &n);
    cout << m << " " << n;

    return 0;
}
*/

/*
// 25. Function - Ham tra ve la tham chieu
int &Func()
{
    static int x = 5;
    return x;
}

int main()
{
    int *p = &Func();
    cout << *p;

    return 0;
}
*/

/*
// 26. Function Pointer - Con tro ham
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

    void (*pSwap)(int &, int &) = Swap; // Con tro ham
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
// 27. Function Pointer - Doi so con tro ham 1
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
// 28. Function Pointer - Doi so con tro ham 2 ?????
bool ascending(int left, int right);
bool descending(int left, int right);
void Swap(int &left, int &right);
void SelectionSort(int *p, int l, bool CompFunc(int, int));
void Show(int *p, int l);

int main()
{
    int a[] = {1, 4, 5, 6, 2, 4, 3, 6};
    int l = sizeof(a) / sizeof(int);
    cout << l << endl;

    // bool (*selectionSort)(int, int) = ascending;
    SelectionSort(a, l, ascending);
    Show(a, l);
    SelectionSort(a, l, descending);
    Show(a, l);

    return 0;
}

bool ascending(int left, int right)
{
    return left > right;
}

bool descending(int left, int right)
{
    return left < right;
}

void Swap(int &left, int &right)
{
    int temp = left;
    left = right;
    right = temp;
}

void SelectionSort(int *p, int l, bool CompFunc(int, int))
{
    for (int i = 0; i < l - 1; ++i)
        for (int j = i + 1; i < l; ++j)
            if ((*CompFunc)(*(p + i), *(p + j)))
                Swap(*(p + i), *(p + j));
}

void Show(int *p, int l)
{
    for (int i = 0; i < l; ++i)
        cout << setw(3) << *(p + i);
}
*/

/*
// 29. Static & Dynamic Allowcation: Check memory duoc cap phat thanh cong hay khong?
int main()
{
    int *p = new int;
    // p = NULL;
    if (p == NULL)
    {
        cout << "Error";
        exit(0);
    }

    cout << "Success" << endl
         << p;

    return 0;
}
*/

/*
// 30. Static & Dynamic Allowcation ????
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

    cout << endl;

    for (int i = 0; i < 3; i++)
        cout << *(p2 + i) << " " << p2 + i << endl;

    return 0;
}
*/

/*
// 31. Static & Dynamic Allowcation: Cap phat dong mang da chieu ????
typedef int IQ;

int main()
{
    int n =5;
    IQ **a = new (IQ *)[n + 1];
    for (int i = 0; i < 5; ++i)
        a[i] = new IQ[3];
}
*/

/*
// 31. Static & Dynamic Allowcation: Huy Dynamic Array bat hop le ?????
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
    cout << *p << " " << p << endl;
    cout << *(a + 2) << " " << a + 2 << endl;
    cout << endl;

    delete[] a;
    cout << *p << " " << p << endl;
    cout << *(a + 2) << " " << a + 2 << endl;

    // delete[] p; // Bug - Khong duoc xoa vua nho thong qua con tro tro toi vung nho do ma phai xoa thong qua bien con tro khai bao vung nho do
}
*/

/*
// 32. Dangling Pointer - Con tro lac
int main()
{
    int *p, *q;

    p = new int;
    *p = 1;
    q = p;

    delete p;
    // p = NULL;

    cout << *p << " " << *q << endl;
    cout << p << " " << q;

    return 0;
}
*/

/*
// 33. Static & Dynamic Allowcation - Ro ri Memory
int main()
{
    int *p, *q;

    p = new int;
    q = new int;
    cout << q << " " << p << endl;

    q = p; // Lam mat vung nho da tung duoc q tro toi

    cout << q << " " << p;

    return 0;
}
*/

/*
// 34. Algorithm - Linear Search
// - Use: Array chua sort
// - Idea: So sanh x voi elements in array den khi gap duoc element can tim
bool LinearSearch(int *p, int length, int x)
{
    for (int i = 0; i < length; ++i)
        if (*(p + i) == x)
            return true;
    return false;
}

int main()
{
    int n, x;

    n = 5;
    x = 7;

    int *p = new int[n];

    for (int i = 0; i < n; ++i)
        *(p + i) = i;

    cout << LinearSearch(p, n, x);

    return 0;
}
*/

/*
// 35. Algorithm - Binary Search
// - Use: Array sorted
// - Idea:
bool BinarySearch(int *p, int length, int x)
{
    int left, right;

    left = 0;
    right = length - 1;

    while (left <= right)
    {
        int k = (left + right) / 2;
        if (*(p + k) == x)
            return true;
        if (*(p + k) > x)
            right = k - 1;
        else
            left = k + 1;
    }
    return false;
}

int main()
{
    int n, x;

    n = 5;
    x = 3;

    int *p = new int[n];

    for (int i = 0; i < n; ++i)
        *(p + i) = i;

    cout << BinarySearch(p, n, x) << endl;

    return 0;
}
*/

/*
// 36. Lap trinh huong cau truc
- C: Lap trinh thu tuc (Lap trinh ham)
- System:
    + Lay Active do center
    + Function is xuong song
*/

/*
// 37. OOP
- Dac diem:
    + Mo ta chinh xac Objects in World
    + Lay Object lam platform build algorthm
    + Design xoay quanh data of system
    + Program duoc divide thanh Objects class
    + Data duoc dong goi, che giau and protect
    + Object lam viec voi nhau qua thong bao
    + Program designed follow cach tu duoi len (bottom-up)
- System:
    + Gom tap hop Objects:
        . Data (Attribute of object)
        . Cac thao tac in data
    + Object can ke thua cac dac tinh of Object other
    + Active thong qua su tuong tac giua Objects nho co che truyen thong diep
        . Thong bao
        . Send & Nhan thong bao
    + Lay data do center
    + Object is xuong song
- Uu diem:
    + Database can't change tu do in program
    + When change cau truc du lieu of a Object, khong can change ma nguon cua Object other ma chi can change mot so thanh phan of Object bi change
    + Can use lai ma nguon, tiet kiem duoc tai nguyen
    + Phu hop voi Big project software, phuc tap
- Note:
    + Muc do OOP of languages khong giong nhau:
        . Eiffel: Absolute
        . Java: Rat cao
        . C++: Nua no nua kia
*/

/*
// 38. Object
- Object is a the hien cu the of class, is a instance ton tai in system
- Dac trung:
    + Dong goi data and handle
    + Attribute: Data of Object
    + Method: Handle of Object
- Cau truc:
    + Attribute trong, Method ngoai
    + 4 Method groups
        . Tu huy
        . Truy xuat infomation
        . Handle nghiep vu
        . Operator
- Define:
    + Dinh danh Object: Define duy nhat for each in system, nham phan biet objects voi nhau
    + Trang thai of Object: Su to hop of values of attributes but object dang co
    + Hoat dong of Object: Is actives but Object co kha nang thuc hien duoc
- About:
    + Dinh danh
    + Attribute (data)
    + Method (active)
- Instance:
    + Each Object co a handle (C++ is address)
    + 2 Object can co value same as but handle khac nhau
*/

/*
// 39. Class
- Objet is a instance cu the, ton tai in system
- Class is a khai niem truu tuong, use de chi mot tap hop Objects co mat in system
- Type Class:
    + Just Attribute, no Method
    + Just Method, no Attribute
    + Both Method and Attribute (pho bien)
    + No Attribute, no Method (call is class truu tuong)
*/

/*
// 40. Object - Attribute
- Is data trinh bay cac dac diem with a Object
- About: 
    + Const
    + Bien
    + Tham so noi tai
*/ 

/*
// 41. Object - Method
- Lien quan toi nhung thu but Object can do
- A Method dap ung a function tac dong up data of Object (attribute)
- Function noi tai of Object (member function)
- Co kieu tra ve
*/

/*
// 42. OOP - Tinh dong goi
- La tien trinh che giau viec thuc thi detail of a Object
- Concept:
    + Is co che binding data and cac thao tac in data thanh the thong nhat
- About:
    + Bao goi: User giao tiep with system qua giao dien
    + Che giau: Ngan chan cac thao thac khong duoc phep tu ben ngoai
- Uu diem:
    + Manage change
    + Protect data
*/


/*
// . Class - Bo sung truy cap
// - public
// - private
// - protected
*/

// . Class - Toan tu truy cap
// - Ten lop: ::
// - Doi tuong: .
// Con tro: ->