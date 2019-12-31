#include <iostream>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include <vector>
#include <string>
using namespace std;

class VeXe;
class ChuXe;
class NhanVienQuanLy;
class LichVaoRa;

class Date
{
private:
	int Ngay;
	int Thang;
	int Nam;
	int Gio;
	int Phut;
	int Giay;
public:
	Date(int Nam = 0, int Thang = 0, int Ngay = 0, int Gio = 0, int Phut = 0, int Giay = 0);
	~Date();

	void setNgay(int d);
	void setThang(int m);
	void setNam(int y);
	void setGio(int h);
	void SetPhut(int p);
	void setGiay(int s);

	int getNgay();
	int getThang();
	int getNam();
	int getGio();
	int getPhut();
	int getGiay();
	friend istream& operator >>(istream& in, Date& d);
	friend ostream& operator << (ostream& o, const Date& d);
};


Date::Date(int Nam, int Thang, int Ngay, int Gio, int Phut, int Giay)
	:Nam(Nam), Thang(Thang), Ngay(Ngay), Gio(Gio), Phut(Phut), Giay(Giay)
{
}

Date::~Date()
{
}

void Date::setNgay(int d)
{
	this->Ngay = d;
}

void Date::setThang(int m)
{
	this->Thang = m;
}

void Date::setNam(int y)
{
	this->Nam = y;;
}

void Date::setGio(int h)
{
	this->Gio = h;
}

void Date::SetPhut(int p)
{
	this->Phut = p;
}

void Date::setGiay(int s)
{
	this->Giay = s;
}

int Date::getNgay()
{
	return this->Ngay;
}

int Date::getThang()
{
	return this->Thang;
}

int Date::getNam()
{
	return this->Nam;
}

int Date::getGio()
{
	return this->Gio;
}

int Date::getPhut()
{
	return this->Phut;
}

int Date::getGiay()
{
	return this->Giay;
}
istream& operator>>(istream& in, Date& d)
{
	cout << "year-month-day hour:minute:second ";
	in >> d.Nam >> d.Thang >> d.Ngay >> d.Gio >> d.Phut >> d.Giay;
	return in;
}
ostream& operator<<(ostream& o, const Date& d)
{
	o << d.Nam << "-" << d.Thang << "-" << d.Ngay << " " << d.Gio << ":" << d.Phut << ":" << d.Giay;
	return o;
}

class ChuXe
{
private:
	string IDChuXe;
	string HoTen;
	string SoDT;
	string DiaChi;
	VeXe* veXeID;
public:
	ChuXe(const string & = " ", const string & = " ", const string & = " ", const string & = " ", VeXe* veXeID = nullptr);
	~ChuXe();

	string getIDChuXe();
	string getHoTen();
	string getSoDT();
	string getDiaChi();
	VeXe* getVeXe();

	void setHoTen(string HoTen);
	void setSoDT(string SoDT);
	void setDiaChi(string DiaChi);
	void setVeXe(VeXe* veXe);

	friend ostream& operator<<(ostream& out, ChuXe* chuXe);
};


ChuXe::ChuXe(const string& IDChuXe, const string& HoTen, const string& SoDT, const string& DiaChi, VeXe* veXeID)
	:IDChuXe(IDChuXe), HoTen(HoTen), SoDT(SoDT), DiaChi(DiaChi), veXeID(veXeID)
{
}

ChuXe::~ChuXe()
{
	delete this->veXeID;
}

string ChuXe::getIDChuXe()
{
	return this->IDChuXe;
}

string ChuXe::getHoTen()
{
	return this->HoTen;
}

string ChuXe::getSoDT()
{
	return this->SoDT;
}

string ChuXe::getDiaChi()
{
	return this->DiaChi;
}

VeXe* ChuXe::getVeXe()
{
	return this->veXeID;
}

void ChuXe::setHoTen(string HoTen)
{
	this->HoTen = HoTen;
}

void ChuXe::setSoDT(string SoDT)
{
	this->SoDT = SoDT;
}

void ChuXe::setDiaChi(string DiaChi)
{
	this->DiaChi = DiaChi;
}

void ChuXe::setVeXe(VeXe* veXe)
{
	this->veXeID = veXe;
}

ostream& operator<<(ostream& out, ChuXe* chuXe)
{
	out << "\t\t\tID: " << chuXe->IDChuXe << endl
		<< "\t\t\tHo Va Ten: " << chuXe->HoTen << endl
		<< "\t\t\tSo Dien Thoai: " << chuXe->SoDT << endl
		<< "\t\t\tDia Chi: " << chuXe->DiaChi << endl;
	return out;
}

class LichVaoRa;
class ChuXe;
class Date;

class VeXe
{
private:
	string idVeXe;
	string bienSo;
	Date ngayTao;
	Date hanSuDung;
	string chuXeID;
	ChuXe* chuXe;
	vector<LichVaoRa*> lichVaoRa;
public:
	VeXe(const string& idVeXe = "",
		const string& bienSo = "",
		Date ngayTao = NULL,
		Date hanSuDung = NULL,
		const string& chuXeID = "",
		ChuXe* chuXe = nullptr);
	~VeXe();

	string getIDVeXe();
	string getBienSo();
	Date getNgayTao();
	Date getHanSuDung();
	string getIDChuXe();
	ChuXe* getChuXe();
	vector<LichVaoRa*> getLichVaoRa();

	void setBienSo(string BienSo);
	void setNgayTao(Date NgayTao);
	void setHanSuDung(Date HanSuDung);
	void setIDchuXe(string chuXeID);
	void setChuXe(ChuXe*);
	void addlichVaoRa(LichVaoRa* _lichVaoRa);

	void outLichVaoRa();

	friend ostream& operator << (ostream& o, const VeXe* veXe);


};

VeXe::VeXe(
	const string& idVeXe,
	const string& bienSo,
	Date ngayTao,
	Date hanSuDung,
	const string& chuXeID,
	ChuXe* chuXe
)
	:idVeXe(idVeXe), bienSo(bienSo), ngayTao(ngayTao), hanSuDung(hanSuDung), chuXeID(chuXeID), chuXe(chuXe)
{
}

VeXe::~VeXe()
{
	delete this->chuXe;
	this->lichVaoRa.clear();
}

string VeXe::getIDVeXe()
{
	return this->idVeXe;
}

string VeXe::getBienSo()
{
	return this->bienSo;
}

Date VeXe::getNgayTao()
{
	return this->ngayTao;
}

Date VeXe::getHanSuDung()
{
	return this->hanSuDung;
}

string VeXe::getIDChuXe()
{
	return this->chuXeID;
}

ChuXe* VeXe::getChuXe()
{
	return this->chuXe;
}

vector<LichVaoRa*> VeXe::getLichVaoRa()
{
	return this->lichVaoRa;
}


void VeXe::setBienSo(string BienSo)
{
	this->bienSo = BienSo;
}

void VeXe::setNgayTao(Date NgayTao)
{
	this->ngayTao = NgayTao;
}

void VeXe::setHanSuDung(Date HanSuDung)
{
	this->hanSuDung = HanSuDung;
}

void VeXe::setIDchuXe(string chuXeID)
{
	this->chuXeID = chuXeID;
}

void VeXe::setChuXe(ChuXe* chuXe)
{
	this->chuXe = chuXe;
}

void VeXe::addlichVaoRa(LichVaoRa* _lichVaoRa)
{
	this->lichVaoRa.push_back(_lichVaoRa);

}

void VeXe::outLichVaoRa()
{
	for (int i = 0; i < lichVaoRa.size(); i++)
	{
		cout << lichVaoRa[i] << endl;
	}
}

ostream& operator<<(ostream& o, const VeXe* veXe)
{
	o << "\t\tID: " << veXe->idVeXe << endl;
	o << "\t\tBien So: " << veXe->bienSo << endl;
	o << "\t\tNgay Tao: " << veXe->ngayTao << endl;
	o << "\t\tHan Su Dung: " << veXe->hanSuDung << endl;
	o << "\t\tID Chu Xe: " << veXe->chuXeID << endl;
	return o;
}

