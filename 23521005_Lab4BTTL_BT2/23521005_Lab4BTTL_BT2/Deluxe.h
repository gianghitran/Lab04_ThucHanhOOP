#pragma once
#include "Phong.h"
#include <iomanip>
#include <string>
class Deluxe : public Phong{
public:
	Deluxe(int dem, double phiDichVu, double phiPhucVu );
	void Nhap () override ;
	double TinhDoanhThu () const override;
	void Xuat() override;
	std::string getLoai() override;
};