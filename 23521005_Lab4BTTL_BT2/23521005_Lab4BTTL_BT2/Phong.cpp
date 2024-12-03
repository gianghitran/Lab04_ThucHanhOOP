#include "Phong.h"
#include <iostream>
using namespace std;
//Khoi tao constructor mac dinh
Phong::Phong() :SoDem(0), phiDV(0), phiPV(0) {};
//Khoi tao constructor co tham so
Phong::Phong(int dem, double phiDichVu,double phiPhucVu): SoDem(dem), phiDV(phiDichVu), phiPV(phiPhucVu) {}

void Phong::Nhap() {
	cout << "Nhap so dem o khach san: ";
	cin >> SoDem;//so dem o khach san
}
void Phong::Xuat() {
	cout << "So dem o khach san: ";
	cout << SoDem<<endl; //In ra so dem luu tru
}