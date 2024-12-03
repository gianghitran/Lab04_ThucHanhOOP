#pragma once
#include "Phong.h"
#include <iomanip>
#include <string>
class Business : public Phong {
public:
	Business(int dem); //Constructor co tham so
	void Nhap() override;//Ghi de phuong thuc Nhap
	double TinhDoanhThu() const override;// Ghi de pthuc tinh Doanh Thu
	void Xuat() override;// Ghi de phuong thuc xuat
	std::string getLoai() override;//Ghi de de lay chuoi ten loai phong
};