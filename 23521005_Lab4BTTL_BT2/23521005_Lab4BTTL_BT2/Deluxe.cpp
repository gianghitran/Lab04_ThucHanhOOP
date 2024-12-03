#include "Phong.h"
#include "Deluxe.h"
#include <iostream>
#include <iomanip>

using namespace std;

//Khoi tao cosntructor mac dinh co tham so
Deluxe::Deluxe(int dem, double phiDichVu, double phiPhucVu) : Phong(SoDem, phiDichVu, phiPhucVu) {};

//Nhap 
void Deluxe::Nhap()
{
	cout << "=====NHAP THONG TIN PHONG DELUXE=====\n";
	Phong::Nhap();
	cout << "Nhap phi dich vu cua phong: ";
	cin >> phiDV;
	cout << "Nhap phi phuc vu cua phong: ";
	cin >> phiPV;
}
double Deluxe::TinhDoanhThu() const {
	return (SoDem * 750000 + phiPV + phiDV);
}
//Xuat
void Deluxe::Xuat()
{
	cout << "-----------------------\n";
	cout << "THONG TIN PHONG DELUXE\n";
	cout << "So dem: " << Phong::SoDem<<endl;
	cout << fixed << setprecision(4) << "Phi dich vu: " << Phong::phiDV <<" nghin VND" << endl;
	cout << fixed << setprecision(4) << "Phi phuc vu: " << Phong::phiPV <<" nghin VND" << endl;
	cout << fixed << setprecision(4) << "Doanh thu cua phong: " << TinhDoanhThu()<< " nghin VND" <<endl;
	cout << "-----------------------\n";
}

string Deluxe::getLoai() {
	return "Deluxe";
}