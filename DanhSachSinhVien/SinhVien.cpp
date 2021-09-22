#include "SinhVien.h"
SinhVien::SinhVien() {
	ten = "";
	mssv = "";
	diaChi = "";
	soTinChi = 0;
	diemtb = 0;
}
SinhVien::SinhVien(string t, string ms, string dc, int s, float d) {
	ten = t;
	mssv = ms;
	diaChi = dc;
	soTinChi = s;
	diemtb = d;
}
SinhVien::~SinhVien(){}
void SinhVien::Nhap() {
	cout << "Nhap ten: "; getline(cin, ten);
	cout << "Nhap mssv: "; getline(cin, mssv);
	cout << "Nhap dia chi: "; getline(cin, diaChi);
	cout << "Nhap so tin chi: "; cin >> soTinChi;
	cout << "Nhap diem trung binh: "; cin >> diemtb;
	cin.ignore();
}
void SinhVien::Xuat() const {
	cout << ten << "\t" << mssv << "\t" << diaChi << "\t" << soTinChi << "\t" << diemtb << "\t";
}