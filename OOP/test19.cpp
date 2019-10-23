#include <bits/stdc++.h>
using namespace std;

class hocsinh
{
    char hoten[25];
    int lop;
    float dtoan, dly, dhoa, tb;

public:
    void nhap()
    {
        cout << "Ho ten:";
        gets(hoten);
        cout > lop;
        cout > dtoan;
        cout > dly;
        cout > dhoa;
        tb = (dtoan + dly + dhoa) / 3;
    }
    void xuat()
    {
        cout << "\nhoten:" << hoten;
        cout << "\nlop:" << lop;
        cout << "\ndiem toan:" << dtoan;
        cout << "\ndiem ly:" << dly;
        cout << "\ndiem hoa:" << dhoa;
        cout << "\ndiemtrungbinh:" << tb;
    }
    void sapxep()
    {
        if (tb >= 5)
        {
            cout << "\n " << hoten;
            cout << " " << lop;
            cout << " " << dtoan;
            cout << " " << dly;
            cout << " " << dhoa;
            cout << " " << tb;
        }
    }
};

hocsinh sinhvien[100];

main()
{
    int i, n;
    clrscr();
    cout > n;
    for (i = 0; i < n; i++)
    {
        sinhvien[i].nhap();
    }
    for (i = 0; i < n; i++)
    {
        sinhvien[i].xuat();
        cout << "\n";
    }
    cout = 5 "; cout<<"\nHoten Lop Diem toan Diem ly Diem hoa Diem tb "; for(i=0;i<n;i++) { sinhvien[i].sapxep(); } getch(); } Bài 2: Một cửa hang bán thực phẩm khô gồm hai loại: loại đóng hộp va không đóng hộp. Để quản lý, người ta xây dựng lớp THUCPHAM gồm các thong tin: Tên thực phẩm, Giá cả. Từ đó dẫn xuất ra hai lớp TPHOP (thực phẩm hộp) có them thong tin Số hộp và TPKHOP (thực phẩm không hộp) có them thong tin Khối lượng Cài đặt ba lớp trên với các phương thức nhập, xuất dữ liệu. Viết chương trình chính thực hiện nhập và xuất hai thực phẩm thuộc hai lớp TPHOP và TPKHOP. #include #include #include class thucpham { char tenthucpham[25]; float giaca; public: void nhap() { cout<<"\nten thuc pham : ";gets(tenthucpham); cout>giaca; } void xuat() { cout<<"\nTen thuc pham : "<<tenthucpham; cout<<"\nGia ca : "<<giaca; } }; class tphop:public thucpham { int sohop; public: void nhap() { thucpham::nhap(); cout>sohop; } void xuat() { thucpham::xuat(); cout<<"\nSo hop : "<<sohop; cout<<"\n "; } }; class tpkhop:public thucpham { float khoiluong; public: void nhap() { thucpham::nhap(); cout>khoiluong; } void xuat() { thucpham::xuat(); cout<<"\n Khoi luong : "<<khoiluong; } }; tphop tp[100]; tpkhop t[100]; void main() { int i,n; clrscr(); cout>n; for(i=0;i<n;i++) { tp[i].nhap(); } for(i=0;i<n;i++) { tp[i].xuat(); } cout>n; for(i=0;i<n;i++) { t[i].nhap(); } for(i=0;i<n;i++) { t[i].xuat(); } getch(); } Bài 3: Tạo lớp CARD để quản lý sách trong thư viện. Yêu cầ mỗi loại sách cần lưu trữ các thong tin: Tựa đề sách, Tác giả, Số lượng sách. Xây dựng các phương thức để nhập và hiển thị các thong tin về sách. Viết chương trình chính thức hiện: Nhập thông tin cho n cuốn sách Hiển thị ra màn hình thong tin về nhứng cuốn sách có số lượng lớn nhất. #include #include #include class card { char tuadesach[100],tacgia[100]; int soluongsach; public: void nhap() { cout<<" Tua de sach : ";gets(tuadesach); cout<<" Tac gia : ";gets(tacgia); cout>soluongsach; } void xuat() { cout<<" Tua de sach : "<<tuadesach; cout<<"\nTac gia : "<<tacgia; cout<<"\nSo luong sach : "<<soluongsach; } }; card s[100]; main() { int i,n,max; clrscr(); cout>n; for(i=0;i<n;i++) { s[i].nhap(); } max=s[1].soluongsach; for(i=0;i<n;i++) { if(s[i].soluongsach>max) { max=s[i].soluongsach; } cout<<" Cuon sach co so luong lon nhat la : "<<max; s[i].xuat() getch(); } Bài 4:Tạo lớp DATE có các thông tin: Ngày, tháng, năm và các phương thức nhập, xuất dữ liệu. Xây dựng lớp NHANSU với các thông tin: Tên, ngày sinh (kiểu DATE), số chứng minh nhân dân và các phương thức nhập xuất dữ liệu Viết chương trình chính thực hiện nhập vào một danh sách n nhân sự, sau đó sắp xếp danh sách theo chiều tăng dần của tên và hiển thị danh sách đã sắp ra màn hình. #include #include #include #include class date { int ngay,thang,nam; public: void nhap() { cout>ngay; cout>thang; cout>nam; } void xuat() { cout<<"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "<<ngay<<" /
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        "<<thang<<" / "<<nam; } }; class nhansu:public date { int cmnd; public: char ten[25]; void nhap() { cout<<" Ten : ";gets(ten); cout<<" ngay sinh "; date::nhap(); cout>cmnd; } void xuat() { cout<<"\n "<<"
           "<<" ------ngaysinh-- -----"<<" | -------so cmnd-- ---------"; for(i=0;i<n;i++) { nv[i].xuat(); } getch(); } Bài 5: Xây dựng lớp PHANSO có các thông tin: Tử số, Mẫu số, Ngày sinh và các phương thức: Phương thức thiết lập với 2 tham số (Tử số, mẫu số) Phương thức nhập để nhập phân số Phương thức xuất để hiển thị phân số ra màn hình (dạng: tử số/mẫu số) Phép toán cộng, nhân hai phân số Viết chương trình chính thực hiện nhập hai phâm số, tính tổng, tích của chúng và hiểm thị kết quả ra màn hình. #include #include #include class ps { int tu,mau; public: friend ostream & operator<<(ostream&,ps); friend istream & operator>>(istream&,ps&); ps operator + (ps); ps operator - (ps); }; ostream & operator<<(ostream & os,ps u) { os<<u.tu<<" / "<<u.mau<<endl; return os; } istream & operator>>(istream & is,ps & u) { cout>u.tu; cout>u.mau; return is; } ps ps::operator +(ps v) { ps w; w.tu=tu*v.mau+v.tu*mau; w.mau=mau*v.mau; return w; } ps ps::operator-(ps h) { ps g; g.tu=tu*h.mau-h.tu*mau; g.mau=mau*h.mau; return g; } void main() { ps a,b,c,d; clrscr(); cin>>a;cout<<a; cin>>b;cout<<b; c=a+b;d=a-b; cout<<"\nKet qua phep cong la : "<<c; cout<<"\nKet qua phep tru la : "<<d; getch(); } Bài 6. Xây dựng lớp XE gồm các thông tin: Nhãn hiệu, Giá, Năm sản xuất yêu cầu các thong tin này chỉ có ở lớp XE và các lớp dẫn xuất từ lớp XE được phép truy cập. Xây dựng lớp OTO kế thừa từ lớp XE và có thêm các thông tin: Số chỗ ngồi, trọng tải và các phương thức nhập xuất dữ liệu Viết chương trình chính thực hiện nhập vào một danh sách n ô tô, sau đó hiển thị danh sách vừa nhập. #include #include #include class xe { char nhanhieu[100]; float gia; int namsanxuat; public: void nhap() { cout<<" nhan hieu : ";gets(nhanhieu); cout>gia; cout>namsanxuat; } void xuat() { cout<<"\nNhan hieu : "<<nhanhieu; cout<<"\nGia : "<<gia; cout<<"\nNam san xuat : "<<namsanxuat; } }; class oto:public xe { int socho; float trongtai; public: void nhap() { cout>socho; cout>trongtai; xe::nhap(); } void xuat() { cout<<"\nSo cho : "<<socho; cout<<"\nTrong tai : "<<trongtai; xe::xuat(); } }; xe x[100]; main() { int i,n; clrscr(); cout>n; for(i=0;i<n;i++) { x[i].nhap(); } cout<<"\nDanh sach o to vua nhap : "; for(i=0;i<n;i++) { x[i].xuat(); } getch(); } Bài 7. Xây dựng lớp CDCANHAC có các thông tin: Tên đĩa, Số lượng bài, Giá tiền và các phương thức nhập, xuất dữ liệu. Viết chương trình chính thực hiện nhập vào một danh sách n sinh viên, sau đó hiển thị danh sách vừa nhập. Tìm và hiển thị thong tin của đĩa có số lượng bài hát lớn nhất #include #include #include class cdcanhac { char tendia[25]; float giatien; public: int soluongbai; void nhap() { cout<<" Ten dia : ";gets(tendia); cout>soluongbai; cout>giatien; } void xuat() { cout<<"\nTen dia : "<<tendia; cout<<"\nSo luong bai : "<<soluongbai; cout<<"\nGia tien : "<<giatien; } }; cdcanhac cd[100]; main() { int i,n,max; clrscr(); cout>n; for(i=0;i<n;i++) { cd[i].nhap(); } max=cd[1].soluongbai; cout<<"\nCD co so luong bai lon nhat la : "; for(i=0;i<n;i++) { if(cd[i].soluongbai>max) { max=cd[i].soluongbai; cd[i].xuat(); } } getch(); } Bài 8. Xây dựng lớp cơ sở VECTO có các thông tin về hai toạ độ trong mặt phẳng hai chiều: x, y và các phương thức: Phương thức nhập để nhập toạ độ x,y Phương thức xuất để hiển thị toạ độ của véc tơ ra màn hình. Các phép toán cộng, trừ hai véc tơ (Cho hai véc tơ A(x1,y1) và B(x2,y2) thì A+B là véc tơ có toạ độ (x1+x2,y1+ y2), A-B là véc tơ có toạ độ (x1-x2,y1- y2) Viết chương trình chính thực hiện nhập vào hai véc tơ A, B tính tổng, hiệu của chúng và in kết quả ra màn hình. #include #include #include class vecto { int x,y; public: friend ostream & operator<<(ostream&,vecto); friend istream & operator>>(istream&,vecto &); vecto operator +(vecto); vecto operator -(vecto); }; ostream & operator<<(ostream& os,vecto u) { os<<"("<<u.x<<", "<<u.y<<") "<<endl; return os; } istream & operator>>(istream& is,vecto &u) { cout>u.x; cout>u.y; return is; } vecto vecto::operator +(vecto v) { vecto w; w.x=x+v.x; w.y=y+v.y; return w; } vecto vecto::operator -(vecto h) { vecto t; t.x=this->x-h.x; t.y=this->y-h.y; return t; } void main() { vecto a,b,c,d; clrscr(); cin>>a;cout<<a; cin>>b;cout<<b; c=a+b;d=a-b; cout<<" Ket qua phep cong la : "<<c; cout<<"\nKet qua phep tru la : "<<d; getch(); } Bài 9. Xây dựng lớp cơ sở DATE có các thông tin: Ngày, tháng, năm và các phương thức nhập, xuất dữ liệu. Để quản lý hang hoá, người ta xây dựng lớp PHIEUNHAP với các thong tin: Tên hang, Ngày nhập, Số lượng và các phương thức nhập, xuất dữ liệu Viết chương trình chính thực hiện: Nhập vào một danh sách n phiếu nhập Hiển thị ra màn hình thong tin về những phiế nhập có số lượng hàng lớn hơn 100. #include #include #include class date { int ngay,thang,nam; public: void nhap() { cout>ngay; cout>thang; cout>nam; } void xuat() { cout<<"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 "<<thang<<" / "<<nam; } }; class phieunhap:public date { char tenhang[25]; public: int ngaynhap,soluong; void nhap() { cout<<" Ten hang : ";gets(tenhang); //cout>ngaynhap; cout>soluong; date::nhap(); } void xuat() { cout<<"\n "<<tenhang; // cout<<"\nNgay nhap : "<<ngaynhap; cout<<"
    cout << "\n+-----------+--------------+-------------+";
    cout << "\nTen hang | So luong | Ngay nhap";
    cout << "\n+-----------+--------------+-------------+";
    for (i = 0; i < n; i++)
    {
        if (ph[i].soluong > 100)
        {
            ph[i].xuat();
        }
        cout << "\n+-----------+--------------+-------------+";
    }
    getch();
}
Bài 10. Xây dựng lớp cơ sở PERSON có các thông tin : Họ tên, Giới tính, Ngày sinh và các phương thức nhập, xuất dữ liệu.Xây dựng lớp dẫn xuất STUDENT để quản lý sinh viên có thêm các thông tin : Điểm thi, Lớp và các phương thức nhập xuất dữ liệu Viết chương trình chính thực hiện nhập vào một danh sách n sinh viên, sau đó hiển thị danh sách vừa nhập #include #include #include class person
{
    char hoten[25], gioitinh[10];
    int ngay, thang, nam;

public:
    void nhap()
    {
        cout << "Ho ten:";
        gets(hoten);
        cout << "Gioi tinh:";
        gets(gioitinh);
        cout > ngay;
        cout > thang;
        cout > nam;
    }
    void xuat()
    {
        cout << "\n " << hoten;
        cout << " " << gioitinh;
        cout << " " << ngay << "/" << thang << "/" << nam;
    }
};
class student : public person
{
public:
    int lop;
    float diemthi;
    void nhap()
    {
        person::nhap();
        cout > lop;
        cout > diemthi;
    }
    void xuat()
    {
        person::xuat();
        cout << " " << lop;
        cout << " " << diemthi;
    }
};
student sv[100];
main()
{
    int i, n;
    clrscr();
    cout > n;
    for (i = 0; i < n; i++)
    {
        sv[i].nhap();
    }
    cout << "\nDanh sach sinh vien vua nhap la:";
    cout << "\n+-------+--------------+----------------+---------+-------------+";
    cout << "\nHo ten | Gioi tinh | Ngay sinh | Lop | Diem thi";
    cout << "\n+-------+--------------+----------------+---------+-------------+";
    for (i = 0; i < n; i++)
    {
        sv[i].xuat();
        cout << "\n+-------+--------------+----------------+---------+-------------+";
    }
    getch();
}
