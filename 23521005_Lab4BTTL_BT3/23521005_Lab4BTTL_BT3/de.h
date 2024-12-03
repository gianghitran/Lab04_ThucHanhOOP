#pragma once
#include "GiaSuc.h"
#include <iostream>
using namespace std;
class de:public GiaSuc {
private:
	string keu; //tieng keu
public:
	de(string KEU = "be be be be", float SUA = 0);//khoi tao keu ="be be be be"
	void TinhSua();//random so lit sua 0-10
	void Keu() const override;//ghi de tieng keu
	void Xuat() override;//ghi de PT GiaSuc::Xuat()
};