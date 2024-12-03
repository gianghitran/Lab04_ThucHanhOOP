#include "GiaSuc.h"
#include "de.h"
#include <iostream>
#include <string>
using namespace std;

de::de(string KEU, float SUA)
	: GiaSuc(0, false, "de", SUA), keu(KEU) {}

void de::Keu() const {
	cout << keu << endl;
}
//Tinh so luong sua
void de::TinhSua() {
	sua = rand() % 11;//random tu 0 den 10
}

void de::Xuat() {
	GiaSuc::Xuat();
	cout << "Tieng keu: " << keu << endl;
	TinhSua();
	cout << "So lit sua: " << sua << " lit" << endl;
}