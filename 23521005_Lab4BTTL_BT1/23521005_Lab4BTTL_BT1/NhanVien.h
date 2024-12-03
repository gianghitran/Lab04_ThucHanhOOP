#pragma once
#include<iostream>
using namespace std;
class NhanVien {
protected: //con chau duoc truy xuat
	string MaNV; //Ma so nhan vien
	string Ten; //Ten nhan vien
	double LuongCB;//Luong co ban
public:
	NhanVien();//Khoi tao constructor mac dinh
	NhanVien(string ma, string ten, double lcb);//Khoi tao constructor gan tham so
	virtual void Nhap();//Nhap thong tin co ban cua nhan vien
	virtual void Xuat();//Xuat thogn tin co ban cua nhan vien
};