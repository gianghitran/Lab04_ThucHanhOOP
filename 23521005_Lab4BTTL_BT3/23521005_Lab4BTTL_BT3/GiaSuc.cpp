#include "GiaSuc.h"
#include <iostream>
#include <string>
using namespace std;
//Khoi tao constructor mac dinh
GiaSuc::GiaSuc() : loai(""), con(0), doi(0), sua(0) {}
//Khoi tao constructor co tham so
GiaSuc::GiaSuc(int socon, bool doikhong, string loaiGS, float SLsua)
	:loai(loaiGS), con(socon), doi(doikhong), sua(SLsua) {}
//Nhap thong tin gia suc
void GiaSuc::Nhap() {
	cout << "Gia suc co doi khong? ( (1):doi, (0):chua): ";
	cin >> doi; //Nhap 1 hoac 0 the hien tinh trang doi
	while (doi != 1 && doi != 0) {
		cout << "Nhap vao khong dung. Nhap lai!\n"; //yeu cau nhap lai neu nhap khav 0 va 1
		cin >> doi;
	}
}

//Xuat thong tin gia suc
void GiaSuc::Xuat() {
	cout << "----------THONG TIN GIA SUC----------\n";
	cout << "Loai gia suc: " << loai << endl; //in string loai gia suc 
	cout << "So luong con da sinh: "<<con<<endl; //in so luong con da random ra
	if (doi == 1)cout << "Gia suc dang doi!\n"; //in khi doi ==1
	else cout << "Gia suc khong doi!\n";//in khi doi ==0
}

//Thay doi tinh trang doi cua gia suc thanh dang doi
void GiaSuc::setDoi() {
	doi = 1;
}
//Sinh con ngau nhien
int GiaSuc::SinhCon() {
	con = rand()%5 + 1;//Moi lan sinh tu 1 den 5 con 
	return con;
}
