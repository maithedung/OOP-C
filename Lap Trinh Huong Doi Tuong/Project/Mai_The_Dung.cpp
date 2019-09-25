#include <iostream>
using namespace std;

// Khai bao nguyen mau ham
void InArray(int *p, int n);
void OutArray(int *p, int n);
void InsertElement(int *p, int &n, int k, int valueInsert);
void DeleteElement(int *p, int &n, int k);
void SelectionSort(int *p, int n);
void InterpolationSearch(int *p, int n, int valueSearch);
void ReplaceElement(int *p, int n, int k);
void Swap(int &a, int &b);

// Chuong trinh chinh
int main()
{
    // Khai bao bien
    int dk = 1;
    int n, k, valueInsert, valueSearch, valueReplace;
    int *p = new int[n];

    // Gan gia tri ban dau
    n = 0;

    // In bang menu
    for (int i = 0; i < 50; ++i)
        cout << "*";
    cout << endl
         << endl
         << "Bai tap 1" << endl
         << "Ten sinh vien: Mai The Dung" << endl
         << "Lop: 18TCLC-DT1" << endl
         << "Nhom: 18N13" << endl
         << "Ma sinh vien: 102180118" << endl
         << "Ten file: 18N13_MaiTheDung.cpp" << endl
         << endl;
    for (int i = 0; i < 50; ++i)
        cout << "*";
    cout << endl
         << endl
         << "Vui long nhap tuy chon ben duoi; Go so thu tu va" << endl
         << "Nhan phim <Enter>:" << endl
         << "1. Nhap mang" << endl
         << "2. Xuat mang" << endl
         << "3. Chen phan tu vao vi tri thu k. In ket qua" << endl
         << "4. Xoa phan tu tai vi tri thu k. In ket qua" << endl
         << "5. Sap xep mang. In ket qua" << endl
         << "6. Tim kiem vi tri phan tu. In ket qua" << endl
         << "7. Cap nhat phan tu thu k. In ket qua" << endl
         << "8. Thoat chuong trinh" << endl;

    do
    {
        // Khai bao bien
        int select;

        // Switch case
        cout << endl;
        for (int i = 0; i < 50; ++i)
            cout << "*";
        cout << endl
             << "Nhap vao lua chon cua ban va nhan <Enter>: ";
        cin >> select;
        cout << endl;
        for (int i = 0; i < 50; ++i)
            cout << "*";
        cout << endl;

        switch (select)
        {
        case 1:
            cout << "Moi ban nhap so phan tu cua mang n = ";
            cin >> n;
            InArray(p, n);
            break;
        case 2:
            if (!n)
            {
                cout << "Mang chua duoc nhap hoac khong co phan tu. Moi ban nhap lai mang!" << endl;
                break;
            }
            OutArray(p, n);
            break;
        case 3:
            if (!n)
            {
                cout << "Mang chua duoc nhap hoac khong co phan tu. Moi ban nhap lai mang!" << endl;
                break;
            }
            cout << "Nhap so nguyen can chen: ";
            cin >> valueInsert;
            cout << "Nhap vi tri can chen k = ";
            cin >> k;
            InsertElement(p, n, k - 1, valueInsert);
            break;
        case 4:
            if (!n)
            {
                cout << "Mang chua duoc nhap hoac khong co phan tu. Moi ban nhap lai mang!" << endl;
                break;
            }
            cout << "Nhap vi tri can xoa k = ";
            cin >> k;
            DeleteElement(p, n, k - 1);
            break;
        case 5:
            if (!n)
            {
                cout << "Mang chua duoc nhap hoac khong co phan tu. Moi ban nhap lai mang!" << endl;
                break;
            }
            SelectionSort(p, n);
            break;
        case 6:
            if (!n)
            {
                cout << "Mang chua duoc nhap hoac khong co phan tu. Moi ban nhap lai mang!" << endl;
                break;
            }
            cout << "Nhap so nguyen can tim: ";
            cin >> valueSearch;
            InterpolationSearch(p, n, valueSearch);
            break;
        case 7:
            if (!n)
            {
                cout << "Mang chua duoc nhap hoac khong co phan tu. Moi ban nhap lai mang!" << endl;
                break;
            }
            cout << "Nhap vi tri can cap nhat k = ";
            cin >> k;
            ReplaceElement(p, n, k - 1);
            break;
        case 8:
            dk = 0;
            cout << "Cam on ban da thuc hien chuong trinh. Good luck today ^^!";
        default:
            cout << "Nhap sai lua chon. Moi ban nhap lai!";
            break;
        }
    } while (dk);

    return 0;
}

void InArray(int *p, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "Moi nhap phan tu thu " << i + 1 << " = ";
        cin >> *(p + i);
    }
}

void OutArray(int *p, int n)
{
    cout << "Ket qua: ";
    for (int i = 0; i < n; ++i)
        cout << *(p + i) << " ";
    cout << endl;
}

void InsertElement(int *p, int &n, int k, int valueInsert)
{
    if (k < 0)
        k = 0;
    if (k > n)
        k = n;
    for (int i = n; i > k; --i)
        *(p + i) = *(p + i - 1);
    *(p + k) = valueInsert;
    ++n;

    OutArray(p, n);
}

void DeleteElement(int *p, int &n, int k)
{
    if (n < 1)
    {
        cout << "Mang rong khong the xoa" << endl;
        return;
    }
    if (k < 0)
        k = 0;
    else if (k >= n)
        k = n - 1;
    for (int i = k; i < n - 1; ++i)
        *(p + i) = *(p + i + 1);

    --n;

    OutArray(p, n);
}

void SelectionSort(int *p, int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = i + 1; j < n; ++j)
            if (*(p + i) > *(p + j))
                Swap(*(p + i), *(p + j));
    cout << "Sau khi sap xep:" << endl;
    OutArray(p, n);
}

void InterpolationSearch(int *p, int n, int valueSearch)
{
    SelectionSort(p, n);

    int l, m, r;

    l = 0;
    r = n - 1;

    while (l <= r && valueSearch >= *(p + l) && valueSearch <= *(p + r))
    {

        m = l + (((float)(r - l) / (*(p + r) - *(p + l))) * (valueSearch - *(p + l)));

        if (*(p + m) == valueSearch)
        {
            cout << "Ket qua can tim:" << endl
                 << "Index = " << m << endl
                 << "Value = " << *(p + m) << endl;
            return;
        }

        if (*(p + m) > valueSearch)
            l = m + 1;
        else
            r = m - 1;
    }
    cout << "Khong tim thay phan tu co gia tri = " << valueSearch << endl;
}

void ReplaceElement(int *p, int n, int k)
{
    cout << "Nhap so nguyen can cap nhat tai vi tri k = " << k + 1 << ": ";
    cin >> *(p + k);
    OutArray(p, n);
}

void Swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}