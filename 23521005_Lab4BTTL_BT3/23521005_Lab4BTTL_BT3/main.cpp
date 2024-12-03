// 23521005_Lab4BTTL_BT3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "GiaSuc.h"
#include "bo.h"
#include "cuu.h"
#include "de.h"

#include <iostream>
#include <string> 
#include <vector>
using namespace std;
int main()
{
    vector<GiaSuc*> nongTrai;
    
    int SLgiasuc;
    cout << "Nhap so luong gia suc: ";
    cin >> SLgiasuc;

    for (int i = 0; i < SLgiasuc; ++i) {
        string loai;
        cout << "Nhap loai gia suc (bo/cuu/de): ";
        cin >> loai;
        while (loai != "bo" && loai != "cuu" && loai != "de") {
            cout << "Loai khong hop le! Nhap lai: ";
            cin >> loai;
        }
        if (loai == "bo") {
            nongTrai.push_back(new bo());  // Default constructor used
        }
        else if (loai == "cuu") {
            nongTrai.push_back(new cuu());
        }
        else if (loai == "de") {
            nongTrai.push_back(new de());
        }
        
    }

    cout << "Am thanh trong nong trai: \n";
    for (auto gs : nongTrai) {
        gs->Keu();
    }

    cout << "----------NHAP THONG TIN GIA SUC----------\n";
    for (auto gs : nongTrai) {
        gs->Nhap();
        gs->setDoi();// Theo de bai  tat ca gia suc dang doi 
    }

   

    for (auto gs : nongTrai) {
        //goi phuong thuc de random sluong con sinh ra cua tung lop con
        gs->SinhCon();
    }
    
    cout << "----------THONG KE GIA SUC TRONG NONG TRAI----------\n";
    for (auto gs : nongTrai) {
        gs->Xuat();//goi phuong thuc xuat cua bo/de/cuu
    }
    return 0;
}