class VeXe;
class Date;
class NhanVienQuanLy;

class LichVaoRa
{
private:
	string IDLichVaoRa;
	Date ThoiGian;
	string LoaiVaoRa;
	string idVeXe;
	string idNhanVienQuanLy;
	VeXe* veXeID;
	NhanVienQuanLy* NVQuanLyID;
public:
	LichVaoRa(
		const string& IDLichVaoRa = "",
		Date ThoiGian = NULL,
		const string& LoaiVaoRa = "",
		const string& idVeXe = "",
		const string& idNhanVienQuanLy = "",
		VeXe* veXeID = nullptr,
		NhanVienQuanLy* nhanVienQUanLyID = nullptr
	);
	~LichVaoRa();

	string getIDLichVaoRa();
	Date getThoiGian();
	string getLoaiVaoRa();
	string getIDVeXe();
	string getIDnvQuanLy();
	NhanVienQuanLy* getNVQuanLy();
	VeXe* getVeXe();

	void setIDLichVaoRa(string IDLichVaoRa);
	void setThoiGian(Date ThoiGian);
	void setLoaiVaoRa(string LoaiVaoRa);
	void setIDVeXe(string idVeXe);
	void setIDNhanVienQuanLy(string idnvql);
	void setVeXe(VeXe* veXe);
	void setnvQuanLy(NhanVienQuanLy* nvQuanLy);
	friend ostream& operator << (ostream& o, const LichVaoRa* lichVaoRa);

};


LichVaoRa::LichVaoRa(
	const string& IDLichVaoRa,
	Date ThoiGian,
	const string& LoaiVaoRa,
	const string& idVeXe,
	const string& idNhanVienQuanLy,
	VeXe* veXeID,
	NhanVienQuanLy* nhanVienQUanLyID
) :IDLichVaoRa(IDLichVaoRa), ThoiGian(ThoiGian), LoaiVaoRa(LoaiVaoRa), idVeXe(idVeXe), idNhanVienQuanLy(idNhanVienQuanLy), veXeID(veXeID), NVQuanLyID(nhanVienQUanLyID)
{
}

LichVaoRa::~LichVaoRa()
{
	delete this->veXeID;
	delete this->NVQuanLyID;
}

string LichVaoRa::getIDLichVaoRa()
{
	return this->IDLichVaoRa;
}

Date LichVaoRa::getThoiGian()
{
	return this->ThoiGian;
}

string LichVaoRa::getLoaiVaoRa()
{
	return this->LoaiVaoRa;
}

string LichVaoRa::getIDVeXe()
{
	return this->idVeXe;
}

string LichVaoRa::getIDnvQuanLy()
{
	return this->idNhanVienQuanLy;
}

NhanVienQuanLy* LichVaoRa::getNVQuanLy()
{
	return this->NVQuanLyID;
}

VeXe* LichVaoRa::getVeXe()
{
	return this->veXeID;
}

void LichVaoRa::setIDLichVaoRa(string IDLichVaoRa)
{
	this->IDLichVaoRa = IDLichVaoRa;
}

void LichVaoRa::setThoiGian(Date ThoiGian)
{
	this->ThoiGian = ThoiGian;
}

void LichVaoRa::setLoaiVaoRa(string LoaiVaoRa)
{
	this->LoaiVaoRa = LoaiVaoRa;
}

void LichVaoRa::setIDVeXe(string idVeXe)
{
	this->idVeXe = idVeXe;
}

void LichVaoRa::setIDNhanVienQuanLy(string idnvql)
{
	this->idNhanVienQuanLy = idnvql;
}

void LichVaoRa::setVeXe(VeXe* veXe)
{
	this->veXeID = veXe;
}

void LichVaoRa::setnvQuanLy(NhanVienQuanLy* nvQuanLy)
{
	this->NVQuanLyID = nvQuanLy;
}


ostream& operator<<(ostream& o, const LichVaoRa* lichVaoRa)
{
	o << "\t\tID: " << lichVaoRa->IDLichVaoRa << endl;
	o << "\t\tThoi Gian Tao: " << lichVaoRa->ThoiGian << endl;
	o << "\t\tLoai Vao Ra: " << lichVaoRa->LoaiVaoRa << endl;
	o << "\t\tID Ve Xe: " << lichVaoRa->idVeXe << endl;
	o << "\t\tID Nhan Vien Quan Ly: " << lichVaoRa->idNhanVienQuanLy << endl;
	return o;
}

class LichVaoRa;
class Khu;

class NhanVienQuanLy
{
private:
	string NVQuanLyID;
	string HoTen;
	string SoDT;
	vector<LichVaoRa*> LichVaoRaID;
public:
	NhanVienQuanLy(const string& NVQuanLyID = "", const string& HoTen = "", const string& SoDT = "");
	~NhanVienQuanLy();
	string getNVquanLyID();
	string getHoTen();
	string getSoDT();
	vector<LichVaoRa*> getLichVaoRa();

	string setHoTen(string HoTen);
	string setSoDT(string SoDT);
	void addlichVaoRa(LichVaoRa* lichVaoRa);

	friend ostream& operator << (ostream& o, NhanVienQuanLy* nvQuanLy);
	vector<LichVaoRa*> addLichVaoRa(LichVaoRa* lichVaRa);
};

NhanVienQuanLy::NhanVienQuanLy(const string& NVQuanLyID, const string& HoTen, const string& SoDT)
	:NVQuanLyID(NVQuanLyID), HoTen(HoTen), SoDT(SoDT)
{
}

NhanVienQuanLy::~NhanVienQuanLy()
{
	this->LichVaoRaID.clear();
}

string NhanVienQuanLy::getNVquanLyID()
{
	return this->NVQuanLyID;
}

string NhanVienQuanLy::getHoTen()
{
	return this->HoTen;
}

string NhanVienQuanLy::getSoDT()
{
	return this->SoDT;
}


vector<LichVaoRa*> NhanVienQuanLy::getLichVaoRa()
{
	return LichVaoRaID;
}

string NhanVienQuanLy::setHoTen(string HoTen)
{
	return this->HoTen = HoTen;
}

string NhanVienQuanLy::setSoDT(string SoDT)
{
	return this->SoDT = SoDT;
}

void NhanVienQuanLy::addlichVaoRa(LichVaoRa* lichVaoRa)
{
	this->LichVaoRaID.push_back(lichVaoRa);
}


vector<LichVaoRa*> NhanVienQuanLy::addLichVaoRa(LichVaoRa* lichVaRa)
{
	LichVaoRaID.push_back(lichVaRa);
	return LichVaoRaID;
}


ostream& operator<<(ostream& o, NhanVienQuanLy* nvQuanLy)
{
	o << "\t\tID: " << nvQuanLy->NVQuanLyID << endl;
	o << "\t\tHo Va Ten: " << nvQuanLy->HoTen << endl;
	o << "\t\tSo Dien Thoai: " << nvQuanLy->SoDT << endl;
	return o;
}

class DBHelper
{
#define SQL_RETURN_CODE_LEN 1000
	//define handles and variables
	SQLHANDLE sqlConnHandle;
	SQLHANDLE sqlStmtHandle;
	SQLHANDLE sqlEnvHandle;
	SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];
	static DBHelper* instance;
public:
	static DBHelper* getInstance();
	void init();
	SQLHANDLE queryDB(string query);
	void close();
};

DBHelper* DBHelper::instance = NULL;

DBHelper* DBHelper::getInstance()
{
	if (instance == NULL)
	{
		instance = new DBHelper();
	}
	return instance;
}

