
#include <bits/stdc++.h>
using namespace std;

// void NhapMang(int **mang, int n, int m)
// {
//     for (int i = 0; i < n; ++i)
//         for (int j = 0; j < m; ++j)
//         {
//             cout << "a[" << i << "]"
//                  << "[" << j << "] = ";
//             cin >> mang[i][j];
//         }
// }

float CauB(){};

float CauD(int **a, int dong, int cot)
{
    int dem = 0;
    int i, j;
    for (i = 0; i < dong; i++)
        for (j = 0; j < cot; j++)
            if (a[i][j] > 10)
                cout << "a[" << i << "]"
                     << "[" << j << "] = "
                     << a[i][j] << endl;
    return dem;
}

void CauE(int **a, int cot, int i, int *v)
{
    int j;
    for (j = 0; j < cot; j++)
        v[i] = a[i][j];
}

int main()
{
    int n;
    int m;
    cout << "Nhap so dong n: ";
    cin >> n;
    cout << "Nhap so cot m: ";
    cin >> m;
    int **a = new **int[n];
    NhapMang(a, n, m);
    // XuatMang(a, n, m);

    return 0;
}

// 2ABC

class SP
{
private:
    float dongia;
    int soluong;
    float tinhthanhtien(){
        return dongia * soluong;
    };

public:
    char *ten;
    char *ID;
    float thanhtien = tinhthanhtien();

    SP(float dongia = 0, int soluong = 0, char *ten = nullptr, char *ID = nullptr) : dongia(dongia), soluong(soluong), ten(ten), ID(ID){};
    ~SP()
    {
        delete ten;
        delete ID;
    }
};

class hoadon
{
private:
    char *tenkhachhang;
    char *diachi;
    float tinhtongtien()
    {
        return *sanpham->thanhtien * sosanpham;
    };

public:
    SP *sanpham;
    static int sosanpham;
    float tongtien = tinhtongtien();

    hoadon(char *tenkhachhang, char *diachi, SP *sanpham) : tenkhachhang(tenkhachhang), diachi(diachi), sanpham(sanpham){};
    ~hoadon()
    {
        delete tenkhachhang;
        delete diachi;
        delete sanpham;
    }
};