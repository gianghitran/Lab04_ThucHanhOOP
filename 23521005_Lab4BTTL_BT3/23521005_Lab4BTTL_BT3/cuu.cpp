#include "GiaSuc.h"
#include "cuu.h"
#include <iostream>
#include <string>
using namespace std;

cuu::cuu(string KEU, float SUA)
	: GiaSuc(0, false, "cuu", SUA), keu(KEU) {}

void cuu::Keu() const {
	cout << keu << endl;
}
//Tinh so luong sua
void cuu::TinhSua() {
	sua = rand() % 6;//random tu 0 den 5
}
//Xuat thong tin ca the
void cuu::Xuat() {
	GiaSuc::Xuat();
	cout << "Tieng keu: " << keu << endl;
	TinhSua();
	cout << "So lit sua: " << sua << " lit" << endl;
}