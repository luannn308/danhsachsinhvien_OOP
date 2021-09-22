#include"Truong.h"
#include<iostream>
using namespace std;
int main() {
	Truong UIT;
	UIT.Nhap();
	UIT.Xuat();
	cout << "So sinh vien tot nghiep: " << UIT.So_sv_tot_nghiep()<<endl;
	cout << "Nhung sinh vien co diemtb cao nhat: " << endl;
	UIT.Xuat_sv_top();
	return 0;
}