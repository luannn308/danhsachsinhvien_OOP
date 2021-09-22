#include "SinhVienCaoDang.h"
SinhVienCaoDang::SinhVienCaoDang():SinhVien() {
	diemTotNghiep = 0;
}
SinhVienCaoDang::SinhVienCaoDang(string t, string ms, string dc, int s, float d, float dtn) :SinhVien(t,ms,dc,s,d) {
	diemTotNghiep = dtn;
}
SinhVienCaoDang::~SinhVienCaoDang(){}
void SinhVienCaoDang::Nhap() {
	SinhVien::Nhap();
	cout << "Nhap diem tot nghiep: "; cin >> diemTotNghiep;
	cin.ignore();
}
void SinhVienCaoDang::Xuat() const {
	SinhVien::Xuat();
	cout << diemTotNghiep;
}
bool SinhVienCaoDang::Xet_tot_nghiep() {
	if (soTinChi >= 120 && diemtb >= 5 && diemTotNghiep >= 5) {
		return true;
	}
	else  return false;
}