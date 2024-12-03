#pragma once
#include "GiaSuc.h"
#include <iostream>
using namespace std;
class bo :public GiaSuc {
private:
	string keu; //tieng keu
public:
	bo( string KEU = "um bo um bo", float SUA=0);//khoi tao keu ="um bo um bo"
	void TinhSua();//random so lit sua 0-20
	void Keu() const override;//ghi de
	void Xuat() override;//ghi de 
};