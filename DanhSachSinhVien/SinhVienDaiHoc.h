#pragma once
#include"SinhVien.h"
class SinhVienDaiHoc:public SinhVien
{
protected:
	string tenLuanVan;
	float diemLuanVan;
public:
	SinhVienDaiHoc();
	SinhVienDaiHoc(string, string, string, int, float, string, float);
	~SinhVienDaiHoc();
	void Nhap();
	void Xuat() const;
	bool Xet_tot_nghiep();
};

