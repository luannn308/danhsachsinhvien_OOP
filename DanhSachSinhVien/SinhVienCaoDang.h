#pragma once
#include"SinhVien.h"
class SinhVienCaoDang:public SinhVien
{
protected:
	float diemTotNghiep;
public:
	SinhVienCaoDang();
	SinhVienCaoDang(string, string, string, int, float, float);
	~SinhVienCaoDang();
	void Nhap();
	void Xuat() const;
	bool Xet_tot_nghiep();
};

