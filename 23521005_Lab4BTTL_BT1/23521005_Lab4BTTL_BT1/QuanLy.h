#pragma once
#include "NhanVien.h"
#include <iostream>
#include <iomanip>
using namespace std;
class QuanLy : public NhanVien{
private:
	float TLThuong; //ty le thuong
public:
	void Nhap() override;//Nhap thong tin rieng cua quan ly
	double TienThuong();//tinh va tra ve tien thuong
	void Xuat() override;//Xuat thong tin quan ly
};