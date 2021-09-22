#pragma once
#include<iostream>
#include<string>
using namespace std;
class SinhVien
{
protected:
	string ten;
	string mssv;
	string diaChi;
	int soTinChi;
public:
	float diemtb;
	SinhVien();
	SinhVien(string, string, string, int, float);
	~SinhVien();
	virtual void Nhap();
	virtual void Xuat() const;
	virtual bool Xet_tot_nghiep() = 0;
};

