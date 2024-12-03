#include "Phong.h"
#include "Business.h"
#include <iostream>
using namespace std;

//Khoi tao cosntructor mac dinh co tham so
Business::Business(int dem) : Phong(SoDem) {};

void Business::Nhap() {
	cout<< "=====NHAP THONG TIN PHONG BUSINESS=====\n";
	Phong::Nhap();
}

double Business::TinhDoanhThu()const {
	return (SoDem * 300000);
}
//Xuat
void Business::Xuat()
{
	cout << "-----------------------\n";
	cout << "THONG TIN PHONG BUSINESS\n";
	cout << "So dem: " << Phong::SoDem << endl;
	cout << fixed << setprecision(4) << "Doanh thu cua phong: " << TinhDoanhThu()<<" nghin VND" << endl;
	cout << "-----------------------\n";

}

string Business::getLoai() {
	return "Business";
}