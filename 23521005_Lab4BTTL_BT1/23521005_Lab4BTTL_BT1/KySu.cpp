#include "KySu.h"
#include <iostream>
#include <iomanip>
using namespace std;
void KySu::Nhap() {
	//cin.ignore();
	NhanVien::Nhap();
	cout << "Nhap so gio lam them: ";
	cin >> GioThem;
}
double KySu::TienThuong() {
	return(GioThem * 100000);
}
void KySu::Xuat() {
	cout << "THONG TIN KY SU----------\n";
	NhanVien::Xuat();
	cout << fixed << setprecision(4) << "Tien thuong cua ky su: " << TienThuong() << " nghin VND" << endl;
}
