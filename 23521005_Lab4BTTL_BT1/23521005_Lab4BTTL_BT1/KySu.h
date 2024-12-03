#pragma once
#include "NhanVien.h"
#include <iostream>
using namespace std;
class KySu : public NhanVien {
private:
	float GioThem; //ty le thuong
public:
	void Nhap() override;//Nhap thong tin rieng cua quan ly
	double TienThuong();//tinh va tra ve tien thuong
	void Xuat() override;//Xuat thong tin quan ly
};