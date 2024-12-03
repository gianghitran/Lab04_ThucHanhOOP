#include "QuanLy.h"
#include <iostream>
using namespace std;
void QuanLy::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap ty le thuong: ";
	cin >> TLThuong;
}
double QuanLy::TienThuong() {
	return(LuongCB * TLThuong);
}
void QuanLy::Xuat() {
	cout << "THONG TIN QUAN LY----------\n";
	NhanVien::Xuat();
	cout << fixed << setprecision(4) << "Tien thuong cua quan ly: "<<TienThuong()<<" nghin VND" << endl;
}
