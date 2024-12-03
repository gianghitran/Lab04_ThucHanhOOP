#pragma once
#include "GiaSuc.h"
#include <iostream>
using namespace std;
class cuu :public GiaSuc {
private:
	string keu; //tieng keu
public:
	cuu(string KEU = "be eeeeeee", float SUA = 0);//khoi tao keu ="be eeeeeee"
	void TinhSua();//random so lit sua 0-5
	void Keu() const override;//ghi de tieng keu
	void Xuat() override;//ghi de PT GiaSuc::Xuat()
};