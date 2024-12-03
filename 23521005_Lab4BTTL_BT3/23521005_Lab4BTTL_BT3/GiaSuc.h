#pragma once
#include <string> 
using namespace std;
class GiaSuc {
protected:
	string loai;//"bo" hoac "de" hoac "cuu"
	int con; //so luong con sinh ra
	float sua; //so lit sua
	bool doi; // 1: gia suc dang doi, 0: gia suc khong doi
public:
	GiaSuc();
	GiaSuc(int socon, bool doikhong, string loaiGS, float SLsua);
	void Nhap(); //Nhap thong tin gia suc
	virtual void Xuat(); //Xuat cac thong tin gia suc
	void setDoi(); // Chnh trang thai ve doi
	int SinhCon(); //random so luong con da sinh
	virtual void Keu() const = 0; //in ra tieng keu
};