void DBHelper::init()
{
	//initializations
	sqlConnHandle = NULL;
	sqlStmtHandle = NULL;
	//allocations
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
		close();

	if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
		close();

	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
		close();

	//output
	/*cout << "Attempting connection to SQL Server...";
	cout << "\n";*/

	//connect to SQL Server	
	//I am using a trusted connection and port 14808
	//it does not matter if you are using default or named instance
	//just make sure you define the server name and the port
	//You have the option to use a username/password instead of a trusted connection
	//but is more secure to use a trusted connection
	switch (SQLDriverConnect(sqlConnHandle,
		NULL,
		//(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost, 1433;DATABASE=master;UID=username;PWD=password;",
		(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=DESKTOP-5IPKTPG;DATABASE=DOANLAPTRINHS;Trusted=true",
		SQL_NTS,
		retconstring,
		1024,
		NULL,
		SQL_DRIVER_NOPROMPT)) {

	case SQL_SUCCESS:
		//	cout << "Successfully connected to SQL Server";
		//	cout << "\n";
		break;

	case SQL_SUCCESS_WITH_INFO:
		//	cout << "Successfully connected to SQL Server";
		//	cout << "\n";
		break;

	case SQL_INVALID_HANDLE:
		cout << "Could not connect to SQL Server";
		cout << "\n";
		close();
		break;

	case SQL_ERROR:
		cout << "Could not connect to SQL Server";
		cout << "\n";
		close();
		break;

	default:
		break;
	}

	//if there is a problem connecting then exit application
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
		close();

}

SQLHANDLE DBHelper::queryDB(string query)
{
	//output
//	cout << "\n";
//	cout << "Executing T-SQL query...";
//	cout << "\n";
	wstring wstr(query.begin(), query.end());
	//if there is a problem executing the query then exit application
	//else display query result
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)wstr.c_str(), SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
		return NULL;
	}
	return sqlStmtHandle;
}


void DBHelper::close()
{
	SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
	SQLDisconnect(sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
	getchar();
	exit(0);
}

class DatabaseService : public DBHelper
{
#define SQL_RESULT_LEN 240
public:
	void close();
	string getString(char a[]);
	vector<ChuXe*> getDataChuXe();
	vector<VeXe*> getDataVeXe();
	vector<LichVaoRa*> getDataLichVaoRa();
	vector<NhanVienQuanLy*> getDataNVQuanLy();
	void queryInsertDB(string query);
};


void DatabaseService::close()
{
	DBHelper::close();
}

string DatabaseService::getString(char a[])
{
	int n = strlen(a);
	string s;
	int t = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] == ' ') t = t + 1;
		else break;
	}
	for (int i = 0; i < n - t; i++)
	{
		s = s + a[i];
	}
	return s;
}

vector<ChuXe*> DatabaseService::getDataChuXe()
{
	vector<ChuXe*> chuXe;
	DBHelper::getInstance()->init();
	SQLHANDLE sqlStmtHandle = DBHelper::getInstance()->queryDB("SELECT * FROM CHUXE");
	SQLCHAR sqlVersion[SQL_RESULT_LEN];
	SQLINTEGER ptrSqlVersion;
	char ID[11];
	char HoVaTen[51];
	char SDT[21];
	char DiaChi[101];
	while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {

		SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, ID, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, HoVaTen, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, SDT, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, DiaChi, SQL_RESULT_LEN, &ptrSqlVersion);
		//display query result
		ChuXe* _chuxe = new ChuXe(getString(ID), getString(HoVaTen), getString(SDT), getString(DiaChi));
		chuXe.push_back(_chuxe);
	}

	return chuXe;
}

vector<VeXe*> DatabaseService::getDataVeXe()
{
	vector<VeXe*> veXe;
	DBHelper::getInstance()->init();
	SQLHANDLE sqlStmtHandle = DBHelper::getInstance()->queryDB("SELECT * FROM VEXE");
	SQLCHAR sqlVersion[SQL_RESULT_LEN];
	SQLINTEGER ptrSqlVersion;

	char id[11];
	char bienSo[11];
	TIMESTAMP_STRUCT ngayTao, hanSuDung;
	//char ngayTao[51]; // Date
	char chuXeID[11];
	Date temp1, temp2;
	while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {

		SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, id, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, bienSo, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 3, SQL_C_TIMESTAMP, &ngayTao, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 4, SQL_C_TIMESTAMP, &hanSuDung, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 5, SQL_C_CHAR, chuXeID, SQL_RESULT_LEN, &ptrSqlVersion);
		//SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, DiaChi, SQL_RESULT_LEN, &ptrSqlVersion);
		//display query result
		temp1.setNam(ngayTao.year);
		temp1.setThang(ngayTao.month);
		temp1.setNgay(ngayTao.day);
		temp1.setGio(ngayTao.hour);
		temp1.SetPhut(ngayTao.minute);
		temp1.setGiay(ngayTao.second);
		temp2.setNam(hanSuDung.year);
		temp2.setThang(hanSuDung.month);
		temp2.setNgay(hanSuDung.day);
		temp2.setGio(hanSuDung.hour);
		temp2.SetPhut(hanSuDung.minute);
		temp2.setGiay(hanSuDung.second);
		VeXe* _veXe = new VeXe(getString(id), getString(bienSo), temp1, temp2, getString(chuXeID));
		veXe.push_back(_veXe);
	}
	return veXe;
}

vector<LichVaoRa*> DatabaseService::getDataLichVaoRa()
{
	vector<LichVaoRa*> lichVaoRa;
	DBHelper::getInstance()->init();
	SQLHANDLE sqlStmtHandle = DBHelper::getInstance()->queryDB("SELECT * FROM LICHVAORA");
	SQLCHAR sqlVersion[SQL_RESULT_LEN];
	SQLINTEGER ptrSqlVersion;

	char id[11];
	TIMESTAMP_STRUCT thoiGian;
	char loaiVaoRa[11];
	char nvQuanLyID[11];
	char veXeID[11];
	Date temp;
	while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {

		SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, id, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 2, SQL_C_TIMESTAMP, &thoiGian, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, loaiVaoRa, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, nvQuanLyID, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 5, SQL_C_CHAR, veXeID, SQL_RESULT_LEN, &ptrSqlVersion);
		//SQLGetData(sqlStmtHandle, 4, SQL_C_CHAR, DiaChi, SQL_RESULT_LEN, &ptrSqlVersion);
		//display query result
		temp.setNam(thoiGian.year);
		temp.setThang(thoiGian.month);
		temp.setNgay(thoiGian.day);
		temp.setGio(thoiGian.hour);
		temp.SetPhut(thoiGian.minute);
		temp.setGiay(thoiGian.second);
		LichVaoRa* _lichVaoRa = new LichVaoRa(getString(id), temp, getString(loaiVaoRa), getString(veXeID), getString(nvQuanLyID));
		lichVaoRa.push_back(_lichVaoRa);
	}
	return lichVaoRa;
}

vector<NhanVienQuanLy*> DatabaseService::getDataNVQuanLy()
{
	vector<NhanVienQuanLy*> nhanVienQuanLy;
	DBHelper::getInstance()->init();
	SQLHANDLE sqlStmtHandle = DBHelper::getInstance()->queryDB("SELECT * FROM NVQUANLY");
	SQLCHAR sqlVersion[SQL_RESULT_LEN];
	SQLINTEGER ptrSqlVersion;
	char ID[11];
	char HoVaTen[51];
	char SDT[11];
	while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {

		SQLGetData(sqlStmtHandle, 1, SQL_C_CHAR, ID, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 2, SQL_C_CHAR, HoVaTen, SQL_RESULT_LEN, &ptrSqlVersion);
		SQLGetData(sqlStmtHandle, 3, SQL_C_CHAR, SDT, SQL_RESULT_LEN, &ptrSqlVersion);
		//display query result
		NhanVienQuanLy* _nvQuanLy = new NhanVienQuanLy(getString(ID), getString(HoVaTen), getString(SDT));
		nhanVienQuanLy.push_back(_nvQuanLy);
	}

	return nhanVienQuanLy;
}

