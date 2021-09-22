#include "SinhVienDaiHoc.h"
SinhVienDaiHoc::SinhVienDaiHoc(): SinhVien(){
	tenLuanVan = "";
	diemLuanVan = 0;
}
SinhVienDaiHoc::SinhVienDaiHoc(string t, string ms, string dc, int s, float d, string tlv, float dlv):SinhVien(t,ms,dc,s,d){
	tenLuanVan = tlv;
	diemLuanVan = dlv;
}
SinhVienDaiHoc::~SinhVienDaiHoc(){}
void SinhVienDaiHoc::Nhap() {
	SinhVien::Nhap();
	cout << "Nhap ten luan van: "; getline(cin, tenLuanVan);
	cout << "Nhap diem luan van: "; cin >> diemLuanVan;
	cin.ignore();
}
void SinhVienDaiHoc::Xuat() const {
	SinhVien::Xuat();
	cout << tenLuanVan << "\t" << diemLuanVan;
}
bool SinhVienDaiHoc::Xet_tot_nghiep() {
	if (soTinChi >= 170 && diemtb >= 5 && diemLuanVan >= 5) {
		return true;
	}
	else return false;
}