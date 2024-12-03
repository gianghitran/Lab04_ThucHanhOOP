#pragma once
#include <string>

class Phong {
protected:
	int SoDem; //so dem
	double phiDV;//phi dich vu
	double phiPV;//phi phuc vu
public:
	Phong();
	Phong(int dem, double phiDichVu = 0, double phiPhucVu =0 );
	virtual double TinhDoanhThu() const = 0; // Ham thuan ao
	virtual void Nhap();
	virtual void Xuat();
	virtual std::string getLoai() = 0;
};