void DatabaseService::queryInsertDB(string query)
{
	DBHelper::getInstance()->init();
	DBHelper::getInstance()->queryDB(query);
}

using namespace std;

void Stars();
string getString(char a[]);

void Stars()
{
	cout << "\t\t";
	for (int i = 0; i < 50; ++i)
		cout << "*";
	cout << endl;
}

void textColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


void setChuXe_VexeRelationShip(vector<ChuXe*> chuXe, vector<VeXe*> veXe);
void setVeXe_lichVaoRaRelationShip(vector<VeXe*> veXe, vector<LichVaoRa*> lichVaoRa);
void setLichVaoRa_nvQuanLyRelationship(vector<LichVaoRa*> lichVaRa, vector<NhanVienQuanLy*> nvQuanLy);

//ChuXe* createChuXe(vector<ChuXe*> &_chuXe);
//VeXe* createVeXe(vector<VeXe*> &_veXe);
//LichVaoRa* createLichVaoRa(vector<LichVaoRa*>& _lichVaoRa);
//NhanVienQuanLy* createNhanVienQuanLy(vector<NhanVienQuanLy*>& _nhanVienQuanLy);



//void createVeXe_ChuXeRelationShip(VeXe* vx, ChuXe* cx);

int stringToint(string s);
string intToString(int n);

void setChuXe_VexeRelationShip(vector<ChuXe*> chuXe, vector<VeXe*> veXe)
{
	for (int i = 0; i < chuXe.size(); i++)
		for (int j = 0; j < veXe.size(); j++)
		{
			if (chuXe[i]->getIDChuXe() == veXe[j]->getIDChuXe())
			{
				chuXe[i]->setVeXe(veXe[j]);
				veXe[j]->setChuXe(chuXe[i]);
			}
		}
}

void setVeXe_lichVaoRaRelationShip(vector<VeXe*> veXe, vector<LichVaoRa*> lichVaoRa)
{
	for (int i = 0; i < veXe.size(); i++)
		for (int j = 0; j < lichVaoRa.size(); j++)
		{
			if (veXe[i]->getIDVeXe() == lichVaoRa[j]->getIDVeXe())
			{
				veXe[i]->addlichVaoRa(lichVaoRa[j]);
				lichVaoRa[j]->setVeXe(veXe[i]);
			}
		}
}

void setLichVaoRa_nvQuanLyRelationship(vector<LichVaoRa*> lichVaoRa, vector<NhanVienQuanLy*> nvQuanLy)
{
	for (int i = 0; i < nvQuanLy.size(); i++)
		for (int j = 0; j < lichVaoRa.size(); j++)
		{
			if (nvQuanLy[i]->getNVquanLyID() == lichVaoRa[j]->getIDnvQuanLy())
			{
				nvQuanLy[i]->addLichVaoRa(lichVaoRa[j]);
				lichVaoRa[j]->setnvQuanLy(nvQuanLy[i]);
			}
		}
}
//
//ChuXe* createChuXe(vector<ChuXe*>& _chuXe)
//{
//	string _id, _hoTen, _diaChi, _sdT;
//	int n = _chuXe.size();
//	long long temp = stringToint(_chuXe[n - 1]->getIDChuXe());
//	temp = temp + 1;
//	_id = "CX" + intToString(temp);
//	fflush(stdin);
//	cout << "Nhap ho va ten chu xe: ";
//	getline(cin, _hoTen);
//	getline(cin, _hoTen);
//	fflush(stdin);
//	cout << "Nhap so dien thoai chu xe: ";
//	getline(cin, _sdT);
//	cout << "Nhap dia chi chu xe: ";
//	fflush(stdin);
//	getline(cin, _diaChi);
//	ChuXe* cx = new ChuXe(_id, _hoTen, _sdT, _diaChi);
//	_chuXe.push_back(cx);
//	return cx;
//}
//
//VeXe* createVeXe(vector<VeXe*> &_veXe)
//{
//	string id, bienSo;
//	Date ngayTao;
//	Date hanSudung;
//	int n = _veXe.size();
//	long long temp = stringToint(_veXe[n - 1]->getIDVeXe());
//	temp = temp + 1;
//	id = "VX" + intToString(temp);
//	cout << "Nhap bienSo: ";
//	cin >> bienSo;
//	cout << "Nhap Ngay tao: ";
//	cin >> ngayTao;
//	cout << "Nhap han su dung: ";
//	cin >> hanSudung;
//	VeXe* vx = new VeXe(id, bienSo, ngayTao, hanSudung);
//	_veXe.push_back(vx);
//	return vx;
//}


//void createVeXe_ChuXeRelationShip(VeXe* vx, ChuXe* cx)
//{
//	vx->setChuXe(cx);
//	cx->setVeXe(vx);
//	vx->setIDchuXe(cx->getIDChuXe());
//}

int stringToint(string s)
{
	int num1 = 0;
	int x = 1;
	int l1 = s.length();
	char temp = ' ';
	for (int i = l1 - 1; i >= 2; --i) {
		if (s[i] != temp)
		{
			num1 += (int)(s[i] - '0') * x;
			x *= 10;
		}
	}
	return num1;
}

string intToString(int n)
{
	string s;
	if (n < 10)
	{
		s = "00" + to_string(n);
	}
	else if (10 <= n && n < 100)
	{
		s = "0" + to_string(n);
	}
	else if (1000 <= n)
	{
		s = to_string(n);
	}
	return s;
}


ChuXe* createChuXe(vector<ChuXe*>& _chuXe);
VeXe* createVeXe(vector<VeXe*>& _veXe);
LichVaoRa* createLichVaoRa(vector<LichVaoRa*>& _lichVaoRa);
NhanVienQuanLy* createNhanVienQuanLy(vector<NhanVienQuanLy*>& _nhanVienQuanLy);

void createVeXe_ChuXeRelationShip(VeXe* vx, ChuXe* cx);
void createVeXe_lichVaoRaRelationShip(VeXe* veXe, LichVaoRa* lichVaoRa);
void createLichVaoRa_nvQuanLyRelationship(LichVaoRa* lichVaRa, NhanVienQuanLy* nvQuanLy);

ChuXe* createChuXe(vector<ChuXe*>& _chuXe)
{
	string _id, _hoTen, _diaChi, _sdT;
	int n = _chuXe.size();
	long long temp = stringToint(_chuXe[n - 1]->getIDChuXe());
	temp = temp + 1;
	_id = "CX" + intToString(temp);
	cout << "Nhap ho va ten chu xe: ";
	getline(cin, _hoTen);
	cout << "Nhap so dien thoai chu xe: ";
	getline(cin, _sdT);
	cout << "Nhap dia chi chu xe: ";
	getline(cin, _diaChi);
	ChuXe* cx = new ChuXe(_id, _hoTen, _sdT, _diaChi);
	_chuXe.push_back(cx);
	return cx;
}

VeXe* createVeXe(vector<VeXe*>& _veXe)
{
	string id, bienSo;
	Date ngayTao;
	Date hanSudung;
	int n = _veXe.size();
	long long temp = stringToint(_veXe[n - 1]->getIDVeXe());
	temp = temp + 1;
	id = "VX" + intToString(temp);
	cout << "Nhap bienSo: ";
	cin >> bienSo;
	cout << "Nhap Ngay tao: ";
	cin >> ngayTao;
	cout << "Nhap han su dung: ";
	cin >> hanSudung;
	VeXe* vx = new VeXe(id, bienSo, ngayTao, hanSudung);
	_veXe.push_back(vx);
	return vx;
}

