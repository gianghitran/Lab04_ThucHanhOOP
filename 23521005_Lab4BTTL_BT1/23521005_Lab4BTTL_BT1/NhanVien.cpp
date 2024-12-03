#include "NhanVien.h"
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

//Khoi tao constructor mac dinh
NhanVien::NhanVien(): Ten(""), MaNV(""),LuongCB(0) {};
//Khoi tao constructor truyen tham so
NhanVien::NhanVien(string ma, string ten, double lcb) : MaNV(ma), Ten(ten), LuongCB(lcb) {};
//Nhap thong tin nhan vien
void NhanVien::Nhap() {
	cout << "Nhap ho va ten nhan vien: ";
	getline(cin,Ten);
	cout << "Nhap ma so nhan vien: ";
	cin >> MaNV;
	cout << "Nhap luong co ban: ";
	cin >> LuongCB;
}
//Xuat thong tin nhan vien
void NhanVien::Xuat() {
	cout << "Ho va ten nhan vien: " << Ten << endl;
	cout << "Ma so nhan vien : " << MaNV << endl;
	//lay toi da 4 chu so phan thap phan
	cout << fixed << setprecision(4) << "Luong co ban: " << LuongCB<<" nghin VND" << endl;//
}