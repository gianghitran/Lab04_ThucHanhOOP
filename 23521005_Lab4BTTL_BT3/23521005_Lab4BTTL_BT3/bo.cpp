#include "GiaSuc.h"
#include "bo.h"
#include <iostream>
#include <string>
using namespace std;
//Khoi tao constructor co tham so 
bo::bo(string KEU, float SUA)
	: GiaSuc(0, false, "bo", SUA), keu(KEU) {}

void bo::Keu() const{
	cout << keu<<endl;//in tieng keu "um bo um bo"
}
//Tinh so luong sua
void bo::TinhSua() {
	sua = rand() % 21; //random so lit dua tu 0 den 20
}
//Xuat thong tin cua bo
void bo::Xuat() {
	GiaSuc::Xuat();
	cout << "Tieng keu: " << keu << endl; //in "um bo um bo"
	TinhSua(); //goi ham random so lit sua
	cout << "So lit sua: " << sua << " lit"<< endl; //in so lit sua
}