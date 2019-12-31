#include <bits/stdc++.h>
using namespace std;

struct phanso
{
    int tu, mau;
} MANG[10][20];

void NhapMANG()
{
    int count = 1;
    for (int i = 0; i < 1; ++i)
        for (int j = 0; j < 2; j++)
        {
            cout << "Nhap PS thu " << count << endl;
            cout << "TS = ";
            cin >> MANG[i][j].tu;
            cout << "MS = ";
            cin >> MANG[i][j].mau;
            ++count;
        }
}

void XuatMANG()
{

    int count = 1;
    cout << "Danh sach phan so gom:" << endl;
    for (int i = 0; i < 1; ++i)
        for (int j = 0; j < 2; j++)
        {
            cout << "PS thu " << count << ": " << MANG[i][j].tu << "/" << MANG[i][j].mau << endl;
        }
}

void XuatMauSoChiaHet3()
{
    int count = 1;
    cout << "Phan so co mau so chia het cho 3 gom:" << endl;
    for (int i = 0; i < 1; ++i)
        for (int j = 0; j < 2; j++)
            if (MANG[i][j].mau % 3 == 0)
            {
                cout << "PS thu " << count << ": " << MANG[i][j].tu << "/" << MANG[i][j].mau << endl;
                ++count;
            }
}

phanso CongPS(phanso a, phanso b)
{
    phanso temp;
    temp.tu = a.tu + b.tu;
    temp.mau = a.mau + b.mau;
    return temp;
}

void VectorPS(phanso *vt)
{
    for (int i = 0; i < 1; ++i)
        for (int j = 0; j < 2; j++)
        {
            vt[i].tu += MANG[i][j].tu;
            vt[i].mau += MANG[i][j].mau;
        }
}

int main()
{
    phanso *Vector;
    Vector = new phanso[20];
    NhapMANG();
    XuatMANG();
    XuatMauSoChiaHet3();
    CongPS(MANG[1][1], MANG[1][2]);
    VectorPS(Vector);

    return 0;
}