LichVaoRa* createLichVaoRa(vector<LichVaoRa*>& _lichVaoRa)
{
	string IDLichVaoRa;
	Date ThoiGian;
	string LoaiVaoRa;
	int n = _lichVaoRa.size();
	long long temp = stringToint(_lichVaoRa[n - 1]->getIDVeXe());
	temp = temp + 1;
	IDLichVaoRa = "VR" + intToString(temp);
	cout << "Nhap Thoi gian: ";
	cin >> ThoiGian;
	cout << "Nhap loai vao ra: ";
	cin >> LoaiVaoRa;
	LichVaoRa* lvr = new LichVaoRa(IDLichVaoRa, ThoiGian, LoaiVaoRa);
	_lichVaoRa.push_back(lvr);
	return lvr;
}

NhanVienQuanLy* createNhanVienQuanLy(vector<NhanVienQuanLy*>& _nhanVienQuanLy)
{
	string id;
	string HoTen;
	string SoDT;
	int n = _nhanVienQuanLy.size();
	long long temp = stringToint(_nhanVienQuanLy[n - 1]->getNVquanLyID());
	temp = temp + 1;
	id = "QL" + intToString(temp);
	cin.ignore();
	cout << "nhap ho va ten nhan vien: ";
	getline(cin, HoTen);
	cout << "Nhap so dien thoai: ";
	getline(cin, SoDT);
	NhanVienQuanLy* nvql = new NhanVienQuanLy(id, HoTen, SoDT);
	_nhanVienQuanLy.push_back(nvql);
	return nvql;
}


void createVeXe_ChuXeRelationShip(VeXe* vx, ChuXe* cx)
{
	vx->setChuXe(cx);
	cx->setVeXe(vx);
	vx->setIDchuXe(cx->getIDChuXe());
}

void createVeXe_lichVaoRaRelationShip(VeXe* veXe, LichVaoRa* lichVaoRa)
{
	veXe->addlichVaoRa(lichVaoRa);
	lichVaoRa->setVeXe(veXe);
	lichVaoRa->setIDVeXe(veXe->getIDVeXe());
}

void createLichVaoRa_nvQuanLyRelationship(LichVaoRa* lichVaRa, NhanVienQuanLy* nvQuanLy)
{
	nvQuanLy->addLichVaoRa(lichVaRa);
	lichVaRa->setnvQuanLy(nvQuanLy);
	lichVaRa->setIDNhanVienQuanLy(nvQuanLy->getNVquanLyID());
}

void createVeXe_ChuXe(vector<ChuXe*> chuXe, vector<VeXe*> veXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Tao chu xe cho ve xe: " << endl;
	ChuXe* _chuXe1 = createChuXe(chuXe);
	cout << "\t\t   Tao ve xe" << endl;
	VeXe* _veXe1 = createVeXe(veXe);
	createVeXe_ChuXeRelationShip(_veXe1, _chuXe1);
	cout << veXe[veXe.size() - 1]->getChuXe();
}

void createLichVaoRa_VeXe(vector<VeXe*> veXe, vector<LichVaoRa*> lichVaoRa, vector<NhanVienQuanLy*> nhanVienQuanLy, int& indexNVQL) {
	Stars();
	cin.ignore();
	int dem = 0;
	string _idcr;
	cout << "\t\t   Nhap ID ve xe: ";
	getline(cin, _idcr);
	for (int i = 0; i < veXe.size(); i++)
	{
		dem++;
		if (veXe[i]->getIDVeXe() == _idcr)
		{
			LichVaoRa* _lvr1 = createLichVaoRa(lichVaoRa);
			createVeXe_lichVaoRaRelationShip(veXe[dem - 1], _lvr1);
			createLichVaoRa_nvQuanLyRelationship(_lvr1, nhanVienQuanLy[indexNVQL]);
			cout << lichVaoRa[lichVaoRa.size() - 1];
			return;
		}
	}
	cout << "\t\t\tError: ID ve xe khong ton tai!" << endl;
}

string passwordInput(unsigned maxLength);

bool Login(vector<NhanVienQuanLy*> nhanVienQuanLy, int& indexNVQL)
{
	string sU = "";
	string sP = "";
	int flag = 0;

	while (true)
	{
		system("cls");
		cin.ignore();
		cout << "\t\t************************************\n";
		textColor(10);
		cout << "\t\t*              Login               *\n";
		textColor(7);
		cout << "\t\t************************************\n";
		textColor(4);
		cout << "\t\t Nhap \"ESC\" de thoat!\n";
		textColor(7);
		cout << "\n\t\tNhap Username: ";

		getline(cin, sU);
		if (sU == "ESC" || sU == "esc")
			return 0;

		cout << "\n\t\tNhap Password: ";
		getline(cin, sP);
		//sP = passwordInput(10);
		for (int i = 0; i < nhanVienQuanLy.size(); ++i)
		{
			if (sU == nhanVienQuanLy[i]->getNVquanLyID() && sP == nhanVienQuanLy[i]->getSoDT())
			{
				//flag = 1;
				cout << "Login thanh cong !\n";
				indexNVQL = i;
				return 1;
			}
		}
		if (flag == 0)
		{
			cout << "Nhap sai! Vui Long nhap lai.";
			system("pause");
		}
	}
}

string passwordInput(unsigned maxLength)
{
	string pw = "";
	cin.ignore();
	for (char c; c = system("pause"); )
	{
		if (c == '\n' || c == '\r') { // \n l� ph�m ph�m enter + \r l� Nh?y v? ??u h�ng, kh�ng xu?ng h�ng
			cout << "\n";
			break;
		}
		else if (c == '\b') { //ph�m backspace
			cout << "\b \b";
			if (!pw.empty()) pw.erase(pw.size() - 1);
		}
		else if (c == -32) { //ph�m m?i t�n
			system("pause"); //b? qua k� t? ti?p theo (h??ng m?i t�n)
		}
		else if (isprint(c) && pw.size() < maxLength) { //isprint t?c l� ch? nh?n nh?ng k� t? in ra ???c (c� t�nh kho?ng tr?ng)
			cout << '*';
			pw += c;
		}
	}
	return pw;
}

// Tim chu xe
void searchChuXe_ID(vector<ChuXe*> chuXe);
void searchChuXe_SDT(vector<ChuXe*> chuXe);

// Tim ve xe
void searchVeXe_ID(vector<VeXe*> veXe);
void searchVeXe_BienSo(vector<VeXe*> veXe);
void searchVeXe_IDChuXe(vector<VeXe*> veXe);
void searchVeXe_SDTChuXe(vector<ChuXe*> chuXe);
void searchVeXe_HoTenChuXe(vector<ChuXe*> chuXe);

// Tim lich vao ra
void searchLichVaoRa_Ngay(vector<LichVaoRa*> lichVaoRa);
void searchLichVaoRa_Thang(vector<LichVaoRa*> lichVaoRa);
void searchLichVaoRa_Nam(vector<LichVaoRa*> lichVaoRa);
void searchLichVaoRa_bienSoXe(vector<LichVaoRa*> lichVaoRa);
void searchLichVaoRa_idNVQuanLy(vector<NhanVienQuanLy*> nhanVienQuanLy);

void searchNhanVienQuanLy_ID(vector<NhanVienQuanLy*> nhanVienQuanLy);
void searchNhanVienQuanLy_SDT(vector<NhanVienQuanLy*> nhanVienQuanLy);


void searchChuXe_ID(vector<ChuXe*> chuXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap ID chu xe can tim kiem: ";
	string id;
	getline(cin, id);
	Stars();

	for (int i = 0; i < chuXe.size(); ++i) {
		//cout << chuXe[i]->getIDChuXe() << endl;
		string t = chuXe[i]->getIDChuXe();
		if (id == t) {
			cout << "\n\t\t\t***THONG TIN CHU XE CAN TIM***\n";
			Stars();
			cout << chuXe[i] << endl;
			return;
		}
	}
	cout << "\t\t\tError: ID chu xe khong ton tai!" << endl;
}

