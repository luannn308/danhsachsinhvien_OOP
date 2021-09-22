#include "Truong.h"
Truong::Truong() {
	soSinhVien = 0;
}
Truong::~Truong(){}
void Truong::Nhap() {
	cout << "Nhap so sinh vien: ";
	cin >> soSinhVien;
	for (int i = 0; i < soSinhVien; i++)
	{
		int loai; 
	MENU: cout << "Chon sv: 1.Sinh Vien Dai Hoc, 2.Sinh Vien Cao Dang	=> ";
			cin >> loai;
			cin.ignore();
		if (loai == 1) {
			DSSV[i] = new SinhVienDaiHoc;
		}
		else if (loai == 2) {
			DSSV[i] = new SinhVienCaoDang;
		}
		else
		{
			goto MENU;
		}
		DSSV[i]->Nhap();
	}
}
void Truong::Xuat() {
	for (int i = 0; i < soSinhVien; i++)
	{
		DSSV[i]->Xuat();
		cout << "\n";
	}
}
int Truong::So_sv_tot_nghiep() {
	int num = 0;
	for (int i = 0; i < soSinhVien; i++)
	{
		if (DSSV[i]->Xet_tot_nghiep()) num++;
	}
	return num;
}
void Truong::Xuat_sv_top() {
	int diemMax=0;
	for (int i = 0; i < soSinhVien; i++)
	{	
		if(diemMax<DSSV[i]->diemtb)
		diemMax = DSSV[i]->diemtb;
	}
	for (int i = 0; i < soSinhVien; i++)
	{
		if (DSSV[i]->diemtb == diemMax) {
			DSSV[i]->Xuat();
			cout << "\n";
		}
	}
}