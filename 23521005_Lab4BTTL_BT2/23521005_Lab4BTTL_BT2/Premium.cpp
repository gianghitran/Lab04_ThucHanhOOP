#include "Phong.h"
#include "Premium.h"
#include <iostream>
using namespace std;

//Khoi tao cosntructor mac dinh co tham so
Premium::Premium(int dem, double phiDichVu) : Phong(SoDem, phiDichVu) {};

//Nhap 
void Premium::Nhap()
{
	cout << "=====NHAP THONG TIN PHONG PREMIUM=====\n";
	Phong::Nhap();
	cout << "Nhap phi dich vu cua phong: ";
	cin >> phiDV;
}
double Premium::TinhDoanhThu()const {
	return (SoDem * 500000 + phiPV);
}
//Xuat
void Premium::Xuat()
{
	cout << "-----------------------\n";
	cout << "THONG TIN PHONG PREMIUM\n";
	cout << "So dem: " << Phong::SoDem << endl;
	cout << fixed << setprecision(4) << "Phi dich vu: " << Phong::phiDV <<" nghin VND" << endl;
	cout << fixed << setprecision(4) << "Doanh thu cua phong: " << TinhDoanhThu()<<" nghin VND"<<endl;
	cout << "-----------------------\n";
}

string Premium::getLoai() {
	return "Premium";
}