void searchChuXe_SDT(vector<ChuXe*> chuXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap SDT chu xe can tim kiem: ";
	string id;
	getline(cin, id);
	Stars();

	for (int i = 0; i < chuXe.size(); ++i) {
		if (chuXe[i]->getSoDT() == id) {
			cout << "\n\t\t\t***THONG TIN CHU XE CAN TIM***\n";
			Stars();
			cout << chuXe[i] << endl;
			return;
		}
	}
	cout << "\t\t\tError: SDT chu xe khong ton tai!" << endl;
}

void searchVeXe_ID(vector<VeXe*> veXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap ID ve xe can tim kiem: ";
	string id;
	getline(cin, id);
	Stars();

	for (int i = 0; i < veXe.size(); ++i) {
		if (veXe[i]->getIDVeXe() == id) {
			cout << "\n\t\t\t***THONG TIN VE XE CAN TIM***\n";
			Stars();
			cout << veXe[i] << endl;
			return;
		}
	}
	cout << "\t\t\tError: ID ve xe khong ton tai!" << endl;
}

void searchVeXe_BienSo(vector<VeXe*> veXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap bien so xe can tim kiem: ";
	string id;
	getline(cin, id);
	Stars();

	for (int i = 0; i < veXe.size(); ++i) {
		if (veXe[i]->getBienSo() == id) {
			cout << "\n\t\t\t***THONG TIN VE XE CAN TIM***\n";
			Stars();
			cout << veXe[i] << endl;
			return;
		}
	}
	cout << "\t\t\tError: Bien so xe khong ton tai!" << endl;
}

void searchVeXe_IDChuXe(vector<VeXe*> veXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap ID chu xe can tim kiem: ";
	string id;
	getline(cin, id);
	Stars();

	for (int i = 0; i < veXe.size(); ++i) {
		if (veXe[i]->getIDChuXe() == id) {
			cout << "\n\t\t\t***THONG TIN VE XE CAN TIM***\n";
			Stars();
			cout << veXe[i] << endl;
			return;
		}
	}
	cout << "\t\t\tError: ID chu xe khong ton tai!" << endl;
}

void searchVeXe_SDTChuXe(vector<ChuXe*> chuXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap SDT chu xe can tim kiem: ";
	string id;
	getline(cin, id);
	Stars();

	for (int i = 0; i < chuXe.size(); ++i) {
		if (chuXe[i]->getSoDT() == id) {
			cout << "\n\t\t\t***THONG TIN VE XE CAN TIM***\n";
			Stars();
			cout << chuXe[i]->getVeXe() << endl;
			return;
		}
	}
	cout << "\t\t\tError: SDT chu xe khong ton tai!" << endl;
}

void searchVeXe_HoTenChuXe(vector<ChuXe*> chuXe)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap ho va ten chu xe can tim kiem: ";
	string id;
	getline(cin, id);
	Stars();

	for (int i = 0; i < chuXe.size(); ++i) {
		if (chuXe[i]->getHoTen() == id) {
			cout << "\n\t\t\t***THONG TIN VE XE CAN TIM***\n";
			Stars();
			cout << chuXe[i]->getVeXe() << endl;
			return;
		}
	}
	cout << "\t\t\tError: SDT chu xe khong ton tai!" << endl;
}

void searchLichVaoRa_Ngay(vector<LichVaoRa*> lichVaoRa)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap ngay can tim kiem: ";
	int dem = 0;
	int id;
	cin >> id;
	Stars();
	cout << "\n\t\t\t***DANH SACH LICH VAO RA NGAY " << id << "***\n";
	for (int i = 0; i < lichVaoRa.size(); ++i) {
		if (lichVaoRa[i]->getThoiGian().getNgay() == id) {

			Stars();
			cout << lichVaoRa[i] << endl;
			++dem;
		}
	}
	if (!dem)
	{
		Stars();
		cout << "\t\tThong bao: Khong co lich vao ra trong ngay " << id << " !" << endl;
	}
}

void searchLichVaoRa_Thang(vector<LichVaoRa*> lichVaoRa)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap thang can tim kiem: ";
	int dem = 0;
	int id;
	cin >> id;
	Stars();
	cout << "\n\t\t\t***DANH SACH LICH VAO RA THANG " << id << "***\n";
	for (int i = 0; i < lichVaoRa.size(); ++i) {
		if (lichVaoRa[i]->getThoiGian().getThang() == id) {

			Stars();
			cout << lichVaoRa[i] << endl;
			++dem;
		}
	}
	if (!dem)
	{
		Stars();
		cout << "\t\tThong bao: Khong co lich vao ra trong thang " << id << " !" << endl;
	}
}

void searchLichVaoRa_Nam(vector<LichVaoRa*> lichVaoRa)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap nam can tim kiem: ";
	int dem = 0;
	int id;
	cin >> id;
	Stars();
	cout << "\n\t\t\t***DANH SACH LICH VAO RA NAM " << id << "***\n";
	for (int i = 0; i < lichVaoRa.size(); ++i) {
		if (lichVaoRa[i]->getThoiGian().getNam() == id) {

			Stars();
			cout << lichVaoRa[i] << endl;
			++dem;
		}
	}
	if (!dem)
	{
		Stars();
		cout << "\t\tThong bao: Khong co lich vao ra trong nam " << id << " !" << endl;
	}
}

void searchLichVaoRa_bienSoXe(vector<LichVaoRa*> lichVaoRa)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap bien so xe can tim kiem: ";
	int dem = 0;
	string id;
	getline(cin, id);
	Stars();
	cout << "\n\t\t\t***DANH SACH LICH VAO RA***\n";
	for (int i = 0; i < lichVaoRa.size(); ++i) {
		if (lichVaoRa[i]->getVeXe()->getBienSo() == id) {
			Stars();
			cout << lichVaoRa[i] << endl;
			++dem;
		}
	}
	if (!dem)
	{
		Stars();
		cout << "\t\tThong bao: Khong co lich vao ra cua xe co bien so: " << id << endl;
	}
}

void searchLichVaoRa_idNVQuanLy(vector<NhanVienQuanLy*> nhanVienQuanLy)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap ID nhan vien quan ly lich vao ra can tim kiem: ";
	int dem = 0;
	string id;
	getline(cin, id);
	Stars();
	cout << "\n\t\t\t***DANH SACH LICH VAO RA***\n";
	for (int i = 0; i < nhanVienQuanLy.size(); ++i) {
		if (nhanVienQuanLy[i]->getNVquanLyID() == id) {
			Stars();
			for (int j = 0; j < nhanVienQuanLy[i]->getLichVaoRa().size(); j++)
				cout << nhanVienQuanLy[i]->getLichVaoRa()[i] << endl;
			++dem;
		}
	}
	if (!dem)
	{
		Stars();
		cout << "\t\tThong bao: Khong co lich vao ra do nhan vien quan ly co id: " << id << endl;
	}
}

void searchNhanVienQuanLy_ID(vector<NhanVienQuanLy*> nhanVienQuanLy)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap ID nhan vien quan ly can tim kiem: ";
	int dem = 0;
	string id;
	getline(cin, id);
	Stars();
	cout << "\n\t\t\t***THONG TIN NHAN VIEN QUAN LY***\n";
	for (int i = 0; i < nhanVienQuanLy.size(); ++i) {
		if (nhanVienQuanLy[i]->getNVquanLyID() == id) {
			Stars();
			cout << nhanVienQuanLy[i];
			++dem;
		}
	}
	if (!dem)
	{
		Stars();
		cout << "\t\tThong bao: Khong co thong tin nhan vien quan ly voi id: " << id << endl;
	}
}

