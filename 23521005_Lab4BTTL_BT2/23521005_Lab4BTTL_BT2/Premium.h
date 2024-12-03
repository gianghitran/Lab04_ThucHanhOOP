#pragma once
#include "Phong.h"
#include <iomanip>
#include <string>
class Premium : public Phong {
public:
	Premium(int dem, double phiDichVu );
	void Nhap() override;
	double TinhDoanhThu() const override;
	void Xuat() override;
	std::string getLoai() override;
};
