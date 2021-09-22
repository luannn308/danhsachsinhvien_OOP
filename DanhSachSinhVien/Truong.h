#pragma once
#include"SinhVien.h"
#include"SinhVienCaoDang.h"
#include"SinhVienDaiHoc.h"
#define MAX 1000
class Truong
{
protected:
	SinhVien *DSSV[MAX];
	int soSinhVien;
public:
	Truong();
	~Truong();
	void Nhap();
	void Xuat();
	int So_sv_tot_nghiep();
	void Xuat_sv_top();
};