void searchNhanVienQuanLy_SDT(vector<NhanVienQuanLy*> nhanVienQuanLy)
{
	Stars();
	cin.ignore();
	cout << "\t\t   Nhap SDT nhan vien quan ly can tim kiem: ";
	int dem = 0;
	string id;
	getline(cin, id);
	Stars();
	cout << "\n\t\t\t***THONG TIN NHAN VIEN QUAN LY***\n";
	for (int i = 0; i < nhanVienQuanLy.size(); ++i) {
		if (nhanVienQuanLy[i]->getSoDT() == id) {
			Stars();
			cout << nhanVienQuanLy[i];
			++dem;
		}
	}
	if (!dem)
	{
		Stars();
		cout << "\t\tThong bao: Khong co nhan vien quan ly co so dien thoi la: " << id << endl;
	}
}

VeXe* seachVeXe_sdtchuXe(vector<ChuXe*> chuXe)
{
	string s;
	fflush(stdin);
	cout << "Nhap so dien thoai chu xe: ";
	getline(cin, s);
	getline(cin, s);
	int n = chuXe.size();
	int i;
	VeXe* vx = new VeXe;
	for (i = 0; i < n; i++)
	{
		if (chuXe[i]->getSoDT() == s)
		{
			vx = chuXe[i]->getVeXe();
			cout << chuXe[i]->getVeXe();
			break;
		}
	}
	return vx;
}





// In thong tin
void in_ThongTinChuXe(vector<ChuXe*> chuXe);
void in_ThongTinVeXe(vector<VeXe*> veXe);
void in_ThongTinLichVaoRa(vector<LichVaoRa*> lichVaoRa);
void in_ThongTinNhanVienQuanLy(vector<NhanVienQuanLy*> nhanVienQuanLy);

// QuanLy
// Them
//void createVeXe_ChuXe(vector<VeXe*> veXe, vector<ChuXe*> chuXe);
//void createLichVaoRa_VeXe(vector<LichVaoRa*> lichVaoRa, vector<VeXe*> veXe);
//void createNhanVienQuanLy(vector<NhanVienQuanLy*> nhanVienQuanLy);

// Sua

// Xoa
void deleteChuXe_ID(vector<ChuXe*> chuXe);
void deleteVeXe_ID(vector<VeXe*> chuXe);
void deleteNhanVienQuanLy_ID(vector<NhanVienQuanLy*> nhanVienQuanLy);


