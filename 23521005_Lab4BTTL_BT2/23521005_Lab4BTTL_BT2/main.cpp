// 23521005_Lab4BTTL_BT2.cpp 
#include"Phong.h"
#include"Deluxe.h"
#include"Premium.h"
#include"Business.h"
#include <iostream>
#include <vector>
using namespace std;
//Vi DU: Deluxe a(...); Deluxe b(...); Premium c(...); Premium d(...); Business e(…)
int main()
{
    cout << "=====NHAP THONG TIN 2 PHONG DELUXE=====\n";
    Deluxe a(1,1,1);
    a.Nhap();
    a.Xuat();
    Deluxe b(1, 1, 1);
    b.Nhap();
    b.Xuat();
    cout << "=====NHAP THONG TIN 2 PHONG PREMIUM=====\n";
    Premium c(1, 1);
    c.Nhap();
    c.Xuat();
    Premium d(1, 1);
    d.Nhap();
    d.Xuat();
    cout << "=====NHAP THONG TIN 1 PHONG BUSINESS=====\n";
    Business e(1);
    e.Nhap();
    e.Xuat();

    vector<Phong*> phong = { &a, &b, &c, &d, &e };
    double DTBusiness = 0;
    double DTPremium = 0;
    double DTDeluxe = 0;

    for (int i = 0; i < phong.size(); i++) {
        if (phong[i]->getLoai() == "Business") DTBusiness+= phong[i]->TinhDoanhThu();
        else if (phong[i]->getLoai() == "Premium") DTPremium += phong[i]->TinhDoanhThu();
        else DTDeluxe += phong[i]->TinhDoanhThu();

    }
    double maxx = DTBusiness;
    if (maxx < DTPremium) maxx = DTPremium;
    if (maxx < DTDeluxe) maxx = DTDeluxe;

    //In ra cac loai phong co doanh thu cao nhat:
    cout << "PHONG CO DOANH THU CAO NHAT: \n";
    if (maxx == DTBusiness) {
        cout << "Phong Business: " << maxx << " nghin VND" <<endl;
    }
    if (maxx == DTPremium) {
        cout << "Phong Premium: " << maxx << " nghin VND" << endl;
    }
    if (maxx == DTDeluxe) {
        cout << "Phong Deluxe: " << maxx << " nghin VND" << endl;
    }
    return 0;
}
