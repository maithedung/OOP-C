/* 
    https://xluffy.github.io/post/noted-c++/
*/

#include <bits/stdc++.h>
using namespace std;

// Function, Arguments, Parameters
void foo(int a, int b)
{
    // a, b goi la parameter
}

// int main()
// {
//     foo(1, 2); // 1, 2 goi la argument
//     return 0;
// }

/* 
1. Truyen doi so gia tri
2. Truyen doi so tham chieu
3. Truyen doi so dia chi
4. Con tro
5. Toan tu tro den
*/

/** 
 * 1. Truyen doi so gia tri
*/

void foo(int p)
{
    p += 1;
    cout << p << endl;
    // p la bien cuc bo, chi hoat dong ben tron ham foo() khi ham foo() ket thuc a, b se bi huy va gia tri truyen vao khong con ton tai
}

void address(int p)
{
    cout << &p << endl;
}

// int main()
// {
//     int a = 10;
//     // foo(a);
//     // cout << a << endl;
//     address(a);
//     cout << &a;
//     return 0;
// }

/** 
 * 2. Truyen doi so tham chieu
 * Nhuoc diem:
 *  - Cach duy nhat de co duoc dau ra la phai tra ve gia tri thong qua tu khoa `return`
 *  - Ham chi tra ve 1 gia tri duy nha cho moi lan goi ham
 *  - Reference variable duoc xem nhu 1 ten khac cua 1 bien nao do co cung kieu du lieu, sau khi duoc khai bao va khoi tao, no dung chung vung nho nho voi bien ma no tham chieu toi
 *  - Khi 1 trong 2 bi huy (bien tham chieu or bien goc) do ra khoi khoi lenh duoc khai bao, vung nho cua 2 bien nay van chua bi huy neu con it nhat 1 bien quan ly
*/

// int main()
// {
//     int n = 0;
//     int &ref = n;
//     {
//         int temp = 5;
//         ref = temp;
//     }

//     cout << ref << endl;
//     cout << n << endl;
//     return 0;
// }

int add_1(int v)
{
    return v + 1;
}

void add_2(int &v)
{
    v++;
}

// int main()
// {
//     int n = 9;
//     add_1(n);
//     cout << add_1(n) << endl;

//     add_2(n);
//     cout << n << endl;

//     return 0;
// }

void circle(float r, float &perimeter, float &area)
{
    const float PI = 3.14;
    perimeter = 2 * r * PI;
    area = r * r * PI;
}

// int main()
// {
//     float r = 5;
//     float perimeter, area;

//     circle(r, perimeter, area);
//     cout << perimeter << endl;
//     cout << area << endl;

//     return 0;
// }

/** 
 * 4. Con tro 
 * Con tro khac voi bien tham chieu la vi no la bien doc lap nen co dia chi khac voi area memory but it tro toi. Nhung value inside of point lai chinh la address of variable but it tro toi
 * Address of point is &(*x) khac address of variable x is &(x)
 * Value of point *x chinh la address of variable x is &(x)
 * Variable la 1 o nho or 1 area nho duoc OS cap phap cho program use de save value into o nho
 * De truy xuat value of variable dang nam giu, program need find toi address of variable and read value
 * Thong thuong ta khong can quan tam toi address vung nho, ta chi can goi dinh danh of variable de lay value can
*/

// int main()
// {
//     // Value of variable and address of variable
//     int x = 5;
//     cout << x << endl
//          << &x;

//     return 0;
// }

/** 
 * 5. Toan tu tro den - dereference operator `*`
 * Cho phep lay value of area memory co address cu the
 * Dung thay doi value of area memory nhu cac ta dung dinh danh
*/

// int main()
// {
//     int x = 5;
//     int &ref = x;

//     cout << &x << endl
//          << &ref;

//     return 0;
// }

// int main()
// {
//     int x = 5;
//     // Binh thuogn lay value qua dinh danh
//     cout << x << endl;

//     // Lay gia tri qua di chi &x
//     cout << *(&x) << endl;

//     return 0;
// }

// int main()
// {
//     // Binh thuong
//     int x = 5;
//     cout << x << endl;
//     x = 10;
//     cout << x << endl;

//     // Dung toan tu tro den
//     int y = 5;
//     cout << y << endl;
//     *(&y) = 10;
//     cout << *(&y) << endl;

//     return 0;
// }

// int main()
// {
//     int *ptr;
//     int value = 5;

//     ptr = &value;
//     cout << ptr << " "
//          << *ptr << " "
//          << &ptr << endl;
//     cout << &value << " "
//          << value;

//     return 0;
// }

// Truy xuat value of varialbe thong qua address area memory do thay vi use dinh danh
int main()
{
    int x = 5;
    int *ptr;

    ptr = &x;
    // Truy xuat thong qua dinh danh
    cout << x << endl;

    // Truy xuat thong qua dia chi of variable
    cout << *(&x) << endl;

    // Truy xyat thong qua con tro
    cout << *ptr;

    return 0;
}