int main()
{
	DatabaseService service;
	vector<ChuXe*> chuXe = service.getDataChuXe();
	vector<VeXe*> veXe = service.getDataVeXe();
	vector<LichVaoRa*> lichVaoRa = service.getDataLichVaoRa();
	vector<NhanVienQuanLy*> nhanVienQuanLy = service.getDataNVQuanLy();
	setChuXe_VexeRelationShip(chuXe, veXe);
	setVeXe_lichVaoRaRelationShip(veXe, lichVaoRa);
	setLichVaoRa_nvQuanLyRelationship(lichVaoRa, nhanVienQuanLy);
	int _check = 0;
	//do
	//{
	//	system("cls");
	//	Stars();
	//	cout << "\t\t   Nhap user: ";
	//	fflush(stdin);
	//	string _id;
	//	getline(cin, _id);
	//	cout << "\t\t   Nhap pass: ";
	//	fflush(stdin);
	//	string _pass;
	//	getline(cin, _pass);
	//	Stars();
	//	for (int i = 0; i < nhanVienQuanLy.size(); i++)
	//	{
	//		if (nhanVienQuanLy[i]->getNVquanLyID() == _id && nhanVienQuanLy[i]->getSoDT() == _pass)
	//		{
	//			_check = i++;
	//			break;
	//		}
	//	}
	//	
	//} while (_check == 0);

	//minh se danh dau cai vi tri ma nhan vien quan ly dang nhap la mot bien dem;
	//int indexNVQL = -1;
	int indexNVQL = 0;

	while (true)
	{
		system("cls");
		Stars();
		cout << "\t\t  1. Hien thi danh sach thong tin." << endl;
		cout << "\t\t  2. Tim kiem thong tin." << endl;
		cout << "\t\t  3. Quan ly." << endl;
		cout << "\t\t  0. Thoat chuong trinh." << endl;
		Stars();

		cout << "\t\t   Enter your selection: ";
		int sel;
		cin >> sel;
		switch (sel)
		{
		case 1:
		{
			int check = 1;
			while (check)
			{
				system("cls");
				Stars();

				cout << "\t\t  1. Hien thi danh sach thong tin chu xe." << endl;
				cout << "\t\t  2. Hien thi danh sach thong tin ve xe." << endl;
				cout << "\t\t  3. Hien thi danh sach thong tin lich vao ra." << endl;
				cout << "\t\t  4. Hien thi danh sach thong tin nhan vien quan ly." << endl;
				cout << "\t\t  0. Thoat lua chon." << endl;
				Stars();

				cout << "\t\t   Enter your selection: ";
				int sel;
				cin >> sel;
				switch (sel)
				{
				case 1:
					system("cls");
					in_ThongTinChuXe(chuXe);
					system("pause");
					break;
				case 2:
					system("cls");
					in_ThongTinVeXe(veXe);
					system("pause");
					break;
				case 3:
					system("cls");
					in_ThongTinLichVaoRa(lichVaoRa);
					system("pause");
					break;
				case 4:
					system("cls");
					in_ThongTinNhanVienQuanLy(nhanVienQuanLy);
					system("pause");
					break;

				case 0:
					check = 0;
					break;
				default:
					cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
					system("pause");
					break;
				}
			}
		}
		break;
		case 2:
		{
			int check = 1;
			while (check)
			{
				system("cls");
				Stars();

				cout << "\t\t  1. Tim kiem thong tin chu xe." << endl;
				cout << "\t\t  2. Tim kiem thong tin ve xe." << endl;
				cout << "\t\t  3. Tim kiem thong tin lich vao ra." << endl;
				cout << "\t\t  4. Tim kiem thong tin nhan vien quan ly." << endl;
				cout << "\t\t  0. Thoat lua chon." << endl;
				Stars();

				cout << "\t\t   Enter your selection: ";
				int sel;
				cin >> sel;
				switch (sel)
				{
				case 1:
				{
					int check = 1;
					while (check)
					{
						system("cls");
						Stars();

						cout << "\t\t  1. Tim theo ID chu xe." << endl;
						cout << "\t\t  2. Tim theo SDT chu xe." << endl;
						cout << "\t\t  0. Thoat lua chon." << endl;
						Stars();

						cout << "\t\t   Enter your selection: ";
						int sel;
						cin >> sel;
						switch (sel)
						{
						case 1:
							system("cls");
							searchChuXe_ID(chuXe);
							system("pause");
							break;
						case 2:
							system("cls");
							searchChuXe_SDT(chuXe);
							system("pause");
							break;
						case 0:
							check = 0;
							break;
						default:
							cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
							system("pause");
							break;
						}
					}
				}
				break;
				case 2:
				{
					int check = 1;
					while (check)
					{
						system("cls");
						Stars();

						cout << "\t\t  1. Tim theo ID ve xe." << endl;
						cout << "\t\t  2. Tim theo bien so." << endl;
						cout << "\t\t  3. Tim theo ID chu xe." << endl;
						cout << "\t\t  4. Tim theo SDT chu xe." << endl;
						cout << "\t\t  5. Tim theo ho ten chu xe." << endl;
						cout << "\t\t  0. Thoat lua chon." << endl;
						Stars();

						cout << "\t\t   Enter your selection: ";
						int sel;
						cin >> sel;
						switch (sel)
						{
						case 1:
							system("cls");
							searchVeXe_ID(veXe);
							system("pause");
							break;
						case 2:
							system("cls");
							searchVeXe_BienSo(veXe);
							system("pause");
							break;
						case 3:
							system("cls");
							searchVeXe_IDChuXe(veXe);
							system("pause");
							break;
						case 4:
							system("cls");
							searchVeXe_SDTChuXe(chuXe);
							system("pause");
							break;
						case 5:
							system("cls");
							searchVeXe_HoTenChuXe(chuXe);
							system("pause");
							break;
						case 0:
							check = 0;
							break;
						default:
							cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
							system("pause");
							break;
						}
					}
				}
				break;
				case 3:
				{
					int check = 1;
					while (check)
					{
						system("cls");
						Stars();

						cout << "\t\t  1. Tim danh sach theo ngay." << endl;
						cout << "\t\t  2. Tim danh sach theo thang." << endl;
						cout << "\t\t  3. Tim danh sach theo nam." << endl;
						cout << "\t\t  4. Tim danh sach theo bien so xe." << endl;
						cout << "\t\t  5. Tim danh sach theo ID nhan vien quan ly." << endl;
						cout << "\t\t  0. Thoat lua chon." << endl;
						Stars();

						cout << "\t\t   Enter your selection: ";
						int sel;
						cin >> sel;
						switch (sel)
						{
						case 1:
							system("cls");
							searchLichVaoRa_Ngay(lichVaoRa);
							system("pause");
							break;
						case 2:
							system("cls");
							searchLichVaoRa_Thang(lichVaoRa);
							system("pause");
							break;
						case 3:
							system("cls");
							searchLichVaoRa_Nam(lichVaoRa);
							system("pause");
							break;
						case 4:
							system("cls");
							searchLichVaoRa_bienSoXe(lichVaoRa);
							system("pause");
							break;
						case 5:
							system("cls");
							searchLichVaoRa_idNVQuanLy(nhanVienQuanLy);
							system("pause");
							break;
						case 0:
							check = 0;
							break;
						default:
							cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
							system("pause");
							break;
						}
					}
				}
				break;
				case 4:
				{
					int check = 1;
					while (check)
					{
						system("cls");
						Stars();

						cout << "\t\t  1. Tim nhan vien quan ly theo ID." << endl;
						cout << "\t\t  2. Tim nhan vien theo so dien thoai." << endl;
						cout << "\t\t  0. Thoat lua chon." << endl;
						Stars();
						cout << "\t\t   Enter your selection: ";
						int sel;
						cin >> sel;
						switch (sel)
						{
						case 1:
							system("cls");
							searchNhanVienQuanLy_ID(nhanVienQuanLy);
							system("pause");
							break;
						case 2:
							system("cls");
							searchNhanVienQuanLy_SDT(nhanVienQuanLy);
							system("pause");
							break;
						case 0:
							check = 0;
							break;
						default:
							cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
							system("pause");
							break;
						}
					}
				}
				break;

				case 0:
					check = 0;
					break;
				default:
					cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
					system("pause");
					break;
				}
			}
		}
		break;
		case 3:
		{
			if (indexNVQL > -1 || Login(nhanVienQuanLy, indexNVQL)) {
				int check = 1;
				while (check)
				{
					system("cls");
					Stars();

					cout << "\t\t  1. Tao ve xe." << endl;
					cout << "\t\t  2. Tao lich vao ra." << endl;
					cout << "\t\t  3. Tao nhan vien quan ly." << endl;
					cout << "\t\t  4. Xoa chu xe." << endl;
					cout << "\t\t  5. Xoa nhan vien quan ly." << endl;
					cout << "\t\t  6. Log out." << endl;
					cout << "\t\t  0. Thoat lua chon." << endl;
					Stars();

					cout << "\t\t   Enter your selection: ";
					int sel;
					cin >> sel;
					switch (sel)
					{
					case 1:
					{
						system("cls");
						createVeXe_ChuXe(chuXe, veXe);
						system("pause");
					}
					break;
					case 2:
					{
						system("cls");
						createLichVaoRa_VeXe(veXe, lichVaoRa, nhanVienQuanLy, indexNVQL);
						system("pause");
					}
					break;
					case 3:
					{
						system("cls");
						cout << "Tao nhan vien quan ly:";
						createNhanVienQuanLy(nhanVienQuanLy);
						cout << nhanVienQuanLy[nhanVienQuanLy.size() - 1];
						system("pause");
					}
					break;
					case 4:
						system("cls");
						in_ThongTinNhanVienQuanLy(nhanVienQuanLy);
						system("pause");
						break;

					case 6:
						system("cls");
						indexNVQL = -1;
						check = 0;
						break;

					case 0:
						check = 0;
						break;
					default:
						cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
						system("pause");
						break;
					}
				}
			}

		}
		break;
		case 0:
			cout << "\t\t   Cam on ban da su dung chuong trinh!" << endl;
			exit(0);
		default:
			cout << "\t\t   Wrong selection. Please Re-enter!" << endl;
			system("pause");

			break;
		}
	}












	//chuXe[0]->getVeXe()->getLichVaoRa()[0]->getNVQuanLy();

	/*char ch;
	do
	{
		introduce();
		cout << "chon chuc nang: ";
		fflush(stdin);
		cin >> ch;
		switch (ch)
		{
		case '1':
			system("cls");
			for (int i = 0; i < chuXe.size(); i++)
			{
				cout << chuXe[i] << endl;
			}
			break;
		case '2':
			system("cls");
			for (int i = 0; i < veXe.size(); i++)
			{
				cout << veXe[i] << endl;
			}
			break;
		case '3':
			system("cls");
			for (int i = 0; i < nhanVienQuanLy.size(); i++)
			{
				cout << nhanVienQuanLy[i] << endl;
			}
			break;
		case '4':
			system("cls");
			seachChuXe_sdtchuXe(chuXe);
			break;
		case '5':
			system("cls");
			seachVeXe_biensoVeXe(veXe);
			break;
		case '6':
		{
			system("cls");
			VeXe* vx = new VeXe;
			vx = seachVeXe_sdtchuXe(chuXe);
			for (int i = 0; i < vx->getLichVaoRa().size(); i++)
			{
				cout << vx->getLichVaoRa()[i] << endl;
			}
		}
			break;
		case '7':
		{
			system("cls");
			cout << "truoc khi tao ve xe thi tao chu xe: " << endl;
			ChuXe* cxx = new ChuXe;
			VeXe* vxx = new VeXe;
			cxx = createChuXe(chuXe);
			vxx = createVeXe(veXe);
			createVeXe_ChuXeRelationShip(vxx, cxx);

		}
			break;
		}
	} while (1);*/

	//string a = "insert into LICHVAORA (ID,ThoiGian,LoaiVaoRa,NVQuanLyID,VeXeID) values ('VR009','2019-03-010 11:43:32','Vao','QL001','VX001')";
	//service.queryInsertDB(a);
	service.close();
	return 0;
}

void in_ThongTinChuXe(vector<ChuXe*> chuXe)
{
	cout << "\n\t\t\t\t***DANH SACH CHU XE***\n";
	for (int i = 0; i < chuXe.size(); i++)
	{
		Stars();
		cout << chuXe[i] << endl;
	}
}

void in_ThongTinVeXe(vector<VeXe*> veXe)
{
	cout << "\n\t\t\t\t***DANH SACH VE XE***\n";
	for (int i = 0; i < veXe.size(); i++)
	{
		Stars();
		cout << veXe[i] << endl;
	}
}

void in_ThongTinLichVaoRa(vector<LichVaoRa*> lichVaoRa)
{
	cout << "\n\t\t\t***DANH SACH LICH VAO RA***\n";
	for (int i = 0; i < lichVaoRa.size(); i++)
	{
		Stars();
		cout << lichVaoRa[i] << endl;
	}
}

void in_ThongTinNhanVienQuanLy(vector<NhanVienQuanLy*> nhanVienQuanLy)
{
	cout << "\n\t\t\t***DANH SACH NHAN VIEN QUAN LY***\n";
	for (int i = 0; i < nhanVienQuanLy.size(); i++)
	{
		Stars();
		cout << nhanVienQuanLy[i] << endl;
